/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_2] [i_2] [i_3] = ((((min((min(var_12, var_10)), ((min((arr_0 [i_0] [i_0]), -19711)))))) ? ((-(var_12 >= -25216))) : (arr_1 [0])));
                            arr_10 [i_2] [i_1] [i_2] [i_2] = ((((min(var_7, 241))) * (((0 & (arr_3 [7] [i_1] [i_2 - 2]))))));
                        }
                    }
                }
                arr_11 [i_1] = ((((((950667735 | 407441363) ? ((max((arr_8 [i_1] [i_1] [i_0] [i_0]), 0))) : (arr_3 [i_1] [i_0] [i_0])))) | ((250740366 % (arr_1 [i_0])))));
                arr_12 [i_0] [i_1] = 0;
            }
        }
    }
    var_19 = ((((max(0, 1))) != var_4));
    #pragma endscop
}

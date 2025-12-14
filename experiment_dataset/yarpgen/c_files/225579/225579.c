/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_8 ? var_4 : (min(var_2, var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = 311325150628436413;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] = ((((((arr_10 [i_0] [i_1] [i_1] [i_4]) ? (arr_10 [i_0] [i_1] [i_2] [i_4]) : (arr_10 [i_4] [i_1] [i_1] [i_0])))) ? (arr_6 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_3]) : (arr_0 [i_3])))));
                                var_22 = ((+(max(((((arr_5 [i_1]) && 31456))), 110011702481470536))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((((19919 ? -17 : -110011702481470556))) && (!var_5))) && 858903753));
    #pragma endscop
}

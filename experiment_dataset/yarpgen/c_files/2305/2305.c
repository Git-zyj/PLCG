/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (((((arr_5 [i_1]) ? (((arr_2 [i_0]) ? 255 : 1)) : (((arr_2 [i_1]) ? 1 : 1))))) ? ((~(((arr_2 [i_0]) ? 7672304139749773826 : 1)))) : ((((!(((arr_1 [i_1]) || 18)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] = ((~((((((17163091968 << (((arr_3 [i_3]) + 1417301732))))) && ((((arr_2 [i_0]) / (arr_5 [i_2])))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = (arr_7 [i_0] [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

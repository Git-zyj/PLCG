/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_9);
    var_12 = (((((var_3 && ((max(var_5, var_4)))))) * (max(((min(var_2, var_2))), (~var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 &= ((~(min((max(0, 5996707297767991505)), (((0 ? 5250 : 198)))))));
                var_14 -= (max(((96877981 ? 216 : 68744062)), (((var_1 == (arr_2 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = (min((((var_10 ? (arr_6 [i_3]) : -87))), (-3072 & var_1)));
                            arr_11 [i_1] [i_2] [i_2] [1] [i_0] [i_1] = (min((!2), (min(40, 253))));
                            var_15 += ((1739976800 ? 32741 : ((1 ? 54 : 40))));
                            var_16 = (~216);
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, ((min((min(1426003687, 1739976802)), (~var_3))))));
    #pragma endscop
}

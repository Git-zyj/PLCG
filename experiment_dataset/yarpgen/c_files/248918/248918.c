/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_20 = ((9611284096626011444 ? 8835459977083540166 : 8835459977083540162));
                        var_21 = ((-1548953080 ? 1548953079 : 251475264847136874));
                        var_22 = ((326741647216832734 ? -326741647216832734 : 9611284096626011459));
                    }
                    arr_10 [i_0] [i_0] [i_0] = 31497;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_23 = 18446744073709551589;
                                var_24 = 25396;
                            }
                        }
                    }
                }
                var_25 = 109;
                var_26 = -14178;
            }
        }
    }
    #pragma endscop
}

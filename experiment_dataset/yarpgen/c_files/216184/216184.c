/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_12 = -1;
                    var_13 -= 8634725574458318788;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = 0;
                                var_15 -= -25;
                            }
                        }
                    }
                }
                var_16 = 1;
                var_17 = (max(var_17, 40));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_18 = (min(var_18, -4096));
                    var_19 = (min(var_19, 1));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_20 = 6;
                                var_21 = (min(var_21, 9880));
                                var_22 = -8634725574458318808;
                            }
                        }
                    }
                    var_23 += 31316;
                    var_24 &= 127;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_19 [i_1] = 512;
                    var_25 = 1;
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_26 = (min(var_26, 16266785548393293959));
                    var_27 = (min(var_27, 1456603090));
                }
            }
        }
    }
    var_28 = var_10;
    var_29 = var_11;
    var_30 = var_7;
    #pragma endscop
}

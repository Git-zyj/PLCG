/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_2] = max((min((max(32767, 3985120958754939072)), (min(var_7, (arr_2 [i_0] [i_0]))))), (min((max((arr_0 [i_0] [i_0 - 2]), 0)), ((min(var_6, var_10))))));
                        arr_10 [i_2] [14] [i_2] = (min(16010557907752031312, 206));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_14 *= -80;
                            arr_15 [i_0] [i_2] [3] [i_4] [i_5] = 1;
                            var_15 += 79;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_2] [i_1] = -22;
                            var_16 = 18446744073709551615;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_21 [i_4] &= 77;
                            var_17 = -80;
                            var_18 = 536870911;
                        }
                        arr_22 [i_2] [i_1] [i_2] [i_4] = 32767;
                        arr_23 [i_2] [i_2] = 41;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_27 [6] [i_1] [18] [i_4] [i_4] &= 6406863;
                            var_19 |= 1;
                            var_20 = -80;
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_21 = 0;
                            var_22 *= 214;
                            var_23 -= -27;
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_24 += 6392;
                            var_25 = -319594026;
                        }
                        arr_33 [i_2] [i_2] [i_2] [i_2] = 162;
                    }
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        arr_36 [i_2] [i_1] [i_1] = (max(-1, 15643561223646110086));
                        arr_37 [i_2] = (max((max((max(2803182850063441530, var_9)), ((max((arr_2 [i_11] [i_1]), var_4))))), ((min(1, 206)))));
                    }
                    var_26 = (max((max((max((arr_35 [i_2] [13] [i_2] [i_2] [i_2]), var_0)), ((max(3163, 255))))), ((min(((min(80, -58))), (min(var_11, 2429883438)))))));
                    var_27 = (min((min((max(2803182850063441530, 8557)), 130796910)), (min(((max((arr_2 [i_1] [i_1]), var_5))), (min(255, 18446744073709551615))))));
                }
            }
        }
    }
    var_28 &= (min((min(3283920856, (max(18446744073709551615, 8557)))), 32767));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 23;i_13 += 1)
        {
            {
                arr_44 [i_13] |= (max((min(((min(8557, 85))), (min(var_12, var_3)))), (min((max(var_3, (arr_43 [i_12]))), ((min((arr_42 [i_13 + 1] [i_12]), -79)))))));
                var_29 = (min((min((max(15643561223646110094, var_6)), (min(var_9, 779705689933698145)))), ((min((min((arr_43 [16]), 4294967295)), ((max(79, var_12))))))));
                arr_45 [i_13] &= max((max(((max(1, 1))), (max(79, 15609845748005618236)))), 0);
                var_30 = (min(((min(((min(var_8, var_8))), (min((arr_41 [i_13] [16]), var_2))))), (max((min((arr_43 [i_12]), 15643561223646110085)), ((max(32767, 79)))))));
            }
        }
    }
    #pragma endscop
}

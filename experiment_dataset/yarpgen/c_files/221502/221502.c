/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 += (0 % var_8);
                        var_16 &= var_3;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_15 [i_2] [i_1] [i_2] [i_4] [i_0] [i_1] [i_5] = ((((4294967295 ? 4294967295 : (max(4294967295, 16278287714476586272)))) | ((((-1 - 880569094) ? 62 : ((max(0, 34139))))))));
                            var_17 ^= (((min(var_0, 80)) >> (!24)));
                        }
                        var_18 = ((!(-978570399382064869 & 0)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_19 = 76;
                        arr_19 [i_0] [i_6] = ((-(~0)));
                        arr_20 [i_6] [i_2] [i_1] [i_0] [i_0] [i_0] = (var_14 | 3627623508453462683);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_20 = ((6396 > (0 || 84)));
                        var_21 = ((16278287714476586272 ? (!var_7) : 0));
                        arr_25 [i_0] [i_1] = ((47909 ? 32767 : 0));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 = (((((max(2147483647, 2448377100))) | (max(7052928642005444596, 2369269206596980027)))));
                                arr_33 [i_9] [i_1] [7] [i_2] [i_1] [i_0] = (max(((-42 ? -7092015184219209174 : 1023)), (max(76, 2369269206596980027))));
                                arr_34 [i_0] [i_1] [i_2] [i_1] [i_9] [i_9] = (min(((var_0 ? 8210282327932375455 : -198516511)), 0));
                            }
                        }
                    }
                    var_23 = -7092015184219209174;
                }
            }
        }
    }
    var_24 = var_8;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 23;i_11 += 1)
        {
            {
                var_25 = (min((55192 && -2369269206596980027), (-36 || 128)));
                arr_40 [i_11] = 24;
                var_26 = (((((-100 + 71) && ((max(203, -880569095))))) || (((1414943851 ? 350727285 : var_14)))));
            }
        }
    }
    var_27 = (max((((19740 >= ((705 ? 1611740438 : var_1))))), (min((~4294967295), -3))));
    #pragma endscop
}

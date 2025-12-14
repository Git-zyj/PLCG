/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(-var_14, ((min(var_0, 255)))));
                var_16 = ((14893 ? ((((min(var_13, 255))) ? ((var_3 ? var_1 : var_0)) : -8799)) : (~248)));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = 3086084373;
                        var_17 = (min(var_17, (((max(0, -1652141237))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_18 |= -5389738280860733685;
                        var_19 = ((max((min(3086084373, 0), ((max(var_8, 48)))))));
                        arr_14 [i_0] = ((((max(var_4, 762139023597121452))) ? var_14 : ((((max(var_8, var_3)))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_20 = ((8625408418074551052 ? ((65528 ? (-127 - 1) : -378807304657150715)) : (~var_8)));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = -23;
                        var_21 = 5389738280860733679;
                    }
                    var_22 = ((-5389738280860733679 ? 3173949994 : (-2147483647 - 1)));
                    var_23 = (min(var_23, (((-43 ? 10 : 48)))));
                    arr_18 [i_0] [i_0] [i_2] = ((-(~var_12)));
                    var_24 = (max((~2888077297), -27277));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_25 = 27277;
                    arr_22 [i_0] [i_0] [i_0] |= 2603584135;
                }
                var_26 = (max(var_26, ((min(-514883123, 32750)))));
            }
        }
    }
    var_27 = ((max(var_7, ((var_1 ? 16667563749044033682 : var_1)))));
    var_28 = ((min(var_5, ((min(var_10, var_10))))));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_29 = 1;
                var_30 = (((var_1 ? ((var_7 ? 1048575 : var_7)) : -var_5)));
                var_31 = -32747;
                var_32 = (!48);
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 |= 179;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [16] [i_1] [i_2] [i_1] [i_4] = max((min((max(1, 0)), ((min(var_3, var_13))))), ((max(674027883879604949, -5358964663845964604))));
                                arr_17 [i_0] [i_1] [i_4] [i_3] |= (max((((min(var_18, 8795556151296)) >> ((max(2, 60))))), ((min((117 || 1), (min(var_18, 0)))))));
                                arr_18 [i_0] [i_0] [i_4] [i_4] [i_3] [i_4] |= ((-2 ? 782419087868450236 : (((min(18992, 123))))));
                                var_21 = (max(var_21, -116));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_24 [i_1] [1] [i_1] [i_1] = ((((var_4 + 2147483647) >> var_1)));

                            for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
                            {
                                var_22 |= (((1 ? -116 : 6441988916974341276)));
                                arr_28 [i_1] [i_1] [i_1] [i_6 + 3] = ((((min(((max(1, 0))), (min(var_11, var_18))))) ? (1054322667594834938 + 117) : (-1778402827 - -10926)));
                                var_23 = (max(var_16, (18992 / var_18)));
                                arr_29 [i_1] [i_6 + 4] [21] [i_1] [i_1] = ((1 ? 13215174372603885532 : 18225582824067904066));
                            }
                            for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
                            {
                                arr_32 [i_1] = ((((min(var_0, 18992))) ? ((5705026479048894838 ? 32767 : 1)) : -18993));
                                var_24 = (min(var_24, ((((max(1, -586605395)) < ((1 % ((min(0, var_8))))))))));
                                var_25 *= (max(((var_9 ? (-32767 - 1) : 1)), ((32767 ? 22587 : 19006))));
                            }
                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 21;i_9 += 1)
                            {
                                arr_36 [9] [i_1] [i_5] [i_1] [i_9] [i_1] [i_1] = ((-8091799402112236497 ? var_18 : -32));
                                arr_37 [i_0 - 4] [i_1] [i_5] [i_6] [i_9] [i_6] = var_14;
                            }
                            for (int i_10 = 3; i_10 < 21;i_10 += 1)
                            {
                                arr_40 [i_1] [i_1] [i_5] [0] = (max((min(32757, 71916856549572608)), (((310980682 ? 1996392036 : 1673771874)))));
                                var_26 |= ((var_1 == (((32753 && 730634587) >> ((((max(123, -32761))) - 98))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 |= ((65 << (var_3 - 3967694654929675050)));
    #pragma endscop
}

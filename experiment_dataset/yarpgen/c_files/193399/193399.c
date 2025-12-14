/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 &= ((1 ? 6453832 : 6453832));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                var_22 = (max(-1581278200, (max(16873389, 195))));
                                var_23 = -57;
                                var_24 = var_6;
                                var_25 = (min((max(20541, (((30468 ? (-32767 - 1) : 32742))))), ((((arr_11 [i_0] [i_1] [i_2] [i_4 + 1] [i_4 + 1]) ? 55 : (arr_11 [i_0] [i_1] [i_1] [i_4 - 1] [i_0]))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = (1 && 243);
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_26 &= (((-32767 - 1) ? 85 : 6453816));
                                var_27 = (((arr_10 [i_0] [i_0] [i_2]) / (arr_2 [i_1] [i_2])));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_28 = (-57 % 57);
                                var_29 = (max(var_29, ((((0 ? (-32767 - 1) : 4288513464))))));
                                var_30 = 35068;
                                var_31 = (arr_4 [i_0] [i_1] [i_3]);
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_32 = (max(35068, 0));
                                arr_21 [i_7] [i_1] = (((min((arr_19 [i_0] [i_1] [i_2] [i_3] [i_7]), 198))) ? ((min(29341, var_12))) : 4652292290125298618);
                            }
                            var_33 -= 4652292290125298618;
                        }
                    }
                }
                var_34 *= (min((((97 ? 32 : 32))), ((35068 ? -79 : 4294967295))));
                var_35 |= (((61828 ? 77 : (min(268435456, 29341)))));
                var_36 = -78;
            }
        }
    }
    var_37 = var_8;
    #pragma endscop
}

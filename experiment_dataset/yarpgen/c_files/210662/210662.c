/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_18 = ((((((~(arr_0 [i_0]))))) | (~18446744073709551615)));
                    var_19 = ((((((!(arr_0 [i_0]))) >> (((arr_2 [14] [i_2]) - 69))))));
                }
                for (int i_3 = 3; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_20 = ((max((!-11181), ((19711 >> (var_10 - 2118220499))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_21 = (((((1780517992621509227 & -9024920230507114284) & 0)) >> ((min(14103, 16)))));
                                arr_14 [i_3] = ((((var_8 >> (!0))) >> ((32704 >> (8323072 - 8323048)))));
                                arr_15 [14] [i_1] [1] [i_3] = (((-(0 && 11890423652283221236))) >> ((((-(max(1580583117, 144)))) + 1580583144)));
                            }
                        }
                    }
                    var_22 = (((((!((((arr_8 [i_3]) >> (((arr_0 [i_3]) - 4579942093361475737)))))))) >> 0));
                    var_23 = min((max((1684 + var_10), 12)), ((((((-8144 + 2147483647) >> 1)) >> (var_1 + 121)))));
                    var_24 -= (((((var_2 >> (var_2 - 3125399269206131527)) >> (49152 - 49129)))));
                }
                for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_25 = (min(var_25, ((((min(((max((arr_13 [i_0] [i_1] [4] [i_6 + 1] [i_6]), var_5))), ((115 | (arr_12 [i_0] [i_1] [i_6] [i_0] [i_1]))))) & (((arr_1 [i_6 - 1]) ^ (arr_1 [i_6 - 3]))))))));
                    var_26 |= (max(((min(var_12, (arr_5 [i_0] [i_6 - 1] [i_0] [i_1])))), (min(11287, (!1)))));
                }

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_21 [i_1] [i_1] [i_7] = (min((min((((arr_9 [i_7] [i_7]) / var_10)), ((max(1, 71))))), (max(var_13, 0))));
                    arr_22 [i_0] [i_1] [i_1] [i_7] = (min(((max((!var_13), 112))), (min(var_9, (max(var_17, var_2))))));
                    var_27 *= ((!(min(((!(arr_0 [i_0]))), ((!(arr_2 [i_0] [i_0])))))));
                    var_28 = (i_7 % 2 == 0) ? ((~(max((((arr_2 [i_0] [i_1]) >> (((arr_19 [i_7]) - 687803335)))), (~255))))) : ((~(max((((arr_2 [i_0] [i_1]) >> (((((arr_19 [i_7]) - 687803335)) - 1812925693)))), (~255)))));
                }
            }
        }
    }
    var_29 = (max(var_10, 32747));
    #pragma endscop
}

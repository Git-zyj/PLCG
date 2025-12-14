/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max((min(((2012947004 ? var_11 : var_1)), var_12)), ((min(var_5, (-81 <= var_7)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(((((57878098 ? 838267792 : 203)) - (var_1 - var_8))), (((((-6581970411642005592 ? var_7 : (arr_0 [i_0] [i_0])))) ? ((21 << (838267792 - 838267782))) : ((var_12 << (((((arr_5 [i_1] [i_1] [i_0]) + 612770952)) - 22))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = (((((((25 == (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1])))) >= ((max(32, var_6))))) ? (arr_14 [i_1] [i_1] [i_1]) : (((9007199254740991 + -66) + 18446744073709551615))));
                                var_19 = arr_12 [i_4] [i_1] [i_2] [i_0] [i_1] [i_0];
                                var_20 = (4007329515 >= 21918);
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((2147483647 ? ((((4888 >= 4094240905) | (((-5357267315481752570 >= (arr_3 [i_0]))))))) : (((arr_11 [i_1] [i_0] [i_0] [i_0] [i_0]) % ((-6701749343452065338 ? 5357267315481752569 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            {
                                var_21 = ((var_9 ? ((max(var_5, 1))) : ((-1 ? 779031206 : 7210781787635071949))));
                                var_22 = (((arr_23 [i_0]) ? (281474976710655 == var_4) : (arr_11 [i_0] [i_1] [i_5] [i_6] [i_7])));
                                var_23 = 768340776;
                                var_24 = (((min(172, (((arr_14 [i_0] [i_0] [i_0]) ? 1612994228933799524 : -5357267315481752570)))) >= -2784235585180292567));
                                var_25 = 0;
                            }
                        }
                    }
                }
                arr_24 [i_0] = (((arr_1 [i_0] [i_1]) << ((((17592186043904 >> (143 - 117))) - 262098))));
            }
        }
    }
    #pragma endscop
}

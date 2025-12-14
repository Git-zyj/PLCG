/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207542
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (0ULL) : (((/* implicit */unsigned long long int) var_12))));
    var_21 = ((/* implicit */long long int) var_19);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_23 = var_0;
                arr_8 [i_0] [(short)10] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_17));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */_Bool) 18446744073709551610ULL);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3986063574524842418LL)) ? (var_14) : (var_10)));
            }
            arr_11 [(unsigned short)4] [(unsigned short)4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (5ULL) : (var_4)));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned long long int) var_3);
            arr_16 [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_11));
            var_26 -= ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1857668589)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -1857668580)) : (var_4)))));
            arr_17 [i_0] = ((/* implicit */unsigned int) var_5);
        }
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) max((7ULL), (((/* implicit */unsigned long long int) ((_Bool) 6ULL)))));
            arr_20 [i_0] = ((/* implicit */short) 62618167U);
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) -1442031211))));
        }
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            var_30 *= max((min((3068153009U), (3117109487U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((signed char) var_0))), (var_17)))));
            var_31 ^= ((/* implicit */int) var_5);
            var_32 *= ((/* implicit */unsigned int) ((short) max((1226814300U), (((/* implicit */unsigned int) (unsigned short)38844)))));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 2; i_7 < 8; i_7 += 1) 
            {
                var_33 -= ((/* implicit */short) var_18);
                arr_26 [i_0] [i_6 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */int) var_7)) : (min((((/* implicit */int) var_11)), (1857668589)))));
            }
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_9 = 4; i_9 < 10; i_9 += 2) 
                {
                    arr_31 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */int) (unsigned short)20359);
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3425206833U)))) : (9274519949106294027ULL)));
                }
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    var_35 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3117109487U)) ? (((/* implicit */unsigned int) -531339274)) : (3068152979U)))) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) var_12))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9))))));
                    arr_34 [i_0] [i_6 + 1] [i_0] [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 4159672752U)) ? (1686876300U) : (var_10))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_36 *= ((/* implicit */unsigned char) 62618167U);
                        var_37 += ((/* implicit */long long int) (unsigned char)21);
                        var_38 = ((/* implicit */unsigned int) var_7);
                        arr_40 [i_0] [i_0] [i_6] [i_0] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))) : (var_14)));
                    }
                    arr_41 [i_0] = ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */unsigned long long int) 904317330U)) : (18446744073709551608ULL));
                }
                for (unsigned char i_13 = 2; i_13 < 10; i_13 += 3) 
                {
                    var_39 = ((/* implicit */unsigned char) var_0);
                    arr_44 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) : (var_4)))));
                }
                for (int i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        var_40 -= ((/* implicit */unsigned int) var_7);
                        arr_51 [i_0] [i_0] [i_0] [i_0] [i_8] [2U] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3915217142U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)65530))))) : (1079301540U)));
                        var_41 = ((/* implicit */int) 6ULL);
                        arr_52 [11U] [i_8] [i_14] [i_0] = ((/* implicit */short) (unsigned short)6);
                    }
                    arr_53 [i_14] [i_6] [i_8] [2U] [i_6 + 1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)13604)) ? (2490667490U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26703)))))), (((((/* implicit */_Bool) var_18)) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26697)))))));
                    arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)-87);
                }
            }
            for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
            {
                arr_59 [i_16] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_17);
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 9; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned char)231), (var_11)))), (min((((/* implicit */unsigned int) var_18)), (var_0)))));
                            arr_66 [i_0] [i_6] [i_16] [7] [i_18] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)38839))))) : (max((6063922881537713300LL), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            }
        }
    }
}

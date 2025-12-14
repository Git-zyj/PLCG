/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34449
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) << (((((var_8) + (86129749999544790LL))) - (44LL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) 10935030627606093790ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [10ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_0] [i_2] [i_2]) >= (((unsigned long long int) 1125899906318336LL))));
                                arr_14 [i_0] = max((((((arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [11LL]) >= (((/* implicit */unsigned long long int) arr_9 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (1125899906318340LL) : (7350635626873820723LL)))) : (max((var_13), (arr_3 [i_3]))))), (((unsigned long long int) ((18446744073709551611ULL) >= (arr_2 [i_0])))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((22ULL) >= (((/* implicit */unsigned long long int) -7350635626873820708LL))))))), (750270533079063313ULL)));
                    var_23 -= min((((((/* implicit */unsigned long long int) -1125899906318327LL)) - (12237586539315276754ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) : (7350635626873820723LL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_24 = ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4617880341337252754ULL) <= (((/* implicit */unsigned long long int) 3LL)))))) : (((unsigned long long int) arr_11 [9ULL] [(unsigned char)3] [i_5] [i_6] [i_7])));
                            arr_25 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */long long int) arr_16 [i_1 - 1] [i_1 - 1]);
                            var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_5] [i_1] [i_0] [i_5] [i_0] [i_7])))));
                            arr_26 [i_7] [i_5] [i_0] [i_5] [i_0] = ((18446744073709551615ULL) ^ (((arr_10 [4ULL] [1ULL] [4ULL] [i_0]) + (((/* implicit */unsigned long long int) 1125899906318313LL)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) 9547980366826873809ULL))));
                            var_27 = ((long long int) arr_9 [i_8]);
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((-3015039287828318716LL) | ((-9223372036854775807LL - 1LL)))));
                            var_29 = (+(((unsigned long long int) 2233794900626935110LL)));
                            var_30 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17179869183ULL))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            arr_35 [i_5] = ((/* implicit */unsigned char) 19ULL);
                            arr_36 [i_0] [i_0] [i_5] [i_5] [i_6] [i_5] [i_9] = ((/* implicit */unsigned long long int) arr_5 [i_9] [i_1] [i_1] [i_1]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_1] [i_1 - 1] |= ((unsigned long long int) ((var_0) + (arr_38 [i_10] [i_6] [4ULL] [i_1] [i_1] [i_0] [6LL])));
                            var_31 = ((/* implicit */unsigned long long int) ((((long long int) var_3)) / (((long long int) 2206906542832550302LL))));
                        }
                        arr_41 [i_5] [(unsigned char)6] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~((+(var_5)))));
                        arr_42 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0]));
                    }
                    arr_43 [i_1] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)184))));
                }
                /* LoopNest 3 */
                for (long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) var_9);
                                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_13])), ((-(11631244316704199265ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_12] [5ULL] [i_11] [i_0] [i_13] [(unsigned char)2] [i_0]))))))) : (((((/* implicit */_Bool) -7350635626873820701LL)) ? (max((((/* implicit */unsigned long long int) (unsigned char)52)), (var_9))) : (((/* implicit */unsigned long long int) 136735733521053819LL))))))));
                            }
                        } 
                    } 
                } 
                arr_52 [i_0] [8ULL] [i_1] = ((/* implicit */unsigned char) max((6359704611431008302ULL), (10237996405616717724ULL)));
            }
        } 
    } 
}

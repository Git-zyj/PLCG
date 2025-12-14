/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230960
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
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_8))))) << (((1979568781U) % (1979568781U)))))) ? (max((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))), (var_13))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (18446744073709551590ULL)));
    var_18 = ((/* implicit */unsigned int) max((var_2), (var_12)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 10169368316594037552ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-9LL))));
            var_21 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) 839016048U)));
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) 1907500642);
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */int) ((((-3555057122918492710LL) + (9223372036854775807LL))) >> (((9223372036854775807LL) - (9223372036854775802LL)))));
            var_22 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_2]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) arr_3 [i_3] [i_3 + 2] [i_3 - 1]))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) (short)-23510)) : (((/* implicit */int) arr_8 [i_0] [i_3]))))) && (((/* implicit */_Bool) ((arr_3 [5LL] [i_2 + 1] [8]) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) arr_3 [(short)4] [i_2] [i_3])))))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_17 [i_0] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                    var_25 = ((/* implicit */signed char) ((unsigned char) arr_6 [i_2]));
                    arr_18 [i_2] [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) -940647818)) ? (940647819) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)-23518))));
                }
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    arr_22 [i_0] [i_5] [i_3 + 1] [(short)21] [i_2] = ((/* implicit */unsigned char) (~(2896840032U)));
                    var_26 *= (unsigned char)236;
                    arr_23 [i_2] [i_2] = ((/* implicit */int) 9223372036854775807LL);
                    var_27 -= ((/* implicit */short) ((((-9223372036854775798LL) + (9223372036854775807LL))) << (((9223372036854775792LL) - (9223372036854775792LL)))));
                    arr_24 [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) -8781448092900993789LL);
                }
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_2] [i_2] [i_6] [i_6] [i_3] [i_2] [i_2] = (-(arr_4 [i_3 - 1]));
                        arr_30 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_7] [i_7] [i_7])) ? (arr_20 [i_3 + 2] [i_6] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106)))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (((_Bool)1) ? ((~(arr_32 [i_0] [i_0] [(short)14]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        arr_35 [i_0] [i_2] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))));
                    }
                    var_29 ^= 18446744073709551611ULL;
                    arr_36 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (unsigned short)17031);
                }
            }
            arr_37 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_32 [i_2] [i_2 + 2] [i_2 + 4]))) ? (((((/* implicit */_Bool) arr_32 [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) arr_32 [i_2] [i_2 + 1] [i_2 + 3])) : (6165390015820935013LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48521)) ? (arr_32 [i_2] [i_2 + 2] [i_2 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_30 -= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_26 [i_9] [i_9] [i_0] [i_0])))));
            arr_40 [i_9] [i_9] [3LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (-9223372036854775807LL) : (((/* implicit */long long int) var_1))));
        }
        /* vectorizable */
        for (long long int i_10 = 4; i_10 < 23; i_10 += 3) 
        {
            var_31 = ((/* implicit */int) (+(arr_33 [i_10 - 2] [i_10] [i_10 - 4] [i_10] [i_10] [i_10] [i_10])));
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                arr_48 [i_10] = ((/* implicit */unsigned char) 1765089498780600187ULL);
                arr_49 [i_0] [i_10] [i_0] [i_0] = ((unsigned long long int) 4324721591729368291LL);
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_3))));
                    arr_52 [i_10] [i_10] = ((/* implicit */long long int) arr_20 [i_10] [10LL] [i_10 - 4] [i_11]);
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_59 [i_10] = (+(arr_39 [i_10 - 4] [i_10]));
                            arr_60 [i_0] [i_0] [i_0] [i_10] [13U] = ((/* implicit */long long int) (unsigned char)5);
                            var_33 = var_3;
                            arr_61 [i_10] = ((/* implicit */int) var_5);
                            arr_62 [i_0] [i_13] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_51 [i_10] [i_10] [i_10 - 3] [i_11 - 1] [i_11 + 2] [i_11 - 1]));
                        }
                    } 
                } 
            }
            arr_63 [i_10] = ((/* implicit */unsigned long long int) arr_21 [i_10 - 1] [i_10 - 4] [i_10] [i_10 - 3] [i_10] [i_10 - 3]);
            var_34 |= ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned long long int) -9223372036854775803LL)) ^ (8109683565688333450ULL))));
        }
    }
}

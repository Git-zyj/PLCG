/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33499
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((1388187209652332486LL) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
        var_11 = ((/* implicit */long long int) ((1023U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55196)))));
        arr_4 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10662)))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_5 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((short) 2796083361U))) ? (var_8) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4390242334765597361ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_6)) ? (981611253U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27436)))))))));
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */long long int) 1455613509U);
            arr_11 [i_1] = ((/* implicit */long long int) ((((long long int) 4104675566U)) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 8449976779516865711ULL))))));
        }
        var_13 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        var_14 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) arr_2 [i_1]))), (((unsigned short) ((_Bool) var_9)))));
        arr_12 [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (unsigned short)46742)) : (((/* implicit */int) ((unsigned short) ((_Bool) (_Bool)1))))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((var_9) ? (((unsigned int) var_4)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_1))))) <= (((((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_13 [i_3] [i_3])))));
        var_16 -= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 1613558441U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_6 [i_3])))) ? (((/* implicit */long long int) var_1)) : ((((_Bool)1) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13)))))));
        arr_17 [i_3] = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) 2446935311U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2301339409586323456ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_3] [i_3]) << (((var_1) - (688256494U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) % (arr_5 [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (((arr_1 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? ((((_Bool)1) ? (1052815601U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3254))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) (unsigned short)43918))), (((unsigned int) var_4))))) ? (((/* implicit */unsigned long long int) max((((unsigned int) var_0)), (((/* implicit */unsigned int) (unsigned short)0))))) : (max((((arr_5 [i_4] [i_4]) >> (((3109640371690293729LL) - (3109640371690293672LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (var_9)))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 3) 
        {
            arr_24 [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8651))));
            var_19 = ((/* implicit */_Bool) (~(((unsigned int) var_3))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
            {
                arr_27 [i_4] [i_4] [16] [i_6] = ((long long int) ((int) (_Bool)0));
                var_20 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_9)))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(var_1))))));
                /* LoopSeq 3 */
                for (long long int i_7 = 2; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    var_22 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (arr_30 [i_4] [i_5] [i_6] [(short)4]))));
                    var_23 = ((/* implicit */unsigned short) var_5);
                    arr_31 [i_5] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) <= ((((_Bool)0) ? (var_7) : (((/* implicit */long long int) -1)))));
                }
                for (long long int i_8 = 2; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 3] [i_8] [i_5 - 1])) << (((/* implicit */int) ((_Bool) var_7))))))));
                    var_25 = ((/* implicit */unsigned int) var_5);
                    arr_34 [i_8 + 3] [i_5] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_5] = arr_29 [i_4] [i_5] [i_6] [i_8];
                    var_26 ^= ((/* implicit */unsigned int) arr_29 [i_4] [i_4] [i_4] [i_4]);
                }
                for (long long int i_9 = 2; i_9 < 15; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_27 = arr_38 [i_4] [(_Bool)1] [i_6] [(unsigned short)2] [i_10];
                        var_28 = ((/* implicit */unsigned long long int) ((((unsigned int) var_5)) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 16; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((_Bool) 1762640512U));
                        var_30 = ((unsigned short) ((arr_9 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_5] [i_5]))) : (var_5)));
                    }
                    arr_42 [i_4] [i_5] [i_6] [i_9 + 3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((long long int) 2198687599U)) : ((((_Bool)1) ? (2289105231284773544LL) : (((/* implicit */long long int) 8940326U))))));
                    var_31 = ((/* implicit */unsigned int) ((unsigned short) 12811152472550367104ULL));
                }
            }
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
            {
                var_32 &= ((/* implicit */long long int) var_4);
                var_33 &= ((/* implicit */unsigned short) ((_Bool) ((short) ((short) var_4))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_34 &= var_2;
                var_35 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((244565884U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13] [i_5 - 1] [(unsigned short)6]))) : (arr_1 [i_13]))) : (var_6)))));
            }
        }
        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_15 = 1; i_15 < 15; i_15 += 2) 
            {
                arr_53 [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((short) 9223372036854775807LL)), (((/* implicit */short) var_9))))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_4] [2U] [i_4]))))) : (((unsigned int) var_3)))) : (min((((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (var_6))), (((/* implicit */unsigned int) arr_49 [i_15 + 3]))))));
                var_36 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_50 [i_14] [i_15]) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_51 [i_4] [i_14] [i_15]))))))));
            }
            arr_54 [i_4] [i_4] [i_14] = ((/* implicit */int) ((((_Bool) arr_50 [(short)4] [i_14])) ? (((/* implicit */unsigned int) ((int) var_3))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_32 [i_4] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41771))))))) : (((unsigned int) var_6))))));
            arr_55 [i_4] [i_4] = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) ((unsigned int) var_3))));
            var_37 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_4] [i_4] [i_4] [(_Bool)0])) - (((/* implicit */int) (_Bool)0))))) * (((((/* implicit */_Bool) var_0)) ? (131040U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4]))))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_28 [i_4]))) : (((/* implicit */unsigned int) ((1986983407) / (((/* implicit */int) (short)32767)))))))));
            var_38 = ((/* implicit */short) ((int) var_5));
        }
        for (short i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_4] [i_4] [i_4])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19756)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_8))) : ((((_Bool)1) ? (5396153822443753895ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46184)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7)))))))) : (((((long long int) arr_20 [i_4])) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_4]))))))));
            arr_59 [i_4] = ((var_8) >> (((/* implicit */int) arr_18 [i_16] [i_4])));
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((_Bool) var_2)))));
        }
        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            arr_62 [i_4] [i_4] = ((/* implicit */_Bool) var_4);
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13946)) ? (1839538618U) : (var_4)))) ? (((/* implicit */int) ((unsigned short) var_7))) : ((-(arr_43 [i_4] [i_4] [i_17]))))) / (((((/* implicit */_Bool) (-(var_4)))) ? (((var_9) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)40634)))) : (((/* implicit */int) ((unsigned short) arr_30 [i_17] [i_17] [i_17] [i_17]))))))))));
        }
        var_42 = ((/* implicit */unsigned int) arr_47 [i_4] [i_4] [i_4] [i_4]);
    }
    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((var_3) ? (((/* implicit */long long int) var_1)) : (var_7)))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_5))))));
}

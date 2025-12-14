/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201781
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 7; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_2 + 1] [i_2 + 2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_9)))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    var_17 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((1251017820) < (127737551))))) - (arr_7 [8U] [i_2 + 3] [i_1] [i_1]));
                }
                for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) (-(2816737009U)));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)46);
                    var_19 *= ((/* implicit */_Bool) (+(arr_6 [i_0])));
                    arr_13 [i_0] [i_0] [i_3 - 1] = ((/* implicit */_Bool) ((unsigned long long int) min(((_Bool)0), ((_Bool)1))));
                }
                arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1625471263)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56417))) : (-6127064297030263563LL)));
                var_20 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))))) : (((var_12) ^ (((/* implicit */unsigned long long int) -1097988284)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (arr_4 [(_Bool)1] [i_0] [i_1]) : (arr_4 [4LL] [i_0] [i_1])))))))));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28031)) && (((/* implicit */_Bool) -782478716))));
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 8; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_21 [i_5] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (-(arr_18 [i_0] [i_0] [i_4 - 2] [i_4 - 3]))));
                            var_21 -= ((/* implicit */unsigned short) (((-(min((5095019474044919178LL), (((/* implicit */long long int) (short)32758)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 2097144)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)16848), ((short)-6597))))))))));
                            /* LoopSeq 4 */
                            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned int) (~(arr_4 [i_4] [i_4 - 3] [i_4 - 2])))))));
                                var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) var_13)) ? (arr_20 [i_6] [i_6] [i_4 - 2] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-97)) / (((/* implicit */int) arr_11 [i_0]))))) ? (((long long int) (-2147483647 - 1))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 3] [9U] [i_5]))))))));
                                arr_25 [i_0] = ((/* implicit */unsigned long long int) arr_24 [i_4] [i_1] [i_4] [i_0] [i_6]);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                            {
                                var_24 = ((/* implicit */_Bool) var_16);
                                arr_29 [i_0] [i_1] [i_4] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)139)) / (((/* implicit */int) (short)16274))))) * (max((((/* implicit */unsigned int) arr_23 [i_7] [i_5] [i_4 + 2] [i_1] [i_0])), (var_10)))))) ? (((/* implicit */int) ((_Bool) arr_28 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_1]))) : ((((((~(((/* implicit */int) arr_27 [i_0] [i_0] [(short)0] [5] [(unsigned char)9])))) + (2147483647))) << ((((+(((/* implicit */int) arr_27 [1ULL] [i_1] [i_4] [i_5] [i_7])))) - (28)))))));
                                var_25 = max((((unsigned int) arr_20 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [i_4])), (min((min((arr_26 [i_0] [0U] [i_4] [i_5] [i_7]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) var_1)))));
                            }
                            for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                            {
                                arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65531)) ? (arr_18 [i_0] [i_1] [i_1] [i_1]) : ((-(arr_28 [i_0] [i_4 - 2] [2ULL] [i_4 - 1] [i_4 + 2])))));
                                arr_34 [i_4] [i_1] [i_4] [0ULL] [i_8] &= ((/* implicit */unsigned int) 15250391122241870102ULL);
                                arr_35 [i_8] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 246290604621824ULL))));
                                arr_36 [i_0] [i_1] [i_4] [i_5] [i_0] = arr_32 [i_4 + 1] [i_4 - 1] [i_4 + 2] [i_4 - 4];
                                var_26 = ((/* implicit */_Bool) min((((((((/* implicit */int) ((signed char) 4294967295U))) + (2147483647))) << (((arr_7 [i_4 - 4] [i_1] [(_Bool)1] [i_1]) - (3176981962U))))), (((/* implicit */int) (!(((/* implicit */_Bool) 7785737937682052752ULL)))))));
                            }
                            for (unsigned int i_9 = 4; i_9 < 9; i_9 += 1) 
                            {
                                arr_39 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = (-(((/* implicit */int) ((unsigned char) arr_20 [i_4 + 1] [i_9 - 2] [i_9] [i_9] [i_9 - 1] [i_9 + 1]))));
                                var_27 = ((/* implicit */unsigned long long int) var_14);
                                var_28 -= max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_16)))), (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_4] [i_5])) ? (1805373022147264940ULL) : (((/* implicit */unsigned long long int) var_16)))))), (((var_12) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 -= ((/* implicit */signed char) ((unsigned int) (_Bool)1));
    var_30 = ((/* implicit */long long int) var_8);
    var_31 = -65274134;
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_4)))) ? (var_1) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) < (var_9))))))) ? (((((/* implicit */_Bool) ((var_3) ? (var_5) : (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16621))) : (((((/* implicit */_Bool) 2685201242U)) ? (var_0) : (((/* implicit */long long int) -1226266112)))))) : (((/* implicit */long long int) ((unsigned int) ((short) var_4))))));
}

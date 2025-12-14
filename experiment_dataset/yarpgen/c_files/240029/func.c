/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240029
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((unsigned char) 4125818794U)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_18))) < (((/* implicit */int) max((arr_2 [2ULL] [i_1] [i_2]), (((/* implicit */short) (unsigned char)183)))))));
                    arr_8 [i_0] [i_1 - 3] [(unsigned char)14] = ((/* implicit */signed char) (-(((unsigned long long int) ((int) arr_6 [i_2] [i_2] [(unsigned short)1])))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((max((568259953U), (((/* implicit */unsigned int) (signed char)-21)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_2])))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) min((arr_5 [i_3] [i_3] [i_3] [i_0 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-112)))))));
                    var_22 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (max((928407669U), (((/* implicit */unsigned int) (short)-6333))))))), (max((arr_13 [i_0] [i_1] [i_3]), (16658039566970054911ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        var_23 *= ((/* implicit */short) (+(max((8780120626686706278ULL), (((/* implicit */unsigned long long int) (signed char)-74))))));
                        arr_17 [(_Bool)1] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(3366559619U)))), ((~(((var_7) ? (var_14) : (((/* implicit */long long int) 3366559616U))))))));
                        arr_18 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) max((((((/* implicit */_Bool) var_13)) ? (arr_10 [11U] [1] [i_3] [(short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_22 [16LL] [13ULL] [13ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(_Bool)1] [11ULL]))) | ((~(((arr_13 [i_0] [i_3] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (signed char)-120)) != ((-2147483647 - 1))));
                    }
                    var_25 = var_1;
                    var_26 = ((/* implicit */_Bool) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) max((((/* implicit */short) arr_20 [i_0 - 1] [i_1 + 2])), (arr_2 [i_0 - 1] [i_1 - 4] [i_3]))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_1 - 2])) - (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 1])))))));
                    arr_25 [i_0] [13ULL] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((928407663U), (((/* implicit */unsigned int) (unsigned short)17756)))), (min((928407662U), (((/* implicit */unsigned int) (short)-4737))))))) ? (((/* implicit */unsigned long long int) (((-2147483647 - 1)) ^ (((/* implicit */int) (short)4736))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1 - 2] [i_1 + 3])), (((((/* implicit */_Bool) arr_3 [i_0] [13LL] [i_0])) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [(unsigned short)8] [9U] [i_0])) : (var_18)))))));
                    var_28 = ((/* implicit */int) max((((long long int) (signed char)120)), (((/* implicit */long long int) (_Bool)1))));
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    arr_29 [i_0] [i_1] [(_Bool)1] [i_7] = max((3129331140501586262LL), (((/* implicit */long long int) (_Bool)0)));
                    arr_30 [i_0 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)10]))))), ((-(var_14)))));
                    var_29 = ((/* implicit */short) (+((+(((/* implicit */int) arr_12 [i_0] [9U]))))));
                    var_30 *= ((/* implicit */unsigned short) ((((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_7]))) - (var_9)))) - ((+((-(((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2291067805U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_23 [(_Bool)1] [i_1] [i_1] [i_8]))))), (4468415255281664ULL))) < (min((arr_13 [i_0] [i_1 - 3] [(short)9]), (arr_13 [i_1] [i_7] [i_7])))));
                        var_32 = ((/* implicit */unsigned int) (-(132120576)));
                        arr_33 [i_0 - 2] [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)64))))))) != ((~(arr_6 [i_1 - 3] [i_0 - 1] [i_0])))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        arr_38 [i_7] [i_7] [i_7] [i_9] [i_9] [(unsigned short)8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        arr_39 [i_0] = ((/* implicit */unsigned short) max(((-(arr_13 [i_1] [(short)7] [i_9]))), (((/* implicit */unsigned long long int) arr_36 [i_0] [i_7] [i_9]))));
                    }
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_43 [i_0] [i_1] [6LL] [i_10] [(short)0] |= ((/* implicit */unsigned char) (~(939524096U)));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [(signed char)9] [(short)10]))) - (max((var_18), (((/* implicit */unsigned long long int) arr_26 [6] [i_7] [i_7]))))))) ? (arr_13 [i_0] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) -9223372036854775805LL))) != (((((/* implicit */_Bool) (short)26)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (signed char)-89))))))))));
                    }
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) < (var_0)))))) >> (((unsigned int) ((var_18) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1024))))))));
}

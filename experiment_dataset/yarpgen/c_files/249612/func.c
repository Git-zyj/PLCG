/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249612
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
    var_13 += ((/* implicit */short) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_7)))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((4341203576250660216LL) >> (((max((((/* implicit */unsigned int) var_12)), (var_9))) - (4165208042U))))) : (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((4341203576250660198LL), ((-9223372036854775807LL - 1LL)))))));
                        var_16 = ((/* implicit */unsigned int) (unsigned short)52054);
                        var_17 += ((/* implicit */unsigned short) ((short) (short)29385));
                        arr_10 [1U] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_0] [5U]);
                        arr_11 [i_0] [i_0] [5ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((1135210809) >> (((((/* implicit */int) arr_9 [i_0] [i_2] [i_3 + 1] [i_3])) - (190))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_4]), (var_7)))), (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_16 [5ULL] [5ULL] [i_5]))))))));
                    arr_18 [i_4] [i_5] = ((/* implicit */short) (unsigned char)0);
                    /* LoopSeq 2 */
                    for (int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) 4341203576250660216LL);
                        arr_21 [i_5] = ((/* implicit */int) (~(max((((/* implicit */long long int) var_7)), (arr_12 [i_6 - 2] [i_6 - 2])))));
                    }
                    for (int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_4 - 2] [i_7 - 1] [i_5] [i_5 + 1]))))) : (((((/* implicit */_Bool) arr_13 [i_0] [0LL] [(short)3])) ? (var_1) : (((((/* implicit */_Bool) (unsigned short)1579)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (var_5)));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */int) (unsigned short)27475)) >> (((arr_22 [i_7]) + (1095120527))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_13 [i_4] [i_5] [i_8])) : (arr_7 [7] [i_4] [i_5] [i_7 - 2] [i_8])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (4341203576250660216LL)))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)2)))) & (((((/* implicit */int) (short)0)) - (arr_7 [i_4 + 1] [i_7] [i_7] [i_7] [i_7 - 1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            arr_28 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [i_7 + 2] [(short)5] [i_0] [(short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_4 - 2])) ? (((((/* implicit */long long int) var_9)) % (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_24 |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))));
                            var_25 = (unsigned short)62316;
                            var_26 = ((/* implicit */unsigned char) var_11);
                        }
                        var_27 += ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((unsigned short) max((max((var_6), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4341203576250660217LL)) || (((/* implicit */_Bool) var_5)))))))))));
                    }
                }
            } 
        } 
    }
}

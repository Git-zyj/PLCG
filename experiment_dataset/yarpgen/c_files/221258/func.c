/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221258
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)11231)) : (((/* implicit */int) var_1))))) : (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))))) : (((((((/* implicit */_Bool) (signed char)7)) ? (6394115652476076447ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)37)) : (arr_8 [i_0] [i_1] [i_1 - 2]))))));
                    var_15 = (signed char)96;
                    var_16 = ((/* implicit */unsigned char) ((arr_4 [i_1 - 2] [i_1 - 1] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_17 ^= ((/* implicit */long long int) var_1);
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25975)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (signed char)-18))))) ? (((unsigned long long int) arr_1 [(signed char)2])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [(_Bool)0]))))))) | (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) & (var_9)))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) 2060533468))));
                }
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1])) : (arr_3 [i_1 - 2] [i_1 + 2]))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_21 -= ((/* implicit */short) (signed char)-12);
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_4] [i_0])) ? (((/* implicit */int) arr_7 [3] [i_1 + 2] [i_4])) : (arr_3 [i_0] [i_1 + 3])));
                    arr_13 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) arr_6 [i_1 - 2]))));
                    arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1] [i_4] [i_4])) || (((/* implicit */_Bool) arr_12 [i_1 + 1] [i_4] [i_4] [i_4]))));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    var_23 -= ((/* implicit */_Bool) arr_10 [2]);
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (unsigned char)12))));
                }
                for (int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */short) max((((((var_7) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_6])))), (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_1 - 1] [i_1 + 2]))))));
                    var_26 &= ((/* implicit */unsigned char) arr_19 [i_1 + 2] [i_1 - 2]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (var_9) : (((/* implicit */int) (short)-9091)))) % (((/* implicit */int) arr_21 [i_0] [(_Bool)1]))));
                        var_27 = ((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */int) arr_9 [i_7])) : (((arr_20 [i_0] [i_0] [i_7]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1]))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) | (659355803U)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_16 [i_0] [(signed char)0] [i_6] [i_0]);
                        var_30 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_24 [i_1 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_0] [i_1 - 2]))) : ((+(arr_12 [i_0] [i_1 + 2] [i_6] [i_8]))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_5 [i_1 + 3] [i_1] [i_1])))))));
                        var_31 *= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_22 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned int) var_9)) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [2LL] [i_6]))) > (15U)))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1 + 2]))) : (var_5)))) || (((/* implicit */_Bool) ((var_10) ? (var_9) : (arr_6 [i_0]))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_28 [i_0] = ((/* implicit */short) ((((min((var_10), (var_6))) ? (((((/* implicit */int) (signed char)4)) ^ (((/* implicit */int) (short)9090)))) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1])))) > (((/* implicit */int) (signed char)-7))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-37);
                            arr_30 [(signed char)7] [(signed char)7] [i_0] [i_6] [(signed char)0] [i_9] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-7)) : (-1))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 3; i_10 < 9; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */short) arr_3 [i_10] [i_6]);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_1 + 2] [i_1 + 2])) % (((/* implicit */int) (short)-9104))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1 + 3] [i_1 - 1] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)6] [i_10 - 2] [i_10 - 1] [i_10 - 1]))) : (((((/* implicit */_Bool) 1504413162)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_6] [i_0]))) : (arr_12 [i_0] [i_10 - 1] [0] [i_0])))));
                            arr_33 [(short)8] [(short)8] [i_1] [i_8] &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-19)) < (((/* implicit */int) (short)3666))));
                        }
                        var_35 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_24 [i_1 + 2] [i_1])) ? (arr_10 [i_0]) : (arr_10 [i_0]))));
                    }
                    var_36 &= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) 4294967281U)) || (((/* implicit */_Bool) (short)-3645))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -16)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((var_8) ? (arr_3 [i_1] [i_1]) : (var_9))) : (((/* implicit */int) arr_26 [(short)8] [i_6] [(unsigned short)1]))))));
                }
                var_37 = ((/* implicit */short) ((1073741823) < (2132668303)));
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
}

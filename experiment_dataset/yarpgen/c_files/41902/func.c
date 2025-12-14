/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41902
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned char) arr_7 [i_0 - 2] [i_1 + 1] [i_2 + 2] [i_2 - 1]);
                    var_14 = ((/* implicit */long long int) ((short) arr_3 [i_0] [(short)11] [i_2]));
                }
                for (int i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                {
                    var_15 += ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_3 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) (~(arr_2 [i_0 - 2] [i_0] [i_0])));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_3 [i_0 + 1] [i_3 - 1] [i_1 - 1]), (arr_3 [i_0 - 2] [i_3 + 2] [i_1 + 1])))) / (((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1] [i_3 + 1] [i_1 - 1])))));
                            var_17 = (+(var_3));
                            arr_17 [i_0] [i_0] [(short)5] [i_0 - 2] = ((/* implicit */signed char) max((((3710241650U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [(signed char)1] [(signed char)1] [i_3] [i_4] [i_3] [i_3 + 2])) : (((/* implicit */int) (short)20868))))))), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
                            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_10 [i_5] [i_1] [i_5] [i_4])))) && (((/* implicit */_Bool) var_0))))), ((unsigned char)96)));
                        }
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) var_5);
                            var_20 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62))))), ((~(((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4092))) : (17653586559625744926ULL)))));
                            var_21 = ((/* implicit */short) 16353197539949577666ULL);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [i_4] [i_3] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_15 [i_7 + 2] [i_4] [i_3 - 1] [i_1] [i_0])) + (((/* implicit */int) var_9)))) : (((/* implicit */int) var_6))));
                            var_22 = ((/* implicit */signed char) var_7);
                            var_23 = ((/* implicit */short) (-(var_8)));
                        }
                        arr_23 [i_0] [(signed char)5] [(signed char)5] [i_0] [(signed char)5] [i_0] = ((/* implicit */short) ((((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 2] [(short)13] [i_3 + 1] [i_3] [i_1 - 2] [i_0 - 2]))))) ? ((-(((/* implicit */int) arr_11 [i_3 + 1] [i_0 - 1] [2LL] [i_0 - 1] [i_1 + 2] [i_0 - 1])))) : (((((/* implicit */int) arr_11 [i_3 + 1] [i_1 + 1] [i_3 - 1] [(short)6] [i_1 + 1] [i_0 + 1])) & (((/* implicit */int) arr_11 [i_3 + 2] [i_1 + 2] [(unsigned char)1] [i_1 + 2] [i_1 + 2] [i_0 + 1]))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_13 [i_4] [i_3 + 1] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_3 + 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_13 [i_0] [5ULL] [i_3 + 1] [i_8] [i_0])))) ? (((/* implicit */int) (short)-20868)) : (((var_1) ? (arr_4 [13] [i_3 - 1]) : (((/* implicit */int) ((_Bool) arr_2 [i_1] [i_0] [i_1 + 1])))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) (short)30871)) : (((/* implicit */int) var_1))));
                        var_26 = ((/* implicit */signed char) ((((((((/* implicit */int) (short)-20864)) / (((/* implicit */int) (unsigned short)58566)))) != (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) (unsigned char)57))))))) ? ((-((~(((/* implicit */int) arr_20 [i_3] [i_0])))))) : (((((/* implicit */int) arr_19 [(signed char)15] [i_1 - 2] [i_1])) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-114)), ((unsigned char)63))))))));
                        var_27 = ((/* implicit */signed char) arr_6 [i_8] [i_1] [i_1] [i_0]);
                        var_28 = ((/* implicit */signed char) min((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_20 [i_0] [i_0]))))), ((-(((/* implicit */int) arr_20 [14ULL] [i_0]))))));
                    }
                    var_29 = ((/* implicit */signed char) var_2);
                    var_30 = ((/* implicit */signed char) min((((unsigned long long int) (short)-9565)), (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 2000011039073660271LL)) : (18ULL))) - (((/* implicit */unsigned long long int) var_0))))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(signed char)15] [i_1] [i_3])) ? ((-(((/* implicit */int) (short)7936)))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)96))))))) ? (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))), ((-(var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((signed char)113), (var_4)))) ? (((/* implicit */int) max((var_4), (arr_1 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) (_Bool)1))))))))));
                }
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_0 - 1] [(short)6] [i_0] [(signed char)12])))) ? ((-(arr_2 [(short)4] [i_0] [i_0]))) : ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)-32553))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 - 2] [i_0 - 2] [i_1]))) : (var_8)))))) : (((((/* implicit */int) arr_11 [(signed char)5] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned char)3))))));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (arr_18 [i_0] [i_1] [i_0] [i_1] [i_0 - 2] [i_0] [i_1 + 1]) : (16353197539949577656ULL)))))) ? (((((((/* implicit */int) var_9)) == (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [3])))) ? (var_8) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_34 += var_9;
        var_35 *= ((/* implicit */signed char) arr_28 [20U]);
    }
    var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min(((unsigned char)93), (((/* implicit */unsigned char) (signed char)11))))), ((unsigned short)10853)));
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) (signed char)2)), (var_8))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2072)))), (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-124))))))))));
}

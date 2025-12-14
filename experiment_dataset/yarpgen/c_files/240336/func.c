/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240336
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
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_11)))) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2554766967801134254LL)) ? (4077193229U) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 452594105)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32738))))))) : (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)-32746)))))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1860))) / (-18LL)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) max((((/* implicit */unsigned short) (short)-9837)), (arr_1 [2] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) arr_7 [i_1])))))));
        var_16 *= ((/* implicit */short) ((signed char) min((4077193210U), (((/* implicit */unsigned int) -2096678387)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1])) || (((/* implicit */_Bool) ((arr_10 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30929)) || ((_Bool)0))))) : (((arr_2 [(unsigned char)18]) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))))))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_15 [(short)7] [i_2])))), (((((/* implicit */_Bool) arr_7 [18LL])) ? (((((/* implicit */_Bool) arr_6 [23U] [i_4])) ? (((/* implicit */int) arr_15 [i_2] [i_2])) : (-540589237))) : (((/* implicit */int) ((arr_10 [i_2]) || (((/* implicit */_Bool) -7831328719757574514LL)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_16 [i_2] [5ULL]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 *= ((/* implicit */short) ((-452594087) - (((/* implicit */int) (short)-32751))));
                            var_21 ^= ((/* implicit */short) ((arr_21 [i_3] [i_3] [i_4] [i_2 + 1] [8] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))));
                            arr_26 [i_2 - 1] [i_3] [i_4] |= ((((/* implicit */_Bool) 1073741823ULL)) ? (arr_21 [i_3] [i_6] [i_6] [i_6] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32744))));
                            arr_27 [3LL] [i_5] [i_4] [i_2] [i_3] [i_2] [i_2] = ((((/* implicit */_Bool) arr_13 [8] [8] [i_4])) ? (arr_22 [i_2] [i_3] [i_2] [i_5] [i_6] [i_5] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)12] [i_2]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_2 - 1])) && (((/* implicit */_Bool) arr_25 [i_2 + 1]))));
                        }
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 1])) ^ (((/* implicit */int) max((arr_24 [i_2] [1U] [i_4] [i_3] [i_2]), (((/* implicit */unsigned short) (signed char)-9)))))))) ? (((/* implicit */int) ((((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) : (452594088))) <= (((/* implicit */int) ((((/* implicit */int) (short)-8812)) <= (((/* implicit */int) (unsigned short)906)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4)))))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                        {
                            var_25 = arr_29 [i_2] [(signed char)9];
                            arr_33 [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-14117)) ? (arr_22 [i_2] [i_2] [i_3] [i_4] [i_5] [i_8] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((-1339814752) <= (((/* implicit */int) (_Bool)1))))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_2] [i_3] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (5801994633441068271ULL))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (short)14355)) : (((/* implicit */int) arr_16 [i_2] [i_3]))))) <= (((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_8])) ? (arr_21 [i_2] [i_2] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) arr_13 [i_2] [(signed char)4] [i_2]))))));
                        }
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 23; i_9 += 3) 
    {
        var_28 *= ((((/* implicit */_Bool) arr_7 [i_9 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43832)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14355))) : (arr_0 [i_9 + 1])))));
        var_29 = ((/* implicit */_Bool) arr_34 [i_9]);
    }
    var_30 = ((/* implicit */signed char) var_5);
}

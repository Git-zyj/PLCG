/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208518
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
    var_18 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) -1308534688)), ((+(6599301685136113761LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_2] [i_3])) << (((/* implicit */int) arr_8 [i_2] [15LL] [i_2] [i_3])))))))))));
                            var_20 = ((/* implicit */_Bool) ((arr_12 [(unsigned char)3] [i_2] [i_1] [i_0]) / (min((max((((/* implicit */long long int) arr_1 [i_3])), (arr_12 [i_4] [i_2] [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [7] [i_4])))))))));
                            var_21 = ((/* implicit */unsigned short) ((((min((5888171936428002338ULL), (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)17501))) / (-6599301685136113777LL)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_0] [7ULL]), (var_5)))) || ((_Bool)1)))))));
                            var_22 = ((/* implicit */_Bool) (unsigned char)139);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 *= ((/* implicit */short) ((long long int) (~(((/* implicit */int) arr_14 [i_1 + 2] [i_3] [i_0])))));
                            arr_15 [i_0] [(unsigned char)6] [(_Bool)1] [i_5] = ((/* implicit */short) (signed char)46);
                            arr_16 [2] [i_5] [(signed char)15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -2943520018802970775LL)), (9223372036854775808ULL)));
                            var_24 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            var_25 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3822213514U)) > (((((/* implicit */_Bool) arr_14 [i_0] [i_2] [(_Bool)1])) ? (arr_3 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [0ULL] [i_0] [10])))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) (-(((arr_17 [i_0] [i_0 - 1] [i_2] [i_3] [(signed char)19]) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_0 + 1] [(_Bool)1] [i_3] [(unsigned char)9]))) : (6599301685136113761LL)))));
                            arr_20 [i_0] [9ULL] [i_0] [i_0] [i_0] [20ULL] [i_0] = ((/* implicit */int) ((-6599301685136113762LL) != (min((((/* implicit */long long int) (-(4294967274U)))), (min((2943520018802970774LL), (((/* implicit */long long int) arr_1 [(unsigned short)0]))))))));
                            arr_21 [i_6] [(signed char)7] [i_2] [i_1] [i_0] = (short)-13976;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_25 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16666)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (12558572137281549277ULL)));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 - 2] [17ULL])) ^ (((/* implicit */int) arr_4 [i_0 - 2] [i_1]))));
                        }
                        arr_26 [18ULL] [14U] = ((/* implicit */int) arr_0 [i_0] [(unsigned short)19]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-13047)) : (var_17)))) ? (((((/* implicit */_Bool) -5813200570039943936LL)) ? (((/* implicit */int) arr_11 [i_8] [(_Bool)1] [i_1] [i_1] [i_0])) : (var_17))) : ((~(((/* implicit */int) arr_17 [i_0] [9] [i_1] [i_2] [(_Bool)1]))))))), (min((arr_0 [(unsigned char)16] [15]), (((/* implicit */long long int) min((var_13), (130609681U))))))));
                        arr_30 [(_Bool)1] [4LL] = arr_23 [(unsigned short)7] [i_1] [7] [i_1 - 1] [i_0 + 1] [i_0] [i_0];
                        arr_31 [i_0] [i_0] [i_0] [(unsigned short)14] [i_0] = ((/* implicit */unsigned char) var_1);
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-((+(((/* implicit */int) var_1)))))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12558572137281549278ULL)) ? ((-((+(2502623392820097132ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13976)))));
                            var_31 = ((/* implicit */long long int) (((-(max((((/* implicit */unsigned long long int) 2943520018802970774LL)), (var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 22U)) ? (arr_37 [i_10] [i_9] [i_9] [(unsigned short)13] [(short)9] [i_0]) : (((/* implicit */unsigned long long int) var_13)))))))))));
                            var_32 ^= ((/* implicit */unsigned long long int) ((0) & (((/* implicit */int) (unsigned char)148))));
                        }
                        var_33 = ((/* implicit */unsigned long long int) min(((unsigned char)94), (((/* implicit */unsigned char) ((arr_11 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_1]) && (((/* implicit */_Bool) arr_0 [4LL] [i_0 + 1])))))));
                    }
                    arr_39 [i_0] [(_Bool)1] [i_0] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)6666)) | (((/* implicit */int) var_12)))) == (((/* implicit */int) arr_36 [i_0] [i_0] [i_0]))));
                    var_34 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)161)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) % (-5813200570039943958LL)))));
                }
            } 
        } 
    } 
    var_35 = min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) * (12558572137281549278ULL)))) ? ((~(8596280251979502336ULL))) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_13)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(33U)))))));
}

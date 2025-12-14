/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243837
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] [(_Bool)1] &= ((/* implicit */long long int) arr_2 [23]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) arr_10 [i_4 - 1] [i_0] [i_2] [i_0]);
                            var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned long long int) arr_11 [12LL] [12LL]))) ? (((/* implicit */int) (unsigned char)132)) : (max((var_0), (((/* implicit */int) var_9)))))), (((/* implicit */int) ((8164753743750003274ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
                            var_16 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_3] [i_4] [i_2])) >> (((((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_2])) - (12803))))) | (((/* implicit */int) (short)3310))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_4 - 1])) ? (((/* implicit */int) (unsigned short)46311)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_10)))))))) : (var_4)))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_3] [i_4] [i_2])) >> (((((((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_2])) - (12803))) + (38251))))) | (((/* implicit */int) (short)3310))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_4 - 1])) ? (((/* implicit */int) (unsigned short)46311)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_10)))))))) : (var_4))));
                            arr_14 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */int) (short)3310)), (-723943568))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) (short)3310)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) (short)3310))))))));
                            var_17 = ((/* implicit */unsigned char) var_5);
                        }
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [10U] = ((/* implicit */_Bool) min((((14639641607467865645ULL) | (((/* implicit */unsigned long long int) 8591424587741889972LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (arr_11 [i_1] [i_1 - 3]))))));
                            var_18 = ((/* implicit */short) ((_Bool) ((unsigned char) max((var_1), (((/* implicit */unsigned long long int) (unsigned short)20847))))));
                            arr_20 [i_2] [i_3] [i_2] [i_2] [6LL] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(5189380242542509306LL))) >> (((((int) var_5)) + (1157795077)))))), ((-(max((((/* implicit */unsigned long long int) var_6)), (7584747028079537628ULL)))))));
                            var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [(unsigned short)9] [i_2] [i_2] [(unsigned short)9]))))) ? (((unsigned long long int) arr_17 [i_0] [i_1] [i_2])) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [18LL] [i_0] [i_2] [(_Bool)1] [i_2] [i_2])), (arr_4 [1LL]))))))));
                        }
                        arr_21 [i_0] [i_0] [i_2] [i_2] [15] = ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 23; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)-3311))))) + (((long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_7)))))));
                                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -7474779511422542246LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_1 - 2] [i_1]))))))) ? (min((arr_5 [i_1 - 3] [i_6 - 2]), (((/* implicit */long long int) (unsigned char)6)))) : (((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned short)44679)))) + (2147483647))) >> ((((~(((/* implicit */int) var_8)))) + (51871))))))));
                                arr_28 [i_0] [i_6] [i_6] [i_6] [i_7] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) (unsigned char)138))))) ? (arr_25 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((417157618U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7168))))))))), (((/* implicit */unsigned long long int) ((unsigned short) min((6898482052114084592ULL), (((/* implicit */unsigned long long int) arr_17 [i_2] [i_6] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    var_23 = ((/* implicit */int) (unsigned short)58367);
}

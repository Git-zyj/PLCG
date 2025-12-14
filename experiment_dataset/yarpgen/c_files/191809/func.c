/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191809
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
    var_17 = ((/* implicit */short) ((unsigned int) ((int) var_16)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((int) var_5);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned int) var_10);
                        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2ULL] [i_1 - 2] [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_3])) : (((/* implicit */int) arr_5 [0U] [0U] [0U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((var_11) / (((/* implicit */unsigned long long int) var_15))))));
                        arr_11 [i_0 - 1] [i_0] [i_2] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((var_15) << (((((/* implicit */int) arr_7 [i_0])) - (97)))))) : (((/* implicit */unsigned char) ((var_15) << (((((((/* implicit */int) arr_7 [i_0])) - (97))) - (68))))));
                        arr_12 [i_0 - 1] [i_0] [(signed char)4] [i_2] [i_3 - 2] [(unsigned short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))));
                    }
                    var_21 &= ((/* implicit */unsigned char) var_5);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_23 -= min((((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [(unsigned short)13])), ((unsigned short)28138)))) + (((/* implicit */int) min((arr_10 [i_0] [i_5] [i_0] [(_Bool)1] [i_6]), (((/* implicit */short) (signed char)(-127 - 1)))))))), (((((/* implicit */_Bool) (short)-18598)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (short)-4637)))));
                                arr_21 [i_6] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */int) var_2);
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [(signed char)12] [i_1] [i_1])) : (-1432465255))), (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 3] [i_1] [i_0 + 1]))))) ? ((-(1532379927))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) -1532379924))) && (((/* implicit */_Bool) 16689314262342259684ULL))))))))));
                var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(var_9)))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)157)), (arr_1 [i_0]))) : (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))))));
            }
        } 
    } 
    var_27 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)123)) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (var_4))))) ^ (((((/* implicit */_Bool) -1158453330)) ? (12457551423773077585ULL) : (((/* implicit */unsigned long long int) -1158453330)))))) - (5989192649936474033ULL)))));
}

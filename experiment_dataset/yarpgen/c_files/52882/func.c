/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52882
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
    var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(36028797018963968ULL))))));
    var_20 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((unsigned short) var_1));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)4095), (((/* implicit */unsigned short) max((((/* implicit */short) arr_0 [i_0])), (var_15))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_10)))))) : ((((!(((/* implicit */_Bool) 9569223656175199590ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_15)))))) : (var_10)))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) (short)7778)) : (((/* implicit */int) arr_7 [(signed char)12] [(unsigned char)13])))), (((/* implicit */int) var_1))))) ? (max((((((/* implicit */_Bool) -1311859337501392724LL)) ? (((/* implicit */int) (unsigned short)61441)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)61440)))) : (((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (max((((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2])) ? (2775842818791603049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [16U] [16U] [i_3]))))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */short) var_6))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)14)))))));
                    }
                    var_25 = ((/* implicit */unsigned char) max((((arr_1 [i_1 - 3] [i_1 - 2]) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_18))))));
                }
                var_26 = ((/* implicit */int) var_6);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223062
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) ((((1382927914231581820ULL) % (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_6))))))) <= (((/* implicit */int) var_8))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (~(((arr_1 [8] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        var_13 = min((((((/* implicit */_Bool) (short)13716)) ? (((/* implicit */int) arr_8 [i_0] [i_3 + 2] [4])) : (1099717859))), ((((_Bool)0) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) (_Bool)1)))));
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)256))) : (4144501410U))))))), ((+(((/* implicit */int) (short)30720))))));
                        arr_9 [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((short)1008), (((/* implicit */short) (!(((/* implicit */_Bool) 17063816159477969796ULL)))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_4] [i_4] = ((((/* implicit */_Bool) max((arr_4 [i_1 - 1] [i_1] [i_0] [i_4]), (arr_4 [i_1 + 1] [i_1 + 2] [i_0] [i_4])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1]))))) : (max((((((/* implicit */_Bool) var_4)) ? (1073739776U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))))), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_4] [(_Bool)1])))));
                        var_15 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61927))) == (17063816159477969781ULL))), (((((/* implicit */int) (short)256)) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_1])) == (var_9)))))));
                        var_16 = ((/* implicit */unsigned int) max((arr_8 [i_1] [i_1 + 2] [i_1]), (((short) min((((/* implicit */unsigned int) (short)256)), (65408U))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((unsigned char) ((arr_2 [i_2] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 2])))))));
                    }
                }
            } 
        } 
    } 
}

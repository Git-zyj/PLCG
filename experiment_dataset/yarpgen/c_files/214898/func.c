/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214898
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
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) (+(4294967295U)))) : (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) var_14))))));
    var_21 = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((var_16) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51410)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967292U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65533))))) || (((/* implicit */_Bool) (short)16098))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) & (1002250213U)));
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_25 += ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_0] [i_4] [i_2])) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((_Bool) (unsigned short)127)))));
                        arr_15 [i_0] [i_0] [16U] [i_0] [3ULL] = (_Bool)1;
                    }
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (16595015685817476110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))) != (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_10)))))), (((((((/* implicit */int) var_15)) >= (arr_13 [i_0] [i_1] [i_0] [(unsigned short)3]))) ? (((/* implicit */unsigned long long int) var_12)) : (max((arr_6 [15ULL] [i_1] [i_2]), (((/* implicit */unsigned long long int) 12U))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+((+(((/* implicit */int) (!(var_5)))))))))));
}

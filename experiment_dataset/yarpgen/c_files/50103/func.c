/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50103
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
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)42846)), (var_12)))) ? (((/* implicit */int) (unsigned short)22675)) : (((((/* implicit */int) (unsigned short)24772)) & (((/* implicit */int) (signed char)(-127 - 1)))))))), (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 234881024U)) ? (4060086248U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) ? (((((/* implicit */int) (unsigned char)237)) - (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)3] [i_2])) || (((/* implicit */_Bool) 15843942189312461978ULL))))), (arr_5 [i_0 - 1]))))));
                            arr_12 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_1))))) : (((((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])) & (((/* implicit */int) arr_10 [8ULL] [i_3 + 1] [i_3] [i_3]))))));
                        }
                    } 
                } 
                var_18 = arr_7 [i_0] [i_0] [i_1];
            }
        } 
    } 
}

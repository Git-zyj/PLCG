/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36439
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
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(unsigned short)14] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((((((/* implicit */_Bool) (signed char)-90)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48665))))), (((/* implicit */unsigned long long int) (signed char)-5))))));
                var_19 = ((/* implicit */unsigned char) arr_2 [i_1]);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)0)) << (((((/* implicit */int) (short)-855)) + (861))))))));
                    arr_11 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [(unsigned char)2] [20U] [i_1] [i_1]))));
                    arr_12 [i_0] [i_1] = ((/* implicit */int) (-(3445603124751388918LL)));
                }
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)39117)) ? (1008485829U) : (arr_5 [i_0 - 3]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 - 4]))))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
}

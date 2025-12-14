/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52274
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
    var_12 |= ((/* implicit */short) min((min((min((((/* implicit */unsigned long long int) (signed char)83)), (var_11))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */short) var_9))))))), (((/* implicit */unsigned long long int) var_9))));
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) % (((long long int) var_11)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    var_15 = ((/* implicit */long long int) max((((((_Bool) arr_0 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_2 - 1])))) : ((+(((/* implicit */int) var_9)))))), (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65))))))))));
                }
            }
        } 
    } 
    var_17 = max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (6507198381037265722ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))));
    var_18 = ((/* implicit */_Bool) ((signed char) (unsigned char)98));
}

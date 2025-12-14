/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223550
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
    var_17 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (unsigned char)0);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_19 = (-(((arr_3 [i_3] [i_1 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0])), ((unsigned short)25602))))))));
                            var_20 = ((/* implicit */long long int) min((var_20), ((-(3843454124509076986LL)))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) max((arr_8 [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)0)))))));
                            arr_10 [i_0] [i_1] [i_1] [10LL] [i_0] [i_1] = ((long long int) ((short) (-(var_14))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) max((max((max((var_2), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1826209402531813945ULL)) && (var_13)))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39933))) : (var_2)))) < (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
}

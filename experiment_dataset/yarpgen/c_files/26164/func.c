/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26164
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
    var_17 = max((var_12), (((unsigned short) ((((/* implicit */int) (unsigned short)28413)) ^ (((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_9))));
    var_19 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)41411))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))) ? ((~(((/* implicit */int) (unsigned short)41395)))) : (((/* implicit */int) min(((unsigned short)45011), (((/* implicit */unsigned short) arr_1 [(unsigned short)0] [i_1])))))));
                var_21 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56850))) : (4398046511103LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48718))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_0]))) >= (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)65532)))))))));
            }
        } 
    } 
}

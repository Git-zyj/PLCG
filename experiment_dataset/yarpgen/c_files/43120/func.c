/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43120
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) == (var_5)))), (min((((/* implicit */long long int) var_14)), (var_1))))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned int) min(((unsigned short)65535), ((unsigned short)0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */short) max((var_1), (((/* implicit */long long int) arr_2 [i_1]))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(arr_4 [i_1]))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
            }
        } 
    } 
}

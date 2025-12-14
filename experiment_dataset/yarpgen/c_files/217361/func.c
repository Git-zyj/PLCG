/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217361
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? ((+(min((var_17), (var_18))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) (unsigned short)61853)))))), ((((-(((/* implicit */int) arr_0 [i_0 + 1])))) / (((/* implicit */int) var_16))))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)3709)), (1594085939335945951LL)));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~((~(((((/* implicit */int) var_5)) / (((/* implicit */int) arr_2 [10LL]))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            {
                arr_10 [i_1] [13LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-31070))));
                arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) & (arr_7 [i_2 + 2])))) + (((((/* implicit */_Bool) max((-1594085939335945943LL), (arr_9 [i_1] [i_2 - 1] [i_2 - 2])))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) arr_0 [i_2])))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50878
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_0))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) (short)4856)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (var_3)))));
    var_14 = ((/* implicit */unsigned long long int) ((short) (unsigned short)64422));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1113))) / (max((8795019280384LL), (((/* implicit */long long int) arr_0 [i_0])))))), (((/* implicit */long long int) min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_1 - 1] [i_1] [i_1 + 2])))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_8 [i_1 - 1] [i_2])))))))));
                    arr_9 [(signed char)16] [i_1] [i_2] [14U] = ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) -4930180771692797762LL)) : (min((((/* implicit */unsigned long long int) arr_4 [(unsigned char)9])), (var_3)))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) var_11)), (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [i_1])))))))) ? (((8510261081734620108LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64411))))))));
                }
            } 
        } 
    } 
}

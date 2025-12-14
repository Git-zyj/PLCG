/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212472
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
    var_19 = ((/* implicit */short) ((long long int) ((short) var_17)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 -= ((short) ((arr_2 [i_1]) ? (((/* implicit */int) ((signed char) var_9))) : ((+(((/* implicit */int) arr_0 [i_1]))))));
                var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 2728132765007770073LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [5LL] [i_1])))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) != (14075052146604550860ULL)))), (((-2728132765007770076LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 4371691927105000755ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_6))))))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((max(((-9223372036854775807LL - 1LL)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-2728132765007770074LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (signed char)127))));
    var_25 += ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-97))));
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_10))));
}

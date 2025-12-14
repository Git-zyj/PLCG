/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34464
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
    var_10 += ((/* implicit */short) (!(((_Bool) ((var_6) <= (((/* implicit */long long int) 902726923)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [4] [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) arr_1 [i_0])))));
                arr_6 [10] [i_1] = ((/* implicit */int) ((((3806974687926054816ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1])))) : (14639769385783496799ULL)));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (((((/* implicit */_Bool) (unsigned char)251)) ? (3806974687926054816ULL) : (3806974687926054816ULL))));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned char)56))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1883215352))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) 5782293757421315119LL))));
}

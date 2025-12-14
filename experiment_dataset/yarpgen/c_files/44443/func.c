/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44443
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (9223372036854775797LL)));
                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_1])));
                var_19 = ((/* implicit */_Bool) (unsigned char)16);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) 1187622686U))))));
    var_21 = ((/* implicit */_Bool) (-((~(((((/* implicit */int) (unsigned short)65531)) >> (((10403414471221179159ULL) - (10403414471221179135ULL)))))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)250)))), (((var_3) * (((/* implicit */unsigned long long int) 3152460099U)))))) : (((/* implicit */unsigned long long int) 3152460106U))));
    var_23 = ((/* implicit */unsigned long long int) (unsigned short)5920);
}

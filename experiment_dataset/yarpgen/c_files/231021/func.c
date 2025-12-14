/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231021
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_2))) % (((((/* implicit */int) (signed char)8)) * (((/* implicit */int) (signed char)-123))))));
    var_21 = max((((unsigned long long int) (_Bool)0)), (((/* implicit */unsigned long long int) ((signed char) ((short) var_14)))));
    var_22 = ((/* implicit */unsigned short) ((long long int) 13318317535520167350ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) var_18)));
                var_24 = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
}

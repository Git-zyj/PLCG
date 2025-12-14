/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51800
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
    var_17 = ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-3433)), (var_0)))) && (((/* implicit */_Bool) ((var_4) ? (-2346050962536870804LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
    var_18 = ((/* implicit */short) ((unsigned char) var_11));
    var_19 = ((((/* implicit */int) var_7)) | ((+(((/* implicit */int) ((unsigned char) var_1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) var_9);
                var_21 = min((((/* implicit */int) ((signed char) (signed char)-21))), ((~((-(((/* implicit */int) (_Bool)1)))))));
                var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
            }
        } 
    } 
}

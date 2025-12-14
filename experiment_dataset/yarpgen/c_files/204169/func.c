/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204169
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((~(((/* implicit */int) (unsigned char)96)))) > (((/* implicit */int) (signed char)-24)))))));
                    var_11 = ((/* implicit */unsigned long long int) (signed char)-30);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-32)) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1950815163)))))))));
    var_13 += ((/* implicit */_Bool) (((+(((/* implicit */int) min((var_1), (((/* implicit */short) var_10))))))) & (((/* implicit */int) (signed char)9))));
    var_14 *= ((/* implicit */short) (~(((/* implicit */int) (short)22419))));
}

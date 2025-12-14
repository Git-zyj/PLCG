/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233274
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_6)))))) % ((-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) - (max((arr_5 [i_0]), (14234952008365376909ULL)))));
                    var_22 = ((/* implicit */_Bool) ((int) var_2));
                    var_23 = ((/* implicit */short) (~(((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_7);
    var_25 = ((/* implicit */_Bool) 1073741823U);
}

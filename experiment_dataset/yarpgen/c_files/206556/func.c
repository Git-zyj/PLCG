/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206556
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
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((-506395248326939594LL), (((/* implicit */long long int) (signed char)33))));
                var_14 = min((((/* implicit */unsigned long long int) ((((long long int) arr_5 [i_1] [i_0] [i_1])) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((7198607464271475305ULL), (((/* implicit */unsigned long long int) (signed char)103)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128))));
                var_15 = ((/* implicit */long long int) arr_4 [i_2]);
                var_16 = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
}

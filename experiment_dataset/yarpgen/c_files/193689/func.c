/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193689
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (3805061097461354112ULL)))) << (((max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (arr_4 [i_1] [(unsigned short)1])))), (max((14641682976248197503ULL), (((/* implicit */unsigned long long int) (short)3014)))))) - (14641682976248197495ULL)))));
                var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) var_4)) ? (14641682976248197496ULL) : (((/* implicit */unsigned long long int) var_6)))), ((-(3805061097461354129ULL)))));
                arr_7 [i_1 + 1] [(signed char)7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)94))))), ((-(((((/* implicit */_Bool) (unsigned short)61016)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)582))) : (10831010803742878492ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */unsigned long long int) min(((~(var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-6756454010573467768LL), (((/* implicit */long long int) var_10))))) || ((!(((/* implicit */_Bool) 6756454010573467767LL)))))))));
    var_17 = max((((/* implicit */int) var_7)), ((~(((/* implicit */int) ((_Bool) var_0))))));
}

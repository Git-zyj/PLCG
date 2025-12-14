/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202274
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-(9007199254740736LL)))))) ? (((max((12877748212986670593ULL), (((/* implicit */unsigned long long int) 1884797626U)))) * (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -9007199254740760LL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) var_0);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9007199254740736LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (-9007199254740767LL)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59706)) ? (arr_1 [(signed char)7] [i_0 + 1]) : (((/* implicit */unsigned int) 1795468665))))) % (((11798637129468743899ULL) + (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2]))));
                var_16 = ((/* implicit */unsigned short) (((-(16980149280913446453ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [2] [(unsigned char)6] [i_1])), (-9007199254740760LL)))) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 1]))))));
                var_17 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((5586925440485217830ULL) << (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}

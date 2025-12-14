/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202964
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) min((arr_3 [i_0] [i_1 - 1] [i_0]), (arr_3 [i_1] [i_1 + 1] [i_1 - 1]))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0] [i_1 + 1])), (max((((/* implicit */long long int) 501764812U)), (arr_1 [i_0])))))) : ((~(min((8755814281893592656ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -539509359905769084LL)) ? (8755814281893592656ULL) : (((/* implicit */unsigned long long int) 4294967281U))));
    var_21 = ((/* implicit */long long int) var_2);
}

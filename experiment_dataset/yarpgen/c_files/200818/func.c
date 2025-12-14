/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200818
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
    var_16 &= 16759709191238778268ULL;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((max((16759709191238778268ULL), (1687034882470773372ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16759709191238778268ULL)))))))) ? (min((((/* implicit */long long int) ((1U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))), (-961723510596558588LL))) : (((((1U) >= (((/* implicit */unsigned int) 2069382847)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) % (-6584561761684313844LL))) : (((/* implicit */long long int) (~(3670016))))))));
                    var_18 = min((((((/* implicit */_Bool) ((879159450) << (((((((/* implicit */int) (signed char)-84)) + (108))) - (24)))))) ? (137438953472ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 730386474U)) ^ (961723510596558587LL)))))), (((/* implicit */unsigned long long int) ((2069382847) % (min((((/* implicit */int) (signed char)-20)), (2069382847)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) var_10)) / ((~((+(1687034882470773347ULL)))))))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2479107491U)) ? (((/* implicit */int) ((13426455920252986112ULL) != (((/* implicit */unsigned long long int) 1U))))) : (((/* implicit */int) var_11))))), (min((var_2), (((/* implicit */long long int) var_7))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46397
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 + 3]), (arr_2 [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                arr_6 [i_1] = ((/* implicit */short) (~(max((((/* implicit */long long int) arr_4 [i_1 + 1] [i_0 + 1] [i_0 + 1])), (9152754335533977256LL)))));
                var_15 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) < (((unsigned long long int) arr_5 [i_0 - 1]))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_11)))) ? (((((/* implicit */unsigned long long int) var_10)) / (var_2))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (1827375468U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35446)))))))) < (var_11)));
    var_17 = ((/* implicit */long long int) max(((~(2455320996U))), (((/* implicit */unsigned int) min((((_Bool) var_2)), (var_7))))));
    var_18 = ((int) var_9);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37810
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
    var_11 = ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (max(((((!(var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1] [i_1]) == (arr_2 [i_0] [i_1]))))) : (((arr_3 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_6))))) >= (((unsigned int) (signed char)120)))))))));
            arr_4 [i_0] = ((/* implicit */signed char) ((_Bool) min((2820030867U), (var_0))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (arr_3 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((unsigned long long int) var_4)))));
            var_14 = ((/* implicit */unsigned int) ((((_Bool) (signed char)-113)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (3317566292U)))), ((+(arr_5 [i_0]))))) : (((((((/* implicit */_Bool) (signed char)28)) ? (var_8) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) + (((/* implicit */unsigned long long int) (~(arr_3 [(signed char)16] [i_2]))))))));
            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))));
            var_16 = ((unsigned int) (+(((((/* implicit */int) (signed char)-16)) - (((/* implicit */int) (_Bool)1))))));
            var_17 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_2])) / (((/* implicit */int) arr_0 [i_2]))))));
        }
        var_18 -= ((var_9) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [2U])))))));
        var_19 = ((/* implicit */unsigned int) 4632047208859840993ULL);
    }
    var_20 = ((/* implicit */unsigned long long int) (((-(((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) != (var_7)))))));
}

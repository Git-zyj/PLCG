/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204411
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */_Bool) (+(((13200266489380134611ULL) & (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1])))))));
                var_19 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (_Bool)1))))), (arr_2 [i_0] [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_0 [i_1]))))))))));
                var_20 = ((/* implicit */_Bool) min((((((arr_3 [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) ((signed char) var_16))))), (((/* implicit */int) min((max((arr_1 [(signed char)14]), (arr_1 [i_1]))), (((/* implicit */short) arr_3 [i_1 + 1] [i_1 - 1])))))));
                var_21 += ((/* implicit */_Bool) (+(max((arr_2 [i_1 + 3] [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 + 3] [i_1 + 3] [i_1 + 2])))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_13))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (signed char)11);
    var_24 = (+(((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)11)), ((unsigned char)255))))) : (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
}

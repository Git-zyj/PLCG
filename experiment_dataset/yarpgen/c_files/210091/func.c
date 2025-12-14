/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210091
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] |= ((/* implicit */unsigned long long int) var_4);
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((int) var_6)))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0])), (arr_9 [i_2 + 1])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-56))))))), (var_14)));
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        var_19 -= ((((/* implicit */_Bool) 439573056)) ? (((3176092711377671428LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
        arr_14 [i_3] [(signed char)15] = ((/* implicit */_Bool) ((signed char) ((int) min((((/* implicit */long long int) arr_9 [i_3])), (arr_1 [i_3])))));
    }
}

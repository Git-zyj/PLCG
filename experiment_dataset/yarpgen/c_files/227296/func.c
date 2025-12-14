/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227296
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
    var_20 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_4 [i_1]), ((signed char)31)))), (var_1)));
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_12);
                var_21 = ((/* implicit */signed char) min(((+(min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_0 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)29)), (var_12)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) - (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((min((var_14), (((/* implicit */long long int) (unsigned short)10265)))), (((/* implicit */long long int) var_18))));
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        var_23 = arr_9 [i_2];
        arr_10 [11U] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)7168)), (((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (arr_0 [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    }
    var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (var_2)));
}

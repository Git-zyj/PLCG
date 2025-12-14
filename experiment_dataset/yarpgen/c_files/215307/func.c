/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215307
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
    var_10 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_11 = (~(((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (var_5)))));
        var_13 = ((/* implicit */_Bool) var_4);
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5364)))))) + (arr_2 [i_1 + 2] [i_1 - 1]))))));
        var_15 = ((/* implicit */unsigned short) ((arr_2 [3] [3]) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_2 + 1])) ? (arr_3 [i_1 - 1] [i_2 + 1]) : (arr_3 [i_1 + 2] [i_2 - 1]))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1 - 2] [i_2])) == (var_0)))) == ((~(((/* implicit */int) (unsigned short)60158)))))))));
            var_18 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_6))))));
        }
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_2 [i_1 - 2] [i_1 - 1]))))));
        var_20 = arr_2 [i_1] [i_1];
    }
}

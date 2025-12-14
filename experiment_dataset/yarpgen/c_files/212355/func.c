/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212355
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (11403320368219856900ULL)))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16532716432153261061ULL)))))));
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) 1750804609)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) / (17548918928440485398ULL))) : (min((11403320368219856900ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [5ULL])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 772724201U)) ? (((arr_0 [5ULL]) ? (((/* implicit */long long int) 1540277302)) : (1557115095485940589LL))) : (((arr_0 [i_0]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5)))))));
        var_17 |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) != (var_1))) || (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
    }
}

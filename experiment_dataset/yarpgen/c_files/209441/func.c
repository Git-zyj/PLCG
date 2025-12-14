/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209441
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [8ULL])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) ^ (((((/* implicit */long long int) arr_1 [i_0])) ^ (var_13))))) & (((/* implicit */long long int) (~((~(arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */int) var_15)) & (arr_1 [i_0]))) : (((/* implicit */int) ((_Bool) (signed char)121)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((int) ((var_9) >= (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) var_5)))) >= (((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_4 [i_1]))))))) <= (((/* implicit */int) arr_4 [i_1]))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_5 [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) * ((-(((/* implicit */int) arr_5 [i_1]))))))) : (max((((/* implicit */long long int) max((var_11), (((/* implicit */int) arr_5 [16ULL]))))), (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_3)))))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_22 += ((/* implicit */signed char) max(((+(((var_11) + (((/* implicit */int) arr_7 [i_2])))))), (((/* implicit */int) (unsigned short)24273))));
        var_23 = ((/* implicit */long long int) arr_6 [i_2]);
        var_24 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_2])), (var_12)))) ? (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) arr_0 [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    }
    var_25 = (unsigned short)41262;
}

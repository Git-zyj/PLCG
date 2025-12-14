/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218790
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
    var_10 = var_7;
    var_11 = ((/* implicit */short) (~(((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (1562638475U))), ((_Bool)1))))));
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9))))))) ^ (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((unsigned short) arr_3 [i_0]);
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) (unsigned short)2047))));
        var_14 += ((/* implicit */short) ((arr_3 [(short)4]) - (((unsigned int) var_3))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36103)) || (((/* implicit */_Bool) arr_0 [(signed char)6] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 0U)))))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_5 [i_1 - 3]) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1 - 1])));
            var_16 = ((/* implicit */unsigned short) arr_3 [i_0]);
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_14 [i_2] = ((/* implicit */unsigned short) var_3);
            var_17 += ((/* implicit */unsigned int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) -4696606510141835511LL))))), ((-(((/* implicit */int) var_0)))))) > ((-((+(((/* implicit */int) var_1))))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) ((8191U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 + 1] [i_2 + 1])))));
            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967291U)) ? ((+(4294967289U))) : (arr_16 [i_4 + 1] [i_2 - 1] [i_2 - 2])));
        }
        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            var_20 = ((/* implicit */signed char) (+(min((arr_18 [i_2 - 2] [i_5 - 3] [i_2 - 2]), (((/* implicit */unsigned int) var_8))))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_20 [i_2] [i_2 - 1])));
        }
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) (signed char)117))), ((+(0ULL)))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245983
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
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_5)))))) : (var_9)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 17; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1]);
            arr_7 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) arr_3 [i_0 + 1]);
        }
        for (short i_2 = 4; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((arr_1 [(short)16]) >> (((((((/* implicit */_Bool) min((-1311940408301309949LL), (((/* implicit */long long int) 1497637271U))))) ? (max((arr_3 [i_0]), (((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */long long int) (+(arr_4 [i_2 - 4] [i_2 - 4] [i_0 - 1])))))) - (5895961180954475965LL)))));
            arr_10 [i_2] [i_2] = var_12;
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */int) arr_2 [7] [14LL])))), (((/* implicit */int) arr_5 [(unsigned char)6] [(unsigned char)6] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_11))) : (((/* implicit */long long int) arr_4 [(signed char)9] [i_2] [i_2])))))));
        }
    }
}

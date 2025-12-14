/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226492
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
    var_10 = ((/* implicit */signed char) max((524224LL), (-1LL)));
    var_11 -= ((/* implicit */unsigned char) 20U);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((67108863LL) > (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((long long int) (-(((/* implicit */int) (unsigned char)242)))))));
                    arr_8 [i_1 + 2] [i_1 + 2] [i_0] = ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) * (var_8)))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_0] [i_2] [i_0 + 1]))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) < (arr_3 [i_0] [i_0] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2]))))))) : ((~(var_2))))));
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */long long int) var_9);
                }
                var_12 = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((140737488322560LL), (((/* implicit */long long int) arr_10 [i_3] [i_3])))))));
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) var_7);
                    arr_20 [i_3] [i_4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) & (arr_14 [i_5] [i_4] [i_3]))))))));
                }
            } 
        } 
    }
}

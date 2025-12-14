/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219708
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0]))))) ? (-4173591657208657503LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))))) : ((+(((/* implicit */int) (unsigned short)18387))))));
                    arr_8 [i_0] = 6784095461325743093LL;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_5 [i_4] [i_0] [i_0] [i_1]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [8LL] [i_2] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_4])) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [4LL] [(unsigned short)7] [i_0] [i_3]))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                                var_14 += ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) var_3)))))), (min(((~(((/* implicit */int) arr_6 [i_1] [8LL] [8LL] [i_3])))), (arr_10 [i_0] [(unsigned short)4] [i_2] [i_4])))));
                                var_15 -= ((/* implicit */_Bool) max((min((((long long int) arr_3 [i_0] [10] [i_0])), (min((arr_12 [i_4] [i_4] [i_4] [7] [i_4] [i_4] [0]), (var_6))))), (((arr_6 [i_1] [i_1] [6LL] [i_3 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_3 + 1]))) : (9223372036854775807LL)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] &= arr_6 [i_1] [i_1] [i_1 + 4] [i_0];
                    arr_17 [i_0] [i_1 + 1] [i_0] = ((int) max((arr_6 [i_0] [i_0] [i_1] [i_1 + 3]), (arr_6 [i_0] [i_1] [i_2] [i_1 + 3])));
                }
            } 
        } 
    } 
}

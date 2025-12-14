/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245813
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 11598456268254254319ULL)) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) var_11))))), (min((((/* implicit */long long int) var_11)), (1151756258493881606LL)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1151756258493881607LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_0])))))) ? (((/* implicit */int) ((_Bool) 1151756258493881606LL))) : (max((var_15), (var_16)))))), (((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) arr_7 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)26685)) : (var_16)))) : (((unsigned long long int) var_9))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) (~(arr_8 [i_0 - 1] [i_0 - 1])));
                        var_22 = ((/* implicit */unsigned short) arr_0 [i_2 - 1]);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [8LL] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_3] [i_2] [i_1]))));
                    }
                    arr_10 [i_0 - 1] = ((/* implicit */long long int) min((var_16), ((-(((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1]))))));
                }
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_6 [17] [i_0 - 1])))));
                var_24 = arr_7 [i_0];
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))));
}

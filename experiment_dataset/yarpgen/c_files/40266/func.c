/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40266
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
    var_18 |= ((/* implicit */unsigned long long int) (unsigned short)15913);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) min((min((var_15), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) ((130368339301243323ULL) == (130368339301243323ULL)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_20 |= ((/* implicit */long long int) ((((626682611) >> (((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))) - (194))))) << (((var_4) - (17418876845323315655ULL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) var_12);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_9 [i_2] [i_2] [i_2] = (unsigned short)15913;
                arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_7 [i_1 + 1] [i_2]) ^ (arr_7 [i_1 - 2] [i_2])));
            }
        }
        var_21 |= ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (arr_4 [i_0] [i_0] [i_0])))) * (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_17))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (unsigned short)51503))));
}

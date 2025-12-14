/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34229
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) 131071ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_2 + 2]);
                }
            } 
        } 
        var_18 -= ((/* implicit */short) var_16);
        var_19 ^= ((/* implicit */unsigned long long int) ((131071ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) - (arr_11 [i_0] [i_3 - 1] [2U])))) ? (max((arr_10 [i_3] [i_0] [i_3]), (arr_11 [i_3] [i_3 - 1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1] [i_3]))))))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 131054ULL))));
                        var_22 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((unsigned int) (short)-11446))), (arr_3 [i_5])))));
                        arr_15 [i_4] [i_0] |= (((+(arr_14 [i_4 + 2] [i_5 + 2] [i_5] [i_5 - 1] [i_5 - 1] [i_5]))) << (((((((/* implicit */_Bool) var_3)) ? (max((arr_9 [i_0] [i_4]), (((/* implicit */unsigned long long int) 3768770427U)))) : (((/* implicit */unsigned long long int) 2850195095U)))) - (7582312698752448904ULL))));
                    }
                    var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3 + 1] [i_3])) ? (var_6) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_3 - 1] [i_3 + 2] [i_3 + 1])))))));
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)9549)), (10234337910907159417ULL)));
                    var_24 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (max(((~((~(var_6))))), (((/* implicit */unsigned long long int) var_4))))));
    var_26 *= ((/* implicit */unsigned long long int) var_16);
    var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 423136869U)) && (((/* implicit */_Bool) var_16))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43673
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
    var_17 += var_15;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 1] [i_2] [i_2 + 3])) ? (arr_8 [i_0] [i_3 + 1] [i_2 + 1] [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)334))))))));
                            var_19 *= ((/* implicit */short) max((18168048298026067192ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2124714066U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)235))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_4] [i_3] [i_2 + 3] [i_2] [i_1] [i_0] [i_0])))) : (890341255U))))));
                            var_20 = ((/* implicit */short) 18074360577443647683ULL);
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) 890341255U)), (arr_12 [i_3] [i_4] [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 1]))) + (((((((/* implicit */_Bool) 8191U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))) : (var_16))) + (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (var_16))))))))));
                        }
                    } 
                } 
            } 
            var_22 = var_4;
            arr_13 [i_1] [i_0] [i_1] = var_2;
        }
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) var_11)))))));
        var_24 += ((/* implicit */short) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 2149997560U)) : (var_2))), (((/* implicit */unsigned long long int) var_1))));
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] = ((/* implicit */unsigned long long int) (((~(arr_9 [4U] [i_0] [i_5] [i_5 + 2] [i_0] [i_0] [i_0]))) % (max((3404626037U), (arr_9 [i_0] [i_0] [i_0] [6U] [i_5] [i_0] [i_5 + 1])))));
            var_25 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_11 [i_0] [(short)1] [4ULL] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 9; i_6 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((12ULL) > (278695775683484423ULL))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 + 2]))) : (890341258U))))));
        }
    }
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-23968)), (1073725440U)))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) (short)-18883))))));
}

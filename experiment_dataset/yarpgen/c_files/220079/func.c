/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220079
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((arr_5 [i_1]) ^ (max((((/* implicit */long long int) arr_0 [i_0] [11U])), (max((((/* implicit */long long int) arr_2 [i_0])), ((-9223372036854775807LL - 1LL))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_15 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) << (((var_3) - (1087761177U)))))) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (min((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_3] [i_2] [12LL] [7U])))))));
                            var_16 = ((((unsigned int) arr_6 [i_0 - 1])) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6U] [i_3]))));
                            var_17 = ((/* implicit */long long int) 14000983389309230186ULL);
                            var_18 ^= ((/* implicit */short) (!(((var_9) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_9 [i_1 + 1] [13U] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((((/* implicit */_Bool) arr_2 [6ULL])) ? (var_9) : (-8353294365193033825LL))), (var_10)))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8353294365193033833LL)) ? (arr_4 [4LL]) : (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (_Bool)1))))) ? (var_4) : (arr_2 [i_1]))))))));
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (!(arr_1 [13U] [4LL])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        var_22 = ((/* implicit */_Bool) (-(arr_2 [i_4 - 1])));
        var_23 *= ((/* implicit */unsigned int) arr_11 [i_4 + 2]);
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            var_24 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [18U])) ? (1468671930U) : (var_1))))));
            var_25 = ((/* implicit */_Bool) ((var_3) >> (0U)));
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [(_Bool)1]))) - (9223372036854775807LL)))) ? (((((((/* implicit */_Bool) var_4)) ? (var_0) : (var_10))) * (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_14 [i_5] [(short)14])), (arr_15 [i_5])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(_Bool)1])))));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) arr_14 [14U] [14U]);
        var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
    {
        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2641285311174905197ULL)) || (var_8)));
        var_29 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_7 - 1] [i_7 + 1])) & (((/* implicit */int) arr_0 [i_7 + 1] [i_7 + 1]))));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((long long int) arr_17 [i_7 + 1] [20LL])))));
    }
}

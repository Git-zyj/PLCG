/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231060
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (var_7)))) && (((/* implicit */_Bool) var_1))));
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */unsigned char) var_17);
    var_21 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [(_Bool)1] [i_0]))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (arr_1 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned char)68))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(0))) : (3)))) ? (((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1]))) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (arr_4 [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_1] [(_Bool)1]) << (((((/* implicit */int) (signed char)-45)) + (49)))))) && (((/* implicit */_Bool) arr_3 [i_2]))));
            arr_11 [i_2] &= ((/* implicit */unsigned long long int) (unsigned char)56);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_24 &= ((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_1]);
                var_25 = ((unsigned long long int) arr_1 [i_1] [i_2]);
            }
            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_4 - 1] [i_1]))));
                arr_20 [i_4] [15] [i_1] [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2]))));
            }
            arr_21 [i_2] [i_2] [i_1] = ((/* implicit */int) (((!(arr_14 [i_2] [i_2] [i_1]))) ? (((/* implicit */long long int) arr_4 [i_2])) : (arr_16 [i_1])));
        }
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5]))) : (arr_15 [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) ((_Bool) arr_15 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */int) ((short) arr_15 [i_5] [i_5] [i_5] [i_5])))));
        var_28 = ((int) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((((/* implicit */unsigned int) arr_4 [10LL])) ^ (arr_3 [9ULL]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5] [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])) : (arr_19 [i_5] [i_5] [i_5]))))));
    }
    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        var_29 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((arr_16 [i_6]) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6])))))), (arr_4 [i_6])))) ? (((/* implicit */unsigned long long int) (~(arr_27 [i_6])))) : (((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31681))) : (4923723392726718993ULL))) : (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_6]))))));
        arr_28 [18U] = ((/* implicit */_Bool) arr_6 [i_6]);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225372
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
        arr_4 [(short)6] = ((/* implicit */int) (unsigned short)31933);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                arr_12 [i_2] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)17)) ? (arr_5 [i_3]) : (arr_10 [i_1] [11U] [i_2] [i_3]))), (min((arr_10 [10ULL] [i_3] [10ULL] [i_2]), (arr_10 [i_1] [i_2] [i_3] [i_3])))));
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33577)) >> (((max((((/* implicit */unsigned long long int) var_14)), (10458720443114433479ULL))) - (10458720443114433470ULL)))))) : (max((arr_1 [i_2]), (arr_11 [i_2] [i_2] [i_3] [4ULL])))));
            }
            arr_13 [i_2] = ((/* implicit */long long int) (unsigned short)22074);
        }
        arr_14 [(unsigned char)4] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])), (min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_1])))))), (((((3596778195537545096ULL) & (((/* implicit */unsigned long long int) arr_0 [i_1])))) - (arr_10 [i_1] [i_1] [i_1] [i_1])))));
        arr_15 [(short)10] = ((/* implicit */unsigned char) var_9);
        var_20 = ((/* implicit */unsigned char) (-(min((min((((/* implicit */unsigned int) -1731961366)), (arr_1 [i_1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [(unsigned short)0])))))))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) max((var_1), (((/* implicit */short) var_3)))))));
                arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) max((var_4), (var_12))))))) <= (min((((/* implicit */long long int) ((arr_17 [i_5] [(short)2]) < (((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_4]))))), (arr_18 [i_5] [i_4])))));
                var_22 &= ((/* implicit */unsigned short) max((arr_21 [i_5]), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) + (var_10)))))));
                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (arr_19 [i_4] [i_4] [i_5])))), (min((((/* implicit */unsigned long long int) arr_19 [7] [i_4] [i_5])), (min((((/* implicit */unsigned long long int) var_6)), (929276528240450492ULL)))))));
                arr_23 [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_18)) ? (arr_19 [i_4] [i_4] [i_4]) : (arr_19 [i_4] [i_4] [6ULL]))), ((~(arr_21 [i_4])))));
            }
        } 
    } 
}

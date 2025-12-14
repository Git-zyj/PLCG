/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194898
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) ((((unsigned int) arr_1 [i_0])) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))) & (((/* implicit */int) arr_4 [i_0] [5ULL] [i_0])))))));
                var_19 &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)105)) & (363876519)));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (+(min((((long long int) var_14)), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned short) arr_0 [i_0] [i_1])))))))));
                arr_8 [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) min((((/* implicit */unsigned short) var_15)), (((unsigned short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_10)))))));
    var_21 |= ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_11 [10U] |= ((/* implicit */unsigned char) ((unsigned short) ((long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (signed char)33))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_6))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_5))));
                                arr_23 [9] [i_4] [9] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_13 [i_4]))));
                                arr_24 [i_3] [2U] [i_4] [2U] [i_6] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */int) arr_13 [22ULL])) - (((/* implicit */int) var_15)))) : (-363876521)));
                                arr_25 [i_7] [i_3] [i_5] [i_3] [(unsigned short)13] = ((/* implicit */short) ((((arr_12 [i_3]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [0U]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41983)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) : (3999797615U))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) var_6);
                }
            } 
        } 
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) arr_17 [i_3]);
    }
    for (signed char i_8 = 3; i_8 < 19; i_8 += 3) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) (-(arr_22 [i_8] [(unsigned char)20] [i_8 - 2] [i_8] [i_8 + 2])));
        arr_30 [i_8] [i_8] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_15 [i_8] [(unsigned short)8] [i_8 + 2])))) + (((((/* implicit */_Bool) max((arr_14 [(unsigned char)4] [(unsigned char)4]), (((/* implicit */unsigned char) (signed char)105))))) ? (((/* implicit */int) arr_16 [i_8])) : (((/* implicit */int) ((unsigned short) var_17)))))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned short) max((((long long int) arr_15 [10LL] [10LL] [i_8])), (((/* implicit */long long int) arr_13 [i_8]))))))));
    }
}

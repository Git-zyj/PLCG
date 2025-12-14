/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240219
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
    var_17 *= ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) / (var_7)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] &= ((/* implicit */long long int) var_6);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) arr_8 [i_1] [i_1]);
            arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) (signed char)(-127 - 1)))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [6U]))))) ? (((unsigned long long int) arr_4 [6LL])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2ULL]))))))));
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_3] [i_1]);
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (signed char)116))))) : (arr_8 [i_1] [16U])))))));
        }
        for (int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-113))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((~(max((arr_7 [i_1] [i_4] [10LL]), (arr_7 [i_1] [i_1] [(short)18]))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_1] [i_4] [10])), (arr_11 [i_1]))))))))))));
        }
        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            arr_21 [i_1] = ((/* implicit */signed char) var_10);
            var_22 *= ((/* implicit */unsigned int) arr_15 [2LL] [i_5] [i_5]);
        }
        arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) <= (((long long int) arr_6 [i_1]))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) < (6845733116832490949ULL)));
}

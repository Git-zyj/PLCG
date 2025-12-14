/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50322
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
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) var_1);
                arr_4 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (-(((arr_2 [(unsigned short)18] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))), (((-6086747655069176648LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24184))))) | (((/* implicit */int) (short)24203)))))));
        var_14 ^= ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2 - 2]);
        var_15 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_2])), (((int) arr_2 [10LL] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2]))) : (((long long int) arr_1 [i_2 - 2])));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) min((((arr_5 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3]))) : (arr_2 [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3] [i_3])) | (((/* implicit */int) arr_8 [i_3] [i_3])))))));
        var_16 = ((/* implicit */int) (signed char)123);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            arr_15 [(unsigned short)0] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3])) * ((+(((/* implicit */int) var_1))))));
            arr_16 [i_4] [i_3] [i_4] = ((/* implicit */short) (~(((unsigned long long int) arr_0 [i_4]))));
            var_17 = ((/* implicit */long long int) arr_1 [11]);
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_18 [i_5] [i_5])))));
        var_19 = ((/* implicit */unsigned int) (signed char)-119);
        var_20 = ((/* implicit */unsigned int) ((arr_18 [i_5] [(short)7]) < (arr_18 [i_5] [i_5])));
    }
    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            arr_25 [i_6] [i_6] = ((/* implicit */_Bool) ((((long long int) (~(((/* implicit */int) var_1))))) / (((long long int) min((arr_24 [i_6] [i_7]), (arr_24 [15LL] [i_6]))))));
            arr_26 [i_6] = ((/* implicit */int) arr_24 [i_6] [i_7]);
            var_21 &= ((/* implicit */long long int) ((signed char) ((signed char) arr_21 [i_7])));
        }
        arr_27 [i_6] = ((/* implicit */short) ((((((/* implicit */long long int) ((unsigned int) arr_3 [i_6] [i_6]))) + ((~(arr_21 [i_6]))))) ^ (((((/* implicit */long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_2 [i_6] [i_6])))))) * (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_20 [i_6])))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_24 [i_6] [i_6]))) ? (arr_2 [i_6] [i_6]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_6])))))));
        var_23 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_6] [i_6])) + (((/* implicit */int) (!(arr_17 [i_6] [i_6]))))));
    }
    var_24 = ((/* implicit */_Bool) ((unsigned short) var_4));
}

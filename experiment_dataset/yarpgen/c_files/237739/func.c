/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237739
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)-27724)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) : (var_6)))) ? (((/* implicit */long long int) min(((~(var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)106)))))))) : (-7558920568503746002LL))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((-7558920568503746011LL) < (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])))))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            var_15 *= ((/* implicit */signed char) (~(arr_3 [i_3 + 1] [i_3 - 3] [i_3 - 3])));
            var_16 = ((/* implicit */_Bool) ((short) arr_5 [i_3 + 2] [(short)16] [i_3 + 1] [i_3 - 3]));
            var_17 = ((((/* implicit */int) arr_9 [i_3 + 2])) & (((/* implicit */int) arr_5 [i_0] [i_3] [i_3 - 1] [i_3])));
        }
        var_18 ^= var_5;
        var_19 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0]));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_13 [(signed char)8] [(unsigned char)5] = ((/* implicit */signed char) arr_2 [i_4]);
        arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_4]) : (arr_11 [i_4])))) ? (arr_11 [(unsigned char)15]) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (short)-5)) : (arr_11 [i_4])))));
    }
}

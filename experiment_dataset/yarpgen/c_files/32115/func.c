/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32115
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) (signed char)116)) | (((/* implicit */int) (short)-2821)))) : ((~(arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) (-(-2066650284)));
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)-2800))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            var_12 = ((/* implicit */unsigned long long int) var_0);
        }
        for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_2 - 2] = ((/* implicit */unsigned long long int) var_5);
            var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [2LL] [i_2 - 1] [i_2])) ? (var_3) : (arr_1 [i_0] [i_2])))) ? (arr_8 [i_2 + 2] [i_2] [i_2]) : (((((/* implicit */unsigned long long int) arr_7 [i_2] [i_0] [i_0])) * (arr_8 [i_0] [i_2 - 2] [i_2])))));
            var_14 = ((/* implicit */signed char) arr_0 [i_2 + 1] [i_2 + 1]);
        }
        for (int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_15 = (-2147483647 - 1);
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(-2066650284)));
            var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_3 + 1] [i_3 + 1])) ? (arr_7 [i_3 + 2] [5U] [i_3 + 1]) : (arr_7 [i_3 + 2] [i_3] [i_3 + 1])));
        }
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            arr_16 [i_0] [i_0] [0ULL] |= ((/* implicit */unsigned short) arr_11 [i_0]);
            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
        }
    }
    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        var_18 = (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5]))))) ? (arr_12 [4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5]))))));
        arr_20 [i_5] |= ((/* implicit */_Bool) 2066650283);
    }
    var_19 = ((/* implicit */unsigned char) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
}

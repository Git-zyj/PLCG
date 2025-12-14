/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51654
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
    var_18 |= ((/* implicit */int) var_10);
    var_19 &= ((/* implicit */short) 46358009);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) (-(((2147483647) / (2147483647)))));
                    var_21 += ((/* implicit */int) min((((arr_6 [i_0 + 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((((/* implicit */unsigned long long int) var_17)) <= (((11169426243730814438ULL) & (((/* implicit */unsigned long long int) 2147483636))))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (-1198096308762751758LL)));
                    arr_9 [i_1] [i_0 - 2] [i_2] = ((/* implicit */short) (signed char)38);
                }
            } 
        } 
        var_23 ^= ((/* implicit */signed char) (+(arr_6 [i_0 - 2])));
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_13 [(unsigned short)10] = ((/* implicit */unsigned int) var_11);
        var_24 = ((/* implicit */int) var_4);
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_25 = min((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 358584776)) : (var_9))));
                    arr_23 [i_5] [i_4] [10ULL] [i_5] &= ((((((/* implicit */_Bool) -8449763138998315372LL)) || (((/* implicit */_Bool) -3759001236480413119LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_5 - 3] [i_5 - 2]) >= (((/* implicit */unsigned long long int) -498253792)))))) : (min((-7838068865089476575LL), (((/* implicit */long long int) arr_20 [i_5 + 1] [i_5] [i_6])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    {
                        arr_32 [i_9] = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [8])) ? (((/* implicit */int) var_8)) : (-292937477)))) - (((((/* implicit */_Bool) var_16)) ? (arr_0 [i_4] [i_8 + 1]) : (((/* implicit */long long int) var_2))))))));
                        var_26 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8066)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [1]))) : (2305843009213689856LL)))) ? (arr_18 [i_8 + 3] [i_9]) : (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [16] [i_9])) ? (arr_26 [i_9] [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) != (((/* implicit */long long int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21595)))))))))))));
                    }
                } 
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217635
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_1] [(signed char)8] [(unsigned short)9])) ? ((+(var_10))) : (((/* implicit */unsigned long long int) var_8))))) ? ((-(((((/* implicit */int) arr_9 [1] [(short)9] [(_Bool)1] [i_1])) * (((/* implicit */int) (unsigned char)246)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (-9223372036854775787LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (((~(-9157361639835049346LL))) & (((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_0 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0 - 1])) + (11069)))))))))));
                        arr_13 [16ULL] [i_0] [i_3] = ((/* implicit */unsigned char) arr_1 [i_2]);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 9223372036854775760LL))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_18 [i_0] [5LL] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                        arr_19 [i_1] [i_1] [i_1] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (min((((/* implicit */unsigned long long int) (unsigned char)254)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) (unsigned short)11)), (((/* implicit */short) arr_8 [i_1]))))))));
                    }
                    var_16 = ((/* implicit */int) (~(min((arr_2 [i_0 + 1] [i_1]), (arr_16 [i_1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_17 = 8646911284551352320LL;
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_5]))));
        var_19 *= ((/* implicit */signed char) (-(var_7)));
        var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_5]))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) arr_0 [i_5])))));
    }
}

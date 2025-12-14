/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33086
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
    var_11 += ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_2)))) == (var_6))))));
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) ((var_6) > (var_1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (((~(var_9))) == (((/* implicit */long long int) (-2147483647 - 1))))))));
                                var_14 += ((((((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_4 - 1])) ^ (((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)1] [(signed char)1])))) | (((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((arr_4 [i_0]) / (var_3))) : (((/* implicit */int) arr_10 [8ULL] [(signed char)8] [i_3] [i_4 - 1])))));
                                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1879048192U)));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483648U)), (((5767947296610756841ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32299)))))))) || (((/* implicit */_Bool) ((int) ((arr_8 [i_0 + 3] [4U] [i_0 + 3] [4U]) ? (((/* implicit */int) var_0)) : (var_8)))))));
                arr_15 [i_1] = arr_9 [7LL] [i_0];
                arr_16 [i_0 + 3] [i_0 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)11])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (var_1) : (((/* implicit */unsigned long long int) arr_2 [(unsigned short)3] [i_0 - 1]))))) ? (max((((/* implicit */int) arr_0 [(_Bool)1] [i_1])), (var_8))) : ((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}

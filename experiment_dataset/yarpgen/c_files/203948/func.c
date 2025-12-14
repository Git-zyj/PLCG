/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203948
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
    var_13 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-20901)) : (((/* implicit */int) (short)-1)))))))) ? (((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_0]))))) : (arr_7 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))))))))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_3 + 1] [i_2]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_3 + 1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_3 + 1] [i_2])))) : ((~(((/* implicit */int) arr_5 [i_2] [i_3 - 1] [i_2])))))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((long long int) (~((~(((/* implicit */int) arr_4 [i_3]))))))))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)99)))) : ((+(arr_3 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1])) ? (arr_7 [i_3 + 1] [i_3 - 1]) : (arr_7 [i_3 - 1] [i_3 - 1]))) : (((long long int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)32765)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_9 [i_0] [i_3]))))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) : (((long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */long long int) min((max((((/* implicit */int) arr_4 [i_0])), (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1]))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)70))));
}

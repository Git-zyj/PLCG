/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210670
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_3 + 1] [4ULL] [16]) > (arr_10 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_3 - 2] [i_4] [i_4])));
                                var_21 = ((/* implicit */unsigned short) arr_3 [2]);
                                arr_12 [i_4] [i_0] [i_0] [1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2]))) : (4227858432U))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                            {
                                var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [0ULL] [1U] [i_0] [(unsigned short)8] [i_5] [i_3 - 1]) % (arr_10 [i_5] [i_1 + 1] [i_2] [i_1 - 1] [(unsigned char)4] [i_3 + 1] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-127)) + (((/* implicit */int) arr_11 [i_0 - 1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_5 [(unsigned char)11] [i_2] [i_0]))))) : (((((arr_2 [i_2] [i_3]) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) - (83)))))))) : (((unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) / (((/* implicit */int) var_10)))))));
                                var_23 ^= ((/* implicit */short) (((~(arr_8 [i_5] [i_3 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))));
                            }
                            for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                            {
                                arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_2]);
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_7 [8] [17U] [i_1] [i_3] [i_6] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_2] [i_3])))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))))));
                                var_25 = ((/* implicit */signed char) (short)-14431);
                            }
                            arr_19 [6ULL] [i_2] [(signed char)20] [(signed char)20] [i_1 + 1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)192), (((/* implicit */unsigned char) (signed char)-108))))) - (arr_17 [i_0] [i_0] [(signed char)3] [i_2] [i_3])));
                            var_26 = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((signed char) arr_13 [i_0] [i_0] [i_1] [i_2] [i_3 - 2]))), (max((((/* implicit */int) (signed char)126)), (var_14))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)34194)), (var_12)))) ? (((/* implicit */int) (signed char)-7)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
                            var_27 = ((/* implicit */unsigned char) arr_14 [i_3 - 2] [21U] [i_2] [i_3] [i_0]);
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6573)) % (((/* implicit */int) (unsigned char)66)))))));
            }
        } 
    } 
    var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_9)))))) : (((unsigned int) 14128709801873744948ULL)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}

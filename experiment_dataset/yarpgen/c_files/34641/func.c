/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34641
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (signed char)-93))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */short) ((((((/* implicit */int) (short)-29357)) + (2147483647))) << (((1462676879U) - (1462676879U)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 4] [i_0 + 3]))) : (1462676888U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_9)))) == (((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3] [i_2])))))) : ((+(((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0 + 1] [i_1] [i_2]) : (arr_6 [i_0] [4U])))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_0] [(unsigned char)3]) : (arr_4 [i_0 + 3] [(_Bool)0] [i_0 + 3]))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0 - 3])))))));
                                arr_15 [i_0] [i_0] [(unsigned short)8] [i_0] [i_3] [i_0] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5222983284884397704LL)) ? (((((/* implicit */int) arr_2 [9ULL] [(signed char)4] [i_4])) | (((/* implicit */int) arr_2 [i_1] [i_2] [i_4])))) : ((~(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (+(10185174120430402367ULL)))) ? ((+(((/* implicit */int) (short)-5235)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (var_3)))))) : (((/* implicit */int) arr_5 [i_0] [i_1 - 4] [i_2 - 1]))));
                            }
                            arr_16 [i_0 + 3] [i_0 + 3] [i_2] [i_0 + 3] &= (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)45))))), (((var_8) ? (-5222983284884397698LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50917)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

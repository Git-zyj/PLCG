/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224177
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4)))) - (((/* implicit */int) ((unsigned short) var_8)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_0] [i_3 - 2])) ? (arr_8 [i_3] [i_2 - 2] [i_2 - 2] [i_3 + 2]) : (arr_8 [i_0] [i_2 + 1] [i_2] [i_3 + 1]))) : (((/* implicit */long long int) arr_1 [i_3]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            arr_17 [i_4] [i_4] [i_3 - 1] [i_2 - 2] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3 - 1] [i_2 - 1] [i_2])) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_11)) | (((/* implicit */int) max(((signed char)-14), (((/* implicit */signed char) (_Bool)1)))))))));
                            var_13 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)0))));
                        arr_21 [i_5] [i_2] [i_2 + 2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2 + 2] [i_2] [i_2 - 2] [i_2 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_14 |= ((((/* implicit */_Bool) 6780479847075056251ULL)) ? (((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))) : (min((var_9), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-21)) >= (((/* implicit */int) (_Bool)1))))))));
}

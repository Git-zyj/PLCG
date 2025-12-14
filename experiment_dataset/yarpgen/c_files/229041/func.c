/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229041
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        arr_3 [i_0 - 1] = ((/* implicit */signed char) var_15);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_16);
        arr_5 [i_0] |= ((/* implicit */unsigned int) arr_0 [i_0]);
        var_20 = arr_0 [i_0];
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_16 [i_1] [i_2] [i_3] [i_1] [i_4] = max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7168))) >= (25165824ULL))))) == (25165824ULL)))), (arr_13 [i_4] [12ULL] [i_2] [i_1]));
                            var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_6 [i_1 + 2] [(short)17])) | (((/* implicit */int) arr_6 [i_1 + 2] [i_1]))))));
                            var_22 = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1 + 4] [i_2]);
                            var_23 *= ((/* implicit */short) arr_11 [i_1] [(short)11] [i_4]);
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_14 [(signed char)11] [i_1 + 4] [i_1 + 4] [2]))))) & (((((/* implicit */_Bool) max((arr_9 [i_1 + 4]), (((/* implicit */short) arr_8 [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) : (arr_7 [i_1] [i_2]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_1] [i_1]))) : (arr_1 [i_1])))))));
                var_24 = var_1;
            }
        } 
    } 
}

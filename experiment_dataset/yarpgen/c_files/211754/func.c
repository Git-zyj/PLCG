/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211754
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) var_0)))))), ((~(((/* implicit */int) var_0)))))))));
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 = ((/* implicit */int) min((var_20), (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1]))) | (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (((arr_2 [(unsigned short)15] [i_1]) & (arr_2 [i_1 + 1] [i_0])))))));
                var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (arr_2 [i_0 + 1] [i_1 - 2]) : (((arr_3 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [1U]))))))));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_1 [i_1])))) != (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(_Bool)1]), (arr_0 [i_1]))))) & (((arr_2 [i_0] [i_1]) >> (((arr_3 [i_0]) - (643005424U))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_1]))))) != (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [19LL] [i_1]) : (arr_3 [i_0])))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_24 += ((/* implicit */int) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_2] [i_3 + 1] [i_3] [i_3 + 3] [i_4]))));
                                var_26 = arr_3 [i_4];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_17);
}

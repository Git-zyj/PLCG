/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224367
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
    var_17 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_3 - 1] [i_4 - 3])))) > (((arr_1 [i_3 - 2] [i_4 - 2]) - (arr_1 [i_3 - 2] [i_4 - 3]))))))));
                                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -4011284504045193375LL)) || (((/* implicit */_Bool) 4011284504045193374LL)))) && (((((/* implicit */_Bool) arr_5 [i_2 - 1])) && (((/* implicit */_Bool) arr_5 [i_2 + 2]))))));
                                arr_14 [i_4] = ((/* implicit */int) -4011284504045193374LL);
                                var_20 *= ((/* implicit */unsigned long long int) arr_5 [(_Bool)1]);
                                var_21 = ((/* implicit */signed char) ((((((arr_0 [i_4]) & (arr_4 [i_1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_3 - 2] [i_1] [(_Bool)1]))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (-(min((arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2 + 2]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(short)8] [i_0])), (arr_1 [i_0] [i_0]))))))));
                    var_23 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 3] [i_2])) ? (((/* implicit */int) ((arr_4 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_1] [i_2]) == (-1026603485)))))));
                }
                var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [(unsigned char)14] [(unsigned char)14] [i_1] [i_1]), (arr_9 [i_0] [(_Bool)0] [i_1] [i_1])))) ? (((long long int) -4011284504045193374LL)) : (((/* implicit */long long int) ((int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                var_25 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_0] [i_0])) % (arr_4 [i_0]))))), ((~(min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_11 [i_1] [(_Bool)1] [i_0] [(unsigned short)11])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4011284504045193362LL)) && (((/* implicit */_Bool) (short)-13462))))), (var_7)));
}

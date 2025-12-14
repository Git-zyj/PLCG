/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234226
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
    var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) var_13))) - (var_19))) - (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_4))))))) >= (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15516)) + (((/* implicit */int) var_16))))) - (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 |= ((/* implicit */signed char) ((((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)-18334)))) ^ (((((/* implicit */int) (signed char)10)) | (((/* implicit */int) (_Bool)0)))))) >> (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_1] [1])) << (((var_11) + (2023464014371687761LL))))) >= (((((/* implicit */int) (unsigned short)50021)) / (((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((((((((/* implicit */int) var_0)) + (2147483647))) << (((3546496181U) - (3546496181U))))) << (((((/* implicit */int) var_13)) & (((/* implicit */int) var_17)))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)15504)) > (((/* implicit */int) var_6))))) >= (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_2))))))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((((arr_8 [i_0 + 1] [(_Bool)1] [i_3] [(_Bool)1]) | (((/* implicit */int) arr_3 [i_1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))) ^ (((((((/* implicit */int) (unsigned short)50019)) & (((/* implicit */int) var_5)))) >> (((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_1 [(_Bool)1])) + (22873))))) - (51430))))))))));
                                var_24 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15506))) + (arr_5 [i_0]))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_1 [i_0 - 1])))))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64683)) + (((/* implicit */int) arr_0 [i_4]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_9 [(unsigned short)9] [1LL] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) 3546496181U)) > (var_1)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50029)) || (((/* implicit */_Bool) (unsigned short)15502))))))))) - (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (3546496181U)))) | (((((/* implicit */long long int) var_15)) & (-1LL)))))));
}

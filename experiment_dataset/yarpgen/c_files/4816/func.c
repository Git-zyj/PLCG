/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4816
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_9)))));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_2] = ((/* implicit */unsigned short) min(((~(((((/* implicit */int) arr_6 [i_0 + 1] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])))))), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [(signed char)9])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_4] [i_3])))))))));
                                arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] = max((((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))), (var_0));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0 + 1] [i_0 + 1])))) : (var_3)));
                arr_14 [i_0] = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (var_18)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_17 [i_0] [i_1] [i_0] [i_5] = min((min((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0 + 3] [8] [i_0])), ((unsigned char)172))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 4294967271U))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (signed char)127)))))))));
                    arr_18 [i_0] [i_1] [(signed char)0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])))) / ((+(((/* implicit */int) var_11))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((((/* implicit */int) (unsigned char)40)) / (arr_5 [i_0]))) >= (((/* implicit */int) (unsigned short)4095)))))));
                    var_22 *= max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0] [i_5] [(unsigned char)0] [i_0] [i_0 - 1]))))), (((long long int) 14727780971514564811ULL)));
                }
            }
        } 
    } 
    var_23 = max((((((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)8191)))) & (max((((/* implicit */int) (signed char)-121)), (var_12))))), (((/* implicit */int) min((((/* implicit */short) var_8)), (min((((/* implicit */short) var_16)), (var_13)))))));
}

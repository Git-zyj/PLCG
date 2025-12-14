/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249669
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
    var_18 *= var_15;
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-57)) || (((/* implicit */_Bool) 268435455ULL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] &= ((/* implicit */unsigned int) ((long long int) ((18446744073441116160ULL) | (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2 - 1]))));
                                var_21 = ((/* implicit */unsigned long long int) ((_Bool) (short)-24927));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    var_22 = (!(((/* implicit */_Bool) min((arr_7 [i_0 + 2]), (arr_2 [i_2] [i_2] [i_0])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
                    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) 18446744073441116160ULL)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [8LL])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_0))))) % (((2386181220U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) min(((unsigned short)26445), ((unsigned short)26100)))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 2] [i_0 + 2])) | (((/* implicit */int) (unsigned short)61594))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) (unsigned short)39088))))) : (max((var_17), (((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 2]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    arr_23 [i_0] = ((/* implicit */signed char) ((arr_20 [i_0 + 2] [i_0] [i_6 + 1]) - (arr_20 [i_0 + 1] [i_0] [i_0])));
                    arr_24 [i_0 - 1] [i_0 - 1] [i_6 - 1] [(_Bool)1] &= ((/* implicit */unsigned short) var_13);
                }
                var_25 &= (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53519)) / (((/* implicit */int) (short)24937))))), ((+(13992251982733919593ULL))))));
            }
        } 
    } 
}

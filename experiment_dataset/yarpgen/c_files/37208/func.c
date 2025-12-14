/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37208
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min((min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)41)))), (((/* implicit */unsigned char) ((((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_9))))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])), (arr_4 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_0 + 1]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_3] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_13 [i_1] [i_3])), (arr_12 [i_0] [i_3] [i_3] [i_4]))) << (((/* implicit */int) (_Bool)1))));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) (-((~(((/* implicit */int) (short)-13953)))))));
                                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [i_0 - 2] [i_0])))) && (((/* implicit */_Bool) ((unsigned long long int) 0)))));
                                arr_17 [i_3] [i_3] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */signed char) min((((3134378549947081806ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) (unsigned short)0))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 15; i_6 += 3) 
        {
            {
                var_19 += ((/* implicit */long long int) ((int) (-(((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((unsigned int) arr_21 [i_5] [i_6]))))));
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */short) (unsigned short)11);
            }
        } 
    } 
}

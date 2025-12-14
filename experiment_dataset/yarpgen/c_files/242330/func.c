/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242330
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
    var_17 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_9))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) arr_11 [i_0 - 1] [i_1] [i_3] [i_4]);
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((min((max((var_13), (((/* implicit */unsigned int) (signed char)-125)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-121)), (arr_8 [i_3] [i_3] [i_2] [(signed char)6] [(unsigned short)3])))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (arr_1 [i_0 - 1] [i_1 - 1]))) <= (((((/* implicit */_Bool) (signed char)-125)) ? (3626828533U) : (3626828527U))))))))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned short) (-((~(1745920321U)))))))));
                                var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-123)))) ? ((~(arr_5 [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 1] [i_4 - 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */short) (!(((((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_2] [i_0])) ? (13805818403179220040ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] [i_5])))) != (((/* implicit */unsigned long long int) min((var_11), (arr_3 [i_0] [i_0] [i_0]))))))));
                                arr_16 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [(unsigned short)2] [i_6] = ((/* implicit */signed char) arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_0 - 1] [i_2]);
                                var_23 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_1 + 3] [i_0 - 2] [i_0 - 2]))))), (((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_5])) ? (1264252468583464787LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))))) : (((/* implicit */long long int) -562805437))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_1))));
}

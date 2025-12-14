/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198514
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
    var_10 -= ((/* implicit */int) (unsigned short)16368);
    var_11 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)16368)), (var_4)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 7; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (arr_4 [i_4])))) ? ((-(arr_8 [i_4] [i_1] [(unsigned short)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)49168), (((/* implicit */unsigned short) var_0))))))))) / ((-(((2222038765011888910ULL) + (((/* implicit */unsigned long long int) -501450618))))))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]), (arr_11 [i_0 - 1] [i_2 + 1] [i_3 - 1] [i_3 + 3] [i_4 - 1])))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) * (3077103823U))) + (max((3077103835U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)16379)))))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [3ULL])) || (((/* implicit */_Bool) (short)32764))))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [0ULL] [i_0 - 1]))))));
                                var_15 |= ((/* implicit */unsigned short) (unsigned char)182);
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) var_5)) : (1217863455U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1689843582)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */long long int) 3077103827U)) : (var_4))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [8])) || (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)250)), (arr_12 [i_0] [(signed char)0] [i_2])))))))));
                    var_17 += ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) ^ (min((1514481540), (707426795))))), (min((arr_7 [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                }
            } 
        } 
    } 
}

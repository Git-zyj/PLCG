/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230168
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) max(((+(var_2))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15220)))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) + (arr_11 [i_3] [i_3] [i_3] [i_3] [i_1 - 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)1))))) : (((((/* implicit */_Bool) var_10)) ? (arr_13 [i_1 - 2] [i_2 + 1] [i_2 + 1]) : (var_2)))));
                            }
                        } 
                    } 
                    arr_14 [9] [(unsigned short)17] [(unsigned short)17] [9] = ((/* implicit */long long int) min(((signed char)-1), ((signed char)30)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) (signed char)26);
                                var_21 = ((/* implicit */int) max((((/* implicit */long long int) min(((-(var_17))), (((int) (signed char)-12))))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_6]))) - (var_2))))));
                                var_22 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1))));
                                arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_17 [17ULL] [i_1] [i_2] [i_5] [i_5] [17ULL]))))), (((var_11) + (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [2] [13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                    var_23 = ((/* implicit */unsigned char) 1082328257215876011LL);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_15);
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32768)) * (((/* implicit */int) (signed char)3))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248559
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (unsigned char)40);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) min((arr_5 [9ULL] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) var_7))))) : (arr_6 [i_0] [i_2] [i_4]))));
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((max((((((/* implicit */unsigned long long int) -5831246247071971816LL)) * (arr_2 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((arr_0 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [i_3] [i_1])) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (unsigned char)40))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (17160220615104103658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (unsigned short)44129);
}

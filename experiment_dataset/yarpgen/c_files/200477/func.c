/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200477
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
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)-115))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (arr_6 [i_2 - 3] [i_1 - 1] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)115)) % (((/* implicit */int) (unsigned char)23))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0] [i_1]))) : (arr_9 [i_0] [i_1 + 1] [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1 + 1]))));
                                var_16 = ((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

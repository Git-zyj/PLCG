/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204346
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) (unsigned short)30973)) < (((/* implicit */int) (unsigned short)34581)))) ? (((arr_3 [(unsigned short)10] [(unsigned short)10]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_2 [10U] [i_1]);
                                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) (+(arr_0 [(short)8])))) ? (arr_0 [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [(unsigned char)4] [i_2] [i_3] [i_4])))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (max((((/* implicit */unsigned int) var_7)), (var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_0))));
}

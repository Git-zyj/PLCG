/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209158
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((arr_2 [i_1]), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_4 [i_0]))))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) var_11);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1 - 3] [i_3 - 1] [i_4]))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1] [i_4]))))))));
                                arr_14 [(unsigned short)9] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) (+(arr_11 [i_1 - 3] [i_3 - 2] [i_3 - 3] [i_3])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_13))))) ? (var_7) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (var_7)))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : ((-2147483647 - 1))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (var_7)))))));
}

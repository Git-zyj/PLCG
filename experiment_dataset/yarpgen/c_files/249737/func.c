/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249737
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
    var_20 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) / (arr_4 [i_0] [i_1]))) << (((/* implicit */int) (_Bool)0))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [3U] [i_1])) > (((/* implicit */int) (signed char)-1)))))) : (max((12530971098192863208ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) * (var_4))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) % (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)48056))))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_4] [i_4] |= ((/* implicit */int) (signed char)127);
                                arr_15 [(unsigned char)4] [i_2] = ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

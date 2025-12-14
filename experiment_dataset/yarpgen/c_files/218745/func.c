/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218745
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]))) ? ((+(((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) : (((/* implicit */int) min(((short)5455), (((/* implicit */short) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 3]))))))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)149)) ? (((((/* implicit */int) arr_10 [i_1 - 1] [i_2] [i_3])) & (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_1 [i_0])))))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((unsigned int) max((arr_7 [(signed char)2] [i_0 - 1] [i_1] [i_0]), (arr_7 [i_0] [i_0 - 1] [i_1] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5456)) ? (min(((-(14200768914179630793ULL))), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) var_4))));
    var_20 = ((/* implicit */long long int) -1051546988);
}

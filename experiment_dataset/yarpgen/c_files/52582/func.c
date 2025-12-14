/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52582
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
    var_11 = ((/* implicit */signed char) ((unsigned char) var_1));
    var_12 += ((/* implicit */unsigned long long int) ((int) ((int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_5 [(signed char)9])), (arr_6 [i_0])));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (unsigned short)0))));
                    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_6 [i_0]))))));
                    var_17 -= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((int) arr_8 [i_0] [i_0] [i_2]));
                                var_19 = ((/* implicit */signed char) (short)-13288);
                            }
                        } 
                    } 
                }
                var_20 *= ((/* implicit */unsigned int) (-(-1)));
            }
        } 
    } 
}

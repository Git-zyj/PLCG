/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220965
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
    var_15 = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_11)));
    var_16 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_3 + 1])) : (1792673752))), (((/* implicit */int) min((arr_5 [i_3 + 1]), (arr_5 [i_3 + 1]))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) ((((unsigned long long int) (_Bool)1)) > (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (short)3106)), (360664757))))))));
                arr_13 [i_1] = ((((/* implicit */_Bool) max((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2])))) ? ((~(((/* implicit */int) var_5)))) : (((int) (signed char)-9)));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_14);
}

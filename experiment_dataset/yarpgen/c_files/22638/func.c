/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22638
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_4 [i_0])))) ? (min((((((/* implicit */unsigned int) arr_1 [i_1])) / (var_7))), (min((4294967295U), (((/* implicit */unsigned int) (_Bool)0)))))) : ((~(0U))))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((((((/* implicit */int) var_11)) / (((/* implicit */int) var_6)))) < (((/* implicit */int) ((1306117560874715897LL) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_0 [i_1]))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(871385906))) * (((/* implicit */int) (signed char)-1))))) && (max((((383434927U) <= (((/* implicit */unsigned int) -1723386466)))), (((0U) == (((/* implicit */unsigned int) arr_1 [i_3]))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned int) arr_0 [(short)7])), (var_1)));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) / (arr_4 [i_0]))) : ((-(((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [(_Bool)1]), (((/* implicit */unsigned char) var_0))))))) ? (max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) ((unsigned char) var_2))))) : (((((/* implicit */int) arr_8 [i_3])) << (((1586036061) - (1586036045)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned short) 2147483647));
}

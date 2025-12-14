/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223494
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
    var_12 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_0 [i_0]) > (max((arr_6 [i_2] [7ULL] [7LL] [i_0]), (arr_2 [i_0] [i_0])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [9ULL])), (9709048505719194083ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))) : (((unsigned long long int) -262144))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) 12082630971719006848ULL))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(-1)))) || (((/* implicit */_Bool) arr_9 [i_3] [i_3 - 4] [i_3 + 1]))))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)250)), (262143)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) : (((((/* implicit */_Bool) arr_14 [i_3 + 4] [i_3 + 4] [i_3] [i_4] [i_3 - 2])) ? (var_7) : (((/* implicit */long long int) -133684563))))));
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 3] [i_3] [13ULL])) ? (((/* implicit */int) arr_10 [i_0] [i_3 - 4] [i_3 - 1] [i_3 - 3])) : (((/* implicit */int) var_6))))), (max((3939997288313995481LL), (((/* implicit */long long int) 3))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_13 [i_0] [i_1] [i_2] [i_2]))), (max((((/* implicit */int) arr_7 [13ULL] [i_1] [i_2])), (-114099781)))));
                }
            } 
        } 
    } 
    var_19 = (unsigned char)251;
}

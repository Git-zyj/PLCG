/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22659
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
    var_16 *= ((/* implicit */short) (~(((/* implicit */int) var_9))));
    var_17 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_13)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))))) > (((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)0)))) | (var_13))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)17] = ((/* implicit */long long int) (~(max((10577671231896366504ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1] [(_Bool)1]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_2 + 1] [i_1 - 1] [i_0]) / (arr_12 [i_1] [i_3] [i_4 + 2]))))));
                                arr_14 [i_2 - 1] [i_1 - 1] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) (~(((arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 2]) << (((arr_12 [i_4 + 2] [i_4 - 1] [i_4 - 1]) - (2021036839)))))));
                                arr_15 [i_1] [13LL] [i_4] = ((/* implicit */unsigned int) (+(max((var_7), (((/* implicit */long long int) arr_10 [i_0] [i_1 - 1] [i_4 + 1] [14ULL]))))));
                                arr_16 [i_0] [i_0] [i_1] [15LL] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 1944704758U)) / (2761929741209468223LL))), (((/* implicit */long long int) var_2))))) == (max((max((((/* implicit */unsigned long long int) arr_12 [1LL] [i_2] [i_2])), (var_11))), (((((/* implicit */unsigned long long int) var_10)) + (var_11)))))));
                                var_18 = ((/* implicit */_Bool) ((134217727ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18389)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1] [i_1 - 1])) ? (18445618173802708992ULL) : (((/* implicit */unsigned long long int) 261120U))))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) * (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (((+(var_14))) / (max((var_14), (arr_2 [i_0] [15ULL] [i_0]))))))))));
                var_21 = ((/* implicit */int) ((_Bool) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [i_1])))));
            }
        } 
    } 
}

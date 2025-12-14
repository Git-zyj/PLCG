/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32247
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
    var_11 = ((/* implicit */_Bool) var_4);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (signed char)107))));
    var_13 = ((/* implicit */unsigned short) (+(var_1)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_14 -= ((/* implicit */long long int) (~(((unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_4)))))));
                        arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((_Bool) min((min((((/* implicit */unsigned long long int) (signed char)73)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((arr_1 [i_1]), (var_4)))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 2] [i_1 + 1] [i_3] [i_2] [i_3])) < (((var_1) >> (((((/* implicit */int) (unsigned char)137)) - (113))))))))) & (var_3))))));
                        arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */int) ((arr_0 [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_1 - 2] [i_3])))));
                    }
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] = (-((-((-(((/* implicit */int) var_2)))))));
                        arr_16 [i_1] [2U] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) + (((/* implicit */int) var_5))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1] [i_4 + 3]))) + (-6491057719322116611LL)))))), (((arr_4 [i_1]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9199302620136293714LL))))))))));
                        var_16 = ((unsigned int) var_9);
                        var_17 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) ((unsigned short) var_5))) >> (((((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1 + 1])))) - (189))))));
                    }
                    var_18 = ((/* implicit */signed char) max((((((((arr_0 [i_1 - 2]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (14346))))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_2 - 1]))))), (9223372036854775807LL)));
                }
                var_19 = ((/* implicit */unsigned short) arr_4 [i_1]);
                arr_17 [i_1] [i_1] = ((((/* implicit */_Bool) 7047352824173741709LL)) ? ((-(min((var_9), (((/* implicit */long long int) arr_6 [i_0 + 2] [(_Bool)1] [i_0 - 2] [i_1 - 2])))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 1]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
}

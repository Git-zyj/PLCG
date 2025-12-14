/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233685
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
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5117182818029875294ULL)) ? (9223372036854775807LL) : (5836344797800717259LL))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) ? (-5836344797800717259LL) : (5836344797800717258LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
                            var_17 ^= ((/* implicit */short) ((((-5836344797800717260LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)96)) - (96)))));
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */signed char) (_Bool)0);
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */short) arr_1 [i_1] [i_4]);
                        }
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -5836344797800717258LL)))) ? (-5836344797800717259LL) : ((+(5836344797800717257LL)))))) ? (((/* implicit */long long int) 1244150602U)) : ((+(arr_3 [i_0] [i_0])))));
                            var_18 = ((/* implicit */unsigned long long int) 3050816695U);
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_25 [i_6] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+((~(((((/* implicit */int) var_11)) >> (((-5836344797800717257LL) + (5836344797800717285LL)))))))));
                        arr_26 [i_0] [i_1] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (5836344797800717257LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) 527002698U)) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5836344797800717245LL)) ? (arr_3 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((3873606096U) << (((var_12) - (4070582269U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_6])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (2704120114820018932ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_8))))))));
                    }
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 5836344797800717256LL))) ? (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (3622630060481478100LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (min((((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_4 [i_0] [i_1] [i_1]))))))));
                    arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
                }
            } 
        } 
    } 
}

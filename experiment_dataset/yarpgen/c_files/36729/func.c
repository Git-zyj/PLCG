/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36729
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (var_13)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((arr_1 [i_0] [i_1]) + (2147483647))) << (0ULL)));
                                arr_12 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) && (((arr_2 [i_2]) != (arr_2 [i_3])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)0))))))) <= (((unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-8)))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (3824424367U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1 - 1] [i_5 + 3]))))) ? ((+(((((/* implicit */_Bool) arr_2 [i_1])) ? (2630129701624662470ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_5 + 1] [i_5] [i_5 - 2]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)3460)), (-748667886815988875LL))))));
                            }
                            var_22 = ((/* implicit */short) ((((var_0) / (arr_18 [i_0] [(unsigned short)9] [i_0] [5ULL] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(var_1))) / (max((((/* implicit */unsigned long long int) var_2)), ((+(var_1)))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227558
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_5 [i_0]);
                var_12 = ((/* implicit */unsigned short) 3817206431U);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7890914221707200151LL))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_14 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((min((((/* implicit */unsigned long long int) arr_8 [i_2])), (7971703520086845212ULL))) > (((/* implicit */unsigned long long int) arr_11 [i_4])))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_6)) ? (2631794973U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_3] [(signed char)18] [i_2] [i_6] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (arr_18 [i_2] [i_2] [(signed char)10] [i_2] [i_2] [(signed char)21] [(signed char)21]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (max((arr_17 [i_6] [i_6] [i_6 + 2] [i_6 - 2] [1ULL]), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_5])))));
                                var_15 += ((/* implicit */_Bool) arr_8 [(signed char)8]);
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (~((-(((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_4] [17ULL] [i_2]))) : (arr_17 [(_Bool)1] [i_4] [i_4] [(unsigned char)5] [i_2]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

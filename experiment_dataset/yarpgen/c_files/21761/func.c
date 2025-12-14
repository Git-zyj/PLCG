/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21761
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [(signed char)20] [i_1] [i_2] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_7), (arr_7 [i_1 - 1])))) ? ((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2866060554U))))) : (((/* implicit */unsigned int) min((arr_4 [i_1 + 1] [i_1 + 2]), (((/* implicit */int) (unsigned char)8)))))));
                                var_13 = ((/* implicit */long long int) arr_9 [i_1] [i_1 + 1] [i_1]);
                            }
                        } 
                    } 
                } 
                var_14 |= ((/* implicit */unsigned int) (unsigned short)8192);
                arr_14 [i_1] = ((/* implicit */unsigned short) max((min((((unsigned int) (unsigned char)1)), (((/* implicit */unsigned int) ((int) arr_2 [i_0]))))), (((/* implicit */unsigned int) ((var_2) ? (2126249507) : (((/* implicit */int) max((arr_5 [i_1 + 2]), (((/* implicit */unsigned short) var_3))))))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) ((int) var_6))) ? ((((_Bool)1) ? (((/* implicit */long long int) var_0)) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (var_0))))))) : (((long long int) min((((/* implicit */int) var_3)), (-1090100266))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) var_4)))))) - (((((_Bool) var_3)) ? (((-1863677185100881386LL) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (var_11)))))));
}

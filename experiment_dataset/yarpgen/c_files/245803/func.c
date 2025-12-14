/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245803
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-29116)) + (2147483647))) << (((813190633538983707ULL) - (813190633538983707ULL))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 1691878239113946127ULL)))))) <= (((((/* implicit */_Bool) (~(arr_1 [9ULL] [i_1])))) ? (max((((/* implicit */unsigned long long int) -346439268900804403LL)), (arr_0 [i_0]))) : (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (_Bool)0))))) ^ (((((/* implicit */unsigned long long int) arr_2 [i_1])) ^ (max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_0 + 2] [i_1])))))));
                var_22 -= ((/* implicit */int) (-(((arr_0 [(_Bool)1]) + (arr_1 [i_0 + 2] [i_0 + 2])))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */short) (_Bool)0);
                                var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                                arr_12 [i_0] [i_1] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [9ULL])) : (var_12)))) ? ((~(arr_3 [i_4] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (var_4)))));
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)122))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

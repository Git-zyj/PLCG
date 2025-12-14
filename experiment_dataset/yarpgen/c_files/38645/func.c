/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38645
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((var_3) ? (var_17) : (((/* implicit */int) (unsigned short)7)))))) ? (var_5) : (((unsigned int) min((1152358554653425664LL), (((/* implicit */long long int) (unsigned char)0)))))));
    var_20 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (1152358554653425664LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((var_3) ? (var_12) : (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2])))) : (((/* implicit */long long int) max((-1), (-1))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) max(((((~(var_10))) << (((((/* implicit */int) (unsigned short)65515)) - (65509))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (signed char)32)))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                                arr_13 [i_0] [i_0] [9LL] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (+(18)))))))));
                                arr_14 [i_2] [i_3 + 2] [i_2] [i_1] [i_1] [(unsigned char)7] [i_2] = ((/* implicit */_Bool) ((-1LL) ^ (((/* implicit */long long int) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -14)) + (0U)))) ? ((+(arr_1 [i_0]))) : (((var_8) ? (((/* implicit */int) arr_4 [i_0] [i_3 + 1])) : (((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 25))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_15))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */int) arr_2 [(_Bool)1])) + (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) ((signed char) ((_Bool) var_7))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_2] = ((/* implicit */unsigned short) var_2);
                                var_25 = ((/* implicit */long long int) var_18);
                                arr_22 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(((unsigned int) (~(262143ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_10)))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) 536608768)) ^ (0U)))))))) : (var_11)));
}

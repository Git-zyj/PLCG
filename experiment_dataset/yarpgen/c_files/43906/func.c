/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43906
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((4294967295ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned int) var_10);
                                arr_15 [i_2 + 2] [i_3] [5] [5] [i_2 - 1] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_0] [(unsigned short)4] [i_2] [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_0)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                                var_20 ^= ((/* implicit */long long int) ((arr_16 [i_6] [6LL] [i_6 + 2] [14LL]) > (((/* implicit */long long int) (+(((/* implicit */int) (signed char)3)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1])) ? (((/* implicit */long long int) var_2)) : (arr_9 [i_2] [i_2]))) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) * (var_2)))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((var_8) / (((/* implicit */unsigned long long int) var_14))))))) ? (((((/* implicit */_Bool) 3021597670U)) ? (((/* implicit */long long int) -309191566)) : (-7421952840595481092LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}

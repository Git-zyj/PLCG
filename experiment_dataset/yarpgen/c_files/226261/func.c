/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226261
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
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */long long int) (unsigned char)178);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((unsigned long long int) arr_8 [i_0] [i_3 - 2] [i_4 - 3] [i_4])) + (((((/* implicit */_Bool) -37220305)) ? (var_3) : (((/* implicit */unsigned long long int) min((-363694750523637294LL), (((/* implicit */long long int) 37220305)))))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -37220296))) ? (min((-2177926487869530177LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_11 [i_0] [(unsigned short)9] [i_0] [i_3] [(unsigned short)9] [i_3] [i_1]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_10 [i_2] [i_2])))) : (0ULL)));
                                var_14 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((var_1) + (1834885458))) - (13)))))) & (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                                var_15 = ((/* implicit */short) ((int) (unsigned short)65535));
                                var_16 = ((/* implicit */int) max((var_16), ((-(((/* implicit */int) ((_Bool) -1853700020)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13168)) ? (1853700020) : (((/* implicit */int) (unsigned short)13808))))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 2] [i_2]))) : (arr_3 [i_2 + 1] [i_1] [i_0])));
                    var_18 |= ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((37220305) ^ (((/* implicit */int) arr_2 [i_0] [i_0])))) : (37220300))) >= (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_8)) ? (3243803246U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3350986063U)) ? (var_1) : (((/* implicit */int) (_Bool)0))))) != (var_4))))));
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}

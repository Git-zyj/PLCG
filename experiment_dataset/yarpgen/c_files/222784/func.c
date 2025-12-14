/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222784
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_10 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((8935141660703064064ULL), (((/* implicit */unsigned long long int) 3310857100U))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_11 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0] [(signed char)6] [i_2])) ? (4195641711205573865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned short)4080)) : (((/* implicit */int) (unsigned char)193)))))));
                            arr_11 [i_3] [i_3] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)4080)), (min((var_7), (4251313840U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7476407840322903007LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (2251799780130816ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (1152921504606846976ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)8])))));
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0] [i_1] [i_2 + 3])), (max((arr_7 [i_0]), (((/* implicit */int) (unsigned char)0))))))) + (9511602413006487551ULL))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) 2251799780130829ULL);
                var_14 ^= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) 3079858211787068152LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (var_8))))) * (((/* implicit */unsigned long long int) (-(((3079858211787068152LL) + (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])))))))));
                arr_12 [i_0] [i_0] [19] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_1])), (14921125192616742615ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((-1775649327) < (var_0)))) : (((/* implicit */int) var_4))));
}

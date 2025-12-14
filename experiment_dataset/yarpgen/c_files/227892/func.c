/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227892
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) max((min(((+(arr_5 [i_0 - 1]))), (((/* implicit */unsigned int) arr_1 [i_0 + 3] [i_1 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3522782469U)) ? ((-(((/* implicit */int) (unsigned short)14885)))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1LL) : (((/* implicit */long long int) arr_9 [i_0] [i_0 + 2] [i_0 + 3] [i_1 + 1] [i_3 - 1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((530219497), (((/* implicit */int) (unsigned char)24))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_1])), (arr_10 [i_1])))) : (((/* implicit */int) var_1))))) : (max(((~(var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_2] [i_3])), (var_10))))))));
                            var_17 = ((/* implicit */unsigned short) (~(max((2789298340518565993LL), (((/* implicit */long long int) 603386076))))));
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6592102739178146154LL)) ? (max((((/* implicit */int) (unsigned short)60781)), (-530219494))) : (((((/* implicit */int) (unsigned char)95)) & (((/* implicit */int) var_15))))))) ? (((/* implicit */long long int) 1056964608)) : (max(((~(3504910004113240117LL))), (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) var_4))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((3673988053U), (((/* implicit */unsigned int) arr_7 [i_1] [i_1])))))))), ((signed char)100)));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_4) : (var_6)))) ? (((/* implicit */long long int) max((arr_5 [i_0]), (4064819698U)))) : (var_13)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (unsigned char)244);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -456652576)) ? (-2689235218335378823LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175)))));
}

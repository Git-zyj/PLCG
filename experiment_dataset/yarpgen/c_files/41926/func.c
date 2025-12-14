/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41926
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
    var_14 = ((/* implicit */int) (-(max((((/* implicit */long long int) var_5)), ((-(-8645531024171806652LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)56)) ? ((+(((/* implicit */int) (short)-23874)))) : ((+(11461652)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))) >= ((~(((/* implicit */int) (short)9853))))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) ((unsigned char) (unsigned char)253))) : (((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))))) > (((/* implicit */int) (signed char)-80)))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned int) 1146759520U));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) 11461635);
}

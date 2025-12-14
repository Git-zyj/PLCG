/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242206
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
    var_19 *= ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) -6083253132405884909LL));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41347))) | (((-729578307733997126LL) % (((/* implicit */long long int) 4157988932U)))))), (max((max((arr_0 [i_0 + 1]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) arr_4 [i_2] [i_4 + 1]))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24180)) >= (((/* implicit */int) (unsigned short)41348))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [(unsigned short)18] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)0)) || (((((/* implicit */_Bool) arr_4 [i_2] [i_3 + 1])) || (((/* implicit */_Bool) (unsigned short)31024)))))), ((!(((/* implicit */_Bool) ((2099012021) + (((/* implicit */int) (unsigned short)20740)))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_3 [i_4 + 1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55043))))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)46858)))))))) ? (max((arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_3]), (arr_9 [i_0] [i_0] [i_2] [i_4 + 1]))) : (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [i_4] [i_1] [i_4] [i_3])) ? (((/* implicit */int) (unsigned short)22753)) : (arr_8 [i_3 - 1] [i_4] [i_3 - 1] [i_1] [i_4] [i_4])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((max((-2099012022), (356952755))) | (((/* implicit */int) ((unsigned char) var_18)))));
                }
            } 
        } 
    } 
}

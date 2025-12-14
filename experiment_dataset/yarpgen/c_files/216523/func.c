/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216523
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (+((+((+(var_7)))))));
                    arr_10 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_0))))), ((+(2097151U)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_3] [i_3] [i_4] [i_3] [i_0] = max((((((/* implicit */_Bool) 10230721957767070552ULL)) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))) || ((!(((/* implicit */_Bool) var_0)))))));
                                var_14 = ((/* implicit */short) (+(((/* implicit */int) (!(((((/* implicit */_Bool) 4044241097U)) || (((/* implicit */_Bool) 4044241097U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_7)) : (min((((/* implicit */unsigned long long int) var_7)), (17028258516774257388ULL))))), (((0ULL) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_1))))))));
}

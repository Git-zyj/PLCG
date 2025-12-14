/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41073
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
    var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (9214364837600034816ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))), (max((15720795255810614620ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((min((arr_1 [i_0]), (((/* implicit */unsigned char) arr_10 [(unsigned short)7] [i_1] [i_2] [i_3])))), ((unsigned char)254)))) % (min((((/* implicit */int) (unsigned char)170)), ((+(((/* implicit */int) (unsigned char)198))))))));
                            arr_14 [i_0] [i_1] [i_3] [i_3] = min((min((((/* implicit */int) (!(((/* implicit */_Bool) 15720795255810614599ULL))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_1] [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)78))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_14 = max((((((/* implicit */_Bool) (short)-9242)) ? (((/* implicit */int) (unsigned char)170)) : (2147483627))), (((/* implicit */int) arr_1 [i_0])));
                            var_15 += ((unsigned char) ((((/* implicit */int) arr_7 [i_0])) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-9254)) : (((/* implicit */int) arr_11 [i_1]))))));
                            var_16 &= ((/* implicit */unsigned short) arr_12 [i_0] [i_0]);
                        }
                    } 
                } 
                var_17 |= ((/* implicit */short) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))) : (2725948817898936983ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 727705895U))))) : (((/* implicit */int) max(((unsigned short)59776), (((/* implicit */unsigned short) (unsigned char)246)))))))));
            }
        } 
    } 
}

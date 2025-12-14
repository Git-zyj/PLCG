/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238063
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
    var_18 = var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) (short)-30342);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)22503))) - (min((36027697507336192LL), (((/* implicit */long long int) 1U))))))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned short)63))) ? (2644513143U) : (((unsigned int) (unsigned char)253)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2644513143U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) : (arr_9 [i_0]))))))))));
                                var_21 = ((/* implicit */unsigned int) var_14);
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2644513159U)) ? (((((1650454153U) == (arr_5 [i_1] [i_1] [2U]))) ? (max((((/* implicit */long long int) var_15)), (var_10))) : (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (unsigned char)255))))))) : (((/* implicit */long long int) max((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

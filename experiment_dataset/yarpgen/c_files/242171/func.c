/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242171
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
    var_18 = ((/* implicit */unsigned char) ((var_2) >= (var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_0 + 4] [i_1 - 1])) : (((/* implicit */int) var_5)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) arr_2 [i_2 + 3])) : (((/* implicit */int) var_16)))) / (((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 4]))));
                                var_21 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                                arr_12 [i_4] [i_3] [i_0] [7ULL] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1729382256910270464LL))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_4])))), (((/* implicit */int) ((_Bool) arr_5 [i_1] [i_1 - 1] [i_1 - 1] [i_2 + 2])))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(max((8589803520LL), (8589803529LL)))))) <= (((((((/* implicit */_Bool) arr_0 [i_2])) ? (14133888208225446235ULL) : (17051378546461542312ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [(signed char)13]))))))))));
                                var_23 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 952092707)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1395365527248009303ULL) : (17051378546461542311ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_10);
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) <= (((unsigned long long int) 358127868U))))), (var_7))))));
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226651
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (short)13800);
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) -8921895629431806233LL);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 208762969U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) <= (((((/* implicit */_Bool) var_13)) ? (((8921895629431806233LL) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) var_4))))));
                            var_20 |= ((/* implicit */signed char) ((((long long int) ((int) (signed char)-55))) != (((/* implicit */long long int) 265161085U))));
                            arr_13 [i_0 + 2] [i_0 + 2] [i_2] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned int) ((long long int) var_5));
                arr_15 [i_0 + 2] = ((/* implicit */unsigned int) ((((8631490756642206989LL) / (((/* implicit */long long int) ((2202799839U) | (((/* implicit */unsigned int) -1622723826))))))) > (((/* implicit */long long int) 800636807U))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((long long int) (unsigned char)163)) / ((((_Bool)1) ? (-8921895629431806233LL) : (-8921895629431806233LL))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (_Bool)1);
    var_23 -= ((/* implicit */int) 8921895629431806245LL);
    var_24 = ((/* implicit */signed char) 2180426490U);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221628
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
    var_18 = ((/* implicit */long long int) (-(var_15)));
    var_19 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) >> (((min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (((2735329800628129008LL) + (((/* implicit */long long int) var_13)))))) - (56LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = (~(((/* implicit */int) ((((/* implicit */_Bool) 2351480705U)) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
                var_21 = ((/* implicit */unsigned int) min((((unsigned long long int) ((signed char) var_16))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_12 [i_4] = ((/* implicit */short) ((signed char) ((min((((/* implicit */unsigned long long int) arr_5 [i_2])), (12061349310895039843ULL))) & (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_2]))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((arr_9 [18ULL]), (arr_9 [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_23 &= ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-854140895)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6])) + (arr_5 [i_3])))) ? (min((var_9), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (2744541960U))))))));
                                var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)60)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((2147483619), (((/* implicit */int) (signed char)118))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_2])), (var_10))))), (((/* implicit */unsigned long long int) ((((int) var_4)) / (((arr_5 [i_2]) * (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

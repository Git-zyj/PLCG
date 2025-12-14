/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41155
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [6U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) var_3))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3267)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_0])) ? (((long long int) var_5)) : (((/* implicit */long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (short)16008)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)93)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1 + 4] [i_2] [i_1 + 4] [8LL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))))));
                                var_19 -= ((/* implicit */signed char) (+(max((arr_4 [i_1 + 4]), (((/* implicit */long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43115
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
    var_11 = ((/* implicit */unsigned char) 2047U);
    var_12 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)-115)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_5) + (var_0)))) >= (var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]));
                                var_13 = ((/* implicit */unsigned short) var_5);
                                var_14 = ((/* implicit */int) arr_15 [i_3] [i_3]);
                                arr_17 [i_0] [i_0] [i_0] [i_1] = (+(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1 + 2] [i_4 - 1] [i_4 - 1]))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) < (var_1)))) : ((~(((/* implicit */int) ((var_10) > (var_10))))))));
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(3686111792U))) == (((/* implicit */unsigned int) 1009140452))))))));
}

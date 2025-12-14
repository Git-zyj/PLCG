/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213745
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
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)38)))) : (var_4))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] = ((/* implicit */unsigned char) arr_3 [1] [i_0]);
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_1))));
                            var_14 = var_6;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (!((_Bool)1)));
                                arr_19 [i_1] [i_4] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)61567)) ? (((/* implicit */int) (_Bool)1)) : (1907771045))) / (((((/* implicit */_Bool) arr_3 [9LL] [i_5])) ? (((/* implicit */int) arr_16 [i_6] [i_5] [1LL] [i_0])) : (((/* implicit */int) arr_4 [3U] [i_1]))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) + (0ULL))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)77)) * (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) var_0)), (var_7)))))));
            }
        } 
    } 
}

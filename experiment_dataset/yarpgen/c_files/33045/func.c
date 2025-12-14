/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33045
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [i_2 + 2] [i_1]);
                                var_17 = min((((min((var_14), (((/* implicit */long long int) (signed char)-35)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (1560501686) : (1560501686)))))), (((/* implicit */long long int) ((signed char) 1560501697))));
                                var_18 = ((/* implicit */unsigned char) (unsigned short)4649);
                                arr_14 [i_0] [(short)1] [i_0] [i_3] [(short)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)7] [(unsigned short)7] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned long long int) arr_5 [i_0]))))) : (((((/* implicit */_Bool) ((int) arr_9 [i_0] [(short)4] [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [5] [(signed char)5] [i_3] [i_4]))))) : (arr_10 [i_2 + 2] [i_2 - 1] [i_2] [i_4] [(signed char)6])))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-2)) >= (((/* implicit */int) var_11))))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) var_8);
    var_21 = (unsigned short)4653;
    var_22 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)26437)) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) - (6700)))))));
}

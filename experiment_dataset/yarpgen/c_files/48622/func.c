/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48622
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
    var_18 = var_10;
    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) % ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), ((unsigned char)48))))));
                var_20 += ((/* implicit */unsigned long long int) (signed char)-115);
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1])), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 2] [i_2] [i_2 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_2] [i_2 + 2])))))));
                                var_21 = ((/* implicit */unsigned int) (_Bool)1);
                                var_22 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(-1007715571)))) ? (((((/* implicit */int) (unsigned char)196)) * (((/* implicit */int) arr_0 [i_4])))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0]))))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2 + 1] [i_0] [i_4] = var_6;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22175)))))) ? (0) : (((/* implicit */int) (_Bool)1)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213672
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
    var_16 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1]))))) ? (max((((/* implicit */int) arr_2 [(short)10])), (1000438403))) : (((/* implicit */int) ((unsigned char) ((-1000438403) * (((/* implicit */int) arr_3 [i_0])))))))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)42346)) - (-1000438388))) + (((/* implicit */int) (unsigned char)94))))) ? ((((-(((/* implicit */int) (unsigned char)4)))) + (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) var_4))))) - (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -2997868334028677747LL))) ? (max((arr_9 [(short)6] [(short)6] [i_2] [i_3] [(_Bool)0]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [12U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) 181388662U))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)12])) ? (((((/* implicit */_Bool) (short)256)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) : (max((((/* implicit */int) (unsigned short)42346)), (1000438362)))))) : (-4731626534287207370LL)));
                            arr_12 [(short)9] [i_3] [i_3] [i_0] = ((/* implicit */short) max((((((int) arr_10 [i_0] [i_1] [i_0] [(short)8])) / (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) arr_3 [13LL]))))))), (max((-1000438415), (((/* implicit */int) ((_Bool) arr_7 [i_1] [0LL] [i_3])))))));
                            arr_13 [i_3] [1U] = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) min((var_19), (arr_8 [(_Bool)1] [5LL] [(_Bool)1] [5LL] [i_1] [i_1])));
            }
        } 
    } 
}

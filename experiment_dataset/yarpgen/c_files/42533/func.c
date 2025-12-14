/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42533
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
    var_11 = ((/* implicit */long long int) min(((-(max((752934519), (-752934520))))), (-752934520)));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) (+(max((arr_6 [i_1]), (arr_6 [i_0])))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (((1128915703U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) arr_3 [i_2]);
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((short) (signed char)-66));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((signed char) arr_7 [i_1] [i_0])))));
                    var_17 = var_10;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_18 = ((/* implicit */long long int) ((((int) (unsigned char)184)) ^ ((-(((/* implicit */int) (signed char)65))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    var_20 = (+(((/* implicit */int) arr_9 [i_0])));
                    var_21 = ((752934520) > (-752934520));
                }
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) arr_4 [i_0] [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1]))))))) : ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_4)))))))))));
            }
        } 
    } 
}

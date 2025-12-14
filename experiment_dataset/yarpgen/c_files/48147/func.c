/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48147
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 4294967286U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */short) ((((((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)35027)))) - (((/* implicit */int) (unsigned char)102)))) + (2147483647))) << (((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 4])))))) - (1)))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_1] [i_0 + 4]);
                arr_9 [i_0] [i_1] = ((/* implicit */short) var_19);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((((long long int) arr_1 [i_0 + 2] [i_1 - 4])), (((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_4 [i_2]))))))));
                    arr_12 [i_0] [4U] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)35028)))) ? (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_6 [i_1 - 4])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1 - 4]) < (arr_6 [i_1 - 1])))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_16))));
}

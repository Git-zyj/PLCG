/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40837
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
    var_17 ^= ((/* implicit */_Bool) ((((var_2) - (((/* implicit */unsigned long long int) var_16)))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)26658)), (862956432U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (max((((/* implicit */unsigned long long int) var_4)), (11355771566900640457ULL)))))));
    var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(0)))) || (((/* implicit */_Bool) ((short) var_9))))))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_16))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-6243)) || (((/* implicit */_Bool) var_4)))), ((_Bool)1)))), (((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (6652287546042990788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((long long int) var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((unsigned short)47754), (((/* implicit */unsigned short) ((_Bool) arr_4 [i_0] [i_1] [i_2])))))), (var_1)));
                    var_21 = ((/* implicit */_Bool) ((min((var_3), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2 - 1] [i_2 + 2])))) ^ (((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_1] [i_2 + 1] [(_Bool)1]), (arr_7 [i_0] [i_0] [i_2 - 1] [i_2]))))));
                }
                arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))))), (arr_7 [i_1] [i_1] [(short)0] [i_0])));
                arr_10 [4] |= ((/* implicit */signed char) max((((/* implicit */int) ((arr_3 [i_1] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), ((-(((/* implicit */int) arr_6 [i_0] [(signed char)8] [i_0] [(signed char)7]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (var_4)));
}

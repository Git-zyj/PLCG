/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241675
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_16))) << (((/* implicit */int) min((var_0), ((_Bool)1))))))) ? (min((min((((/* implicit */long long int) var_11)), (var_12))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)4137)) : (((/* implicit */int) var_9)))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) var_14);
        arr_6 [i_1] = ((/* implicit */_Bool) var_18);
    }
    var_22 += var_12;
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 9; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_10 [i_2])))), ((-(((/* implicit */int) (short)0))))));
                arr_13 [i_2 - 4] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 10667650203611810329ULL)))) <= (((unsigned long long int) var_6))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_11 [2LL] [i_3] [i_3]))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((short) 4213646750849099665LL)))));
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) (~(((((var_7) + (9223372036854775807LL))) << (((/* implicit */int) var_9))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((var_16) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) + (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))));
}

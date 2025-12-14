/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47668
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_15))));
    var_18 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? ((+(var_5))) : (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)61201)))))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) (short)10694)), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)10694))))) * (((((/* implicit */long long int) arr_4 [i_1])) / (((((/* implicit */_Bool) (short)-10705)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) arr_4 [11U])) / (-7278253800887706164LL))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) (short)-10707))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) / (arr_1 [i_1])))));
        arr_6 [10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (short)-5197))));
        var_22 = ((/* implicit */int) (((+(arr_1 [i_1]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10707)) ? (((/* implicit */int) (unsigned short)57644)) : (((/* implicit */int) (unsigned short)43700)))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_7 [(short)10]);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-10714))) / (((((/* implicit */_Bool) (short)-10707)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61324))) : (-7278253800887706164LL)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((short)10694), ((short)10704)))), (max((arr_9 [i_2]), (((/* implicit */unsigned int) arr_10 [i_2]))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)88)) || (((/* implicit */_Bool) (unsigned char)141))))), (arr_8 [i_2])))));
    }
}

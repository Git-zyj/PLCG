/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21733
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
    var_17 += ((/* implicit */unsigned char) var_2);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_19 = arr_1 [i_0 - 3];
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_14);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */long long int) arr_4 [i_1]);
        var_21 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (signed char)122)), (arr_5 [i_1])))));
        var_22 = ((/* implicit */signed char) min((var_13), ((+(((/* implicit */int) (unsigned short)3156))))));
    }
    for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2 - 2])) / (((/* implicit */int) arr_8 [i_2] [i_2 - 3]))))) ? (((/* implicit */int) max((arr_8 [i_2] [i_2 + 1]), (arr_8 [i_2 - 3] [i_2 - 3])))) : (((/* implicit */int) arr_8 [(short)0] [i_2 - 3])))))));
        var_24 = ((/* implicit */long long int) arr_8 [i_2 - 3] [i_2 + 3]);
    }
    var_25 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (max((var_13), (((/* implicit */int) (unsigned short)13))))))), (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (unsigned char)224))))));
}

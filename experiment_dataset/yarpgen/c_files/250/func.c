/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/250
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned long long int) var_6)))) | (((((/* implicit */_Bool) (unsigned short)40257)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 2])) : (var_5))))))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)119)))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 4])) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 3]))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1408)) : (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned short) (-(arr_2 [i_0 - 2] [i_0 - 2])));
        arr_4 [(unsigned char)4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 3])) ? (((/* implicit */int) ((_Bool) (signed char)-9))) : (((/* implicit */int) (_Bool)1)))) : ((~(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)66))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((long long int) var_14)))));
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
}

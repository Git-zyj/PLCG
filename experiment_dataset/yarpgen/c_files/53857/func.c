/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53857
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) ^ (-521948647853483087LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) : (((var_13) << (((var_13) - (3586038552U))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_17 = ((/* implicit */unsigned int) var_10);
    var_18 = ((/* implicit */signed char) ((_Bool) var_6));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (var_3))))) : (arr_2 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) var_12);
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] = ((((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 + 2])) ? (arr_6 [i_1 + 3] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))) >= (arr_6 [i_1 - 3] [i_1 - 3]));
        var_20 = ((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1)))))) < (arr_6 [i_1] [i_1 + 3])))));
        arr_9 [i_1 - 2] [i_1] = ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
    }
}

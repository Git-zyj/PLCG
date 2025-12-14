/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231815
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned short)57240);
    var_11 -= var_7;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (max((arr_3 [i_0 - 2] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 + 1])))));
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))) * (((arr_3 [i_0] [i_0]) % (var_1)))))) ? ((~((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_2 [i_0 + 1])));
        arr_5 [i_0 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)60)), (4294967293U)));
    }
    for (int i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        arr_9 [i_1] = arr_6 [i_1];
        var_13 = (-(min((6U), (((/* implicit */unsigned int) (unsigned char)247)))));
        var_14 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_1])), (((((/* implicit */_Bool) 13107396819686360634ULL)) ? (((arr_8 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1]) == (((/* implicit */int) arr_6 [i_1]))))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1])))))));
    }
    var_16 = ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) var_2))))))));
}

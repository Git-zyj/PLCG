/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35181
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] |= ((/* implicit */short) max((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60979))))), (max((2147479552U), (((/* implicit */unsigned int) 7))))))));
        arr_5 [i_0] [i_0] |= ((/* implicit */int) 101863592605848697ULL);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((int) var_1)), ((+(((/* implicit */int) arr_0 [i_0])))))))));
        var_21 = (~(((((((/* implicit */_Bool) -8)) ? (var_13) : (((/* implicit */unsigned long long int) -1385033926)))) * (((/* implicit */unsigned long long int) 2147487744U)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)39089))));
        arr_10 [i_1] [18] = ((/* implicit */unsigned int) max((((min((8388592U), (((/* implicit */unsigned int) (unsigned short)65535)))) >= (arr_9 [i_1] [i_1]))), ((((~(var_6))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_8 [i_1])))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4557)) == (((/* implicit */int) (unsigned short)4556)))))));
        arr_15 [i_2] = ((/* implicit */unsigned short) var_9);
        var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) (unsigned short)17589)) : (((/* implicit */int) (unsigned short)60969))))) : (arr_13 [i_2])))));
    }
    var_25 = ((/* implicit */int) max((var_2), ((-(max((((/* implicit */unsigned int) (unsigned short)29123)), (2147487751U)))))));
}

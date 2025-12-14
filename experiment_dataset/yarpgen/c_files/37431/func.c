/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37431
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
    var_17 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13448)) % (((/* implicit */int) (short)8959))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_18 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((max((var_2), (((/* implicit */unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_5 [i_1] [i_1]))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8960)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)8953)))))))))) * (arr_4 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2]))))) * (((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)-8959))) > (((/* implicit */int) arr_0 [i_2] [i_2])))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_10))));
    }
    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))))))));
        arr_14 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8959)) ? (((/* implicit */int) (short)-8938)) : (((/* implicit */int) (short)-26142))))), (min((min((arr_4 [i_3]), (((/* implicit */unsigned int) arr_5 [i_3] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (short)-8962)))))))));
    }
    var_22 = ((/* implicit */_Bool) var_5);
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)26165)) / (((/* implicit */int) (short)26141)))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_15)) % (((/* implicit */int) (short)-26142))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8962))))));
}

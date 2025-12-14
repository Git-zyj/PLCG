/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236881
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
    var_12 = ((/* implicit */unsigned long long int) (((~(max((((/* implicit */int) (unsigned char)42)), (var_1))))) & (((/* implicit */int) var_10))));
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * ((-(var_4))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_5))) & (((((/* implicit */int) var_5)) / (((/* implicit */int) var_2)))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) & (((/* implicit */int) var_10)))) & (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-19570)))) <= (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((int) ((unsigned long long int) (short)-30232)));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0]) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1)))))))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0])) & (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) min(((-(arr_0 [i_0]))), (((/* implicit */int) ((short) arr_1 [i_0]))))))));
    }
    var_16 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_7)))) / (((((((/* implicit */int) var_10)) - (var_1))) & (((/* implicit */int) ((short) var_9)))))));
}

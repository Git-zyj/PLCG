/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247972
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(signed char)16]))))) ? ((~(((/* implicit */int) (signed char)46)))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) - (((/* implicit */int) (unsigned short)65535)))))))));
        var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((long long int) (signed char)46)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((((!(((/* implicit */_Bool) (short)27908)))) ? (((/* implicit */int) ((arr_1 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_4 [(short)12])))))));
        var_21 = ((/* implicit */short) var_5);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) 15302003964427822068ULL);
        var_22 = ((/* implicit */short) ((_Bool) arr_4 [(signed char)1]));
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned int) var_8))))) || (((/* implicit */_Bool) ((short) (signed char)-47))))) ? ((+(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)-71)))))) : (((/* implicit */int) (!((_Bool)1))))));
    }
    var_24 = ((/* implicit */_Bool) ((signed char) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) min((var_16), (var_2)))))));
    var_25 = ((/* implicit */unsigned short) var_4);
}

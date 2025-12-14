/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217453
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) (short)6228))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (short)32767)))))))) && (((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) var_11)))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (~(var_4)));
        var_18 -= ((/* implicit */unsigned char) 6661521044760090561ULL);
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((-(11785223028949461054ULL)))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) var_0))))))) : (((((/* implicit */int) var_1)) / (((((/* implicit */int) var_7)) << (((var_0) - (2545096372U)))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_2)))))))) + ((-(min((((/* implicit */unsigned int) var_5)), (var_9)))))));
}

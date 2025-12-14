/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41008
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((signed char) ((((/* implicit */_Bool) arr_1 [(unsigned char)5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) : (arr_1 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) (signed char)-108)) ? (17447561834816597372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) var_15)))));
            var_19 = ((/* implicit */short) (((+(4294967295U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13))))));
        }
    }
    var_20 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) max((var_12), (var_11)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) (+(var_15)))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        arr_7 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_5 [i_2]))))) ? (((unsigned int) 17136326787216443527ULL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (-459171070))))));
    }
}

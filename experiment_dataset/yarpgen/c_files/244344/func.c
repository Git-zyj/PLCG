/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244344
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [5U] = ((/* implicit */unsigned long long int) var_5);
        var_13 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)25963))))))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0]))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_15 ^= ((/* implicit */_Bool) (+(2913004884U)));
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_9 [i_0]))));
            var_17 ^= ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)201))) ? (arr_8 [i_0] [i_2]) : (var_1));
        }
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((long long int) 764195494)) : (((/* implicit */long long int) -764195488))));
    var_19 = 764195484;
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_4))));
    var_21 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) -764195494)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))))), (((/* implicit */unsigned long long int) var_3))));
}

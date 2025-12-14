/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31632
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
        var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(536870911U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [(unsigned char)14]))))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((_Bool) (+((+(((/* implicit */int) (signed char)-26)))))));
        var_16 = ((/* implicit */_Bool) (+((((~(536870914U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1])))))));
        var_17 = max((max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (arr_4 [i_1])))), ((-(arr_1 [i_1 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) >= (var_7)))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (+(536870909U))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((unsigned int) (unsigned char)64))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_11 [(signed char)19] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */signed char) (((+(536870911U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
    }
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+((+(var_7))))))));
    var_22 += ((/* implicit */_Bool) ((unsigned int) var_3));
    var_23 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
}

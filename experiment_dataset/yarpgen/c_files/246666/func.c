/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246666
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
    var_19 = ((/* implicit */short) max(((!(((/* implicit */_Bool) var_17)))), (var_6)));
    var_20 = ((/* implicit */_Bool) ((((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)252), (((/* implicit */unsigned char) (signed char)-12)))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (10182063025729773567ULL)))))));
        arr_2 [(signed char)0] [0] = ((/* implicit */unsigned short) (signed char)90);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_23 = ((/* implicit */_Bool) arr_3 [i_1]);
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_24 = ((/* implicit */_Bool) (signed char)90);
            var_25 = (!((!((_Bool)0))));
        }
        var_26 = ((/* implicit */signed char) arr_4 [i_1]);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_4 [i_1]))) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))));
    }
}

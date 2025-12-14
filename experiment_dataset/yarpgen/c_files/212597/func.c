/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212597
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned short) min((((int) 433021164)), (max((var_11), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_6)))))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) var_1)))))) | (var_16)));
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] = min(((+(1146207777U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) arr_4 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((-(var_14))) - (((/* implicit */int) var_4))))) ^ (((var_5) << (((/* implicit */int) arr_4 [(unsigned short)11]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (+(var_12)));
        var_22 = (+(((/* implicit */int) var_6)));
        var_23 += ((/* implicit */signed char) (~(var_5)));
        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_3 [i_2] [i_2]), (arr_3 [i_2] [i_2]))))));
    }
    var_25 = ((/* implicit */int) (signed char)109);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43975
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_5;
                arr_7 [i_0 - 3] [i_1] = ((arr_4 [i_0 + 1] [i_1]) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_1])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1])));
                arr_8 [i_0 - 3] [i_1] = ((/* implicit */short) min(((-((~(var_10))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_9))))))))));
                var_20 &= ((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)22246)))), ((~(arr_3 [i_0 - 3] [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */short) (~((~(892254338606087435ULL)))));
        arr_12 [i_2] = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))))));
        var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_14)))))))) & ((~((~(((/* implicit */int) (short)0)))))));
        var_22 += ((short) (!(((/* implicit */_Bool) (-(var_9))))));
        var_23 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48635))))) ? (min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (short)3703)) ? (28) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_9 [i_2])));
    }
}

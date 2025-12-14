/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217067
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
    var_13 += ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = (unsigned short)0;
                    var_14 = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_0]));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-50))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [10LL] [i_0])) < (((/* implicit */int) (signed char)11))))) : (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0]))))) || (((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    var_16 = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1])))) <= ((-(((/* implicit */int) arr_0 [(unsigned short)5] [(unsigned short)5]))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(arr_6 [i_0])));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */signed char) ((unsigned short) var_10));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_12), (((/* implicit */signed char) var_7))))), (var_6))))));
}

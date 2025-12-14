/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42117
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
    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) 1161840096));
    var_17 = ((/* implicit */int) max((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44120))) <= (var_10))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)33831), ((unsigned short)31704))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_7))) & (((/* implicit */long long int) ((unsigned int) (unsigned short)31704)))))));
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    var_19 |= ((/* implicit */unsigned char) var_11);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31705)) % (((/* implicit */int) (unsigned char)1)))))));
                }
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (935276455)))) ? (((/* implicit */int) arr_5 [i_0] [(unsigned char)19] [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_0] [(_Bool)1])), (arr_0 [i_0] [i_1]))))))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))) : (max((var_10), (((/* implicit */long long int) arr_1 [i_0 - 1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((var_13), ((-(((/* implicit */int) (unsigned short)10264)))))) : ((((_Bool)0) ? (1033652058) : (((/* implicit */int) (signed char)0))))));
}

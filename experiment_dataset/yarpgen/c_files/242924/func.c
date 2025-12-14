/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242924
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_12 [i_2 + 2] [(_Bool)1] [14] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)6))))) ? ((-((+(2147483647))))) : (((((/* implicit */int) (signed char)-92)) - (((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))))));
                        var_18 *= ((/* implicit */_Bool) arr_8 [i_0] [i_1] [(signed char)0]);
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_11 [i_0] [(short)2] [20]))));
                        var_20 = ((/* implicit */unsigned long long int) 2147483647);
                        arr_13 [i_1] [(short)10] [i_3] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned short)16] [i_2] [i_1] [i_0])) != (2147483621))))) != (arr_2 [i_2]))) ? (((((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
                    }
                    var_21 = ((/* implicit */signed char) 2147483647);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (2824352536702061752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_23 = ((/* implicit */unsigned short) (_Bool)1);
    var_24 = (signed char)48;
}

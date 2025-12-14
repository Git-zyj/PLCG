/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22700
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
    var_15 |= ((/* implicit */int) max((var_14), (((/* implicit */unsigned long long int) var_8))));
    var_16 = ((/* implicit */_Bool) ((unsigned char) (signed char)1));
    var_17 |= ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (short)27110)))))), (var_5)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_11);
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (unsigned short)6296);
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)-3646)) / (-881247284))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_0])))) ? (min((((/* implicit */int) arr_4 [(unsigned short)14])), (max((406120260), (((/* implicit */int) arr_0 [i_0])))))) : ((-((~(-881247284)))))));
                arr_10 [i_0] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -406120261)) ? (14218755602868097524ULL) : (((/* implicit */unsigned long long int) -1586223654))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (max((((/* implicit */unsigned int) (signed char)85)), (((unsigned int) 855215485U))))));
}

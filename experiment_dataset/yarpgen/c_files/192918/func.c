/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192918
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
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)66)) * (((/* implicit */int) (short)4092))))) % (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2])) ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 - 1] [i_1])))));
                arr_8 [i_0] = arr_2 [i_1];
                arr_9 [i_0] [18LL] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((614222803) / (((/* implicit */int) (short)24402))))), (2146959360LL))), (((/* implicit */long long int) (unsigned short)127))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_6);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_11)))) ? (var_12) : (((/* implicit */long long int) ((((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned char)104)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-62)), (var_15)))) : (((/* implicit */int) var_1))))))))));
}

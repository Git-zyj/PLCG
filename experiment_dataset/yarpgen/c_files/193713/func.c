/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193713
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)75))));
    var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [8U] [(unsigned char)10]);
                    var_18 = ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41504))) : (arr_5 [i_2 - 3] [i_2 - 4] [i_2 - 4])));
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)30)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned short)24031)))) >= (((((/* implicit */int) (unsigned short)41484)) >> (((((/* implicit */int) (unsigned char)120)) - (101)))))));
                    arr_9 [i_0] [i_1] [12U] [i_1] = ((/* implicit */long long int) (unsigned char)91);
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1] [i_1 + 1])), (((unsigned long long int) arr_6 [i_1] [i_1 - 1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_9))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_9)) >= (var_11)))), (((((/* implicit */_Bool) ((long long int) var_12))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245216
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
    var_14 = ((/* implicit */int) min((var_14), (var_12)));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) 4193792))) / (max((((/* implicit */int) var_0)), ((+(var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(var_7)))))), (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (unsigned char)26)))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) <= (var_4)))), (min((((/* implicit */int) (signed char)108)), (-1089317712)))))))));
                arr_7 [(unsigned short)12] [i_0] [i_1] &= max((((/* implicit */int) (unsigned char)229)), (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-42))))) / (((var_7) ? (-1089317712) : (((/* implicit */int) var_11)))))));
            }
        } 
    } 
}

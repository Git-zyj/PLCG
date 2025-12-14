/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249068
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
    var_11 -= ((/* implicit */unsigned long long int) ((short) var_2));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1])))) : ((+(arr_0 [i_0])))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (+((+(max((((/* implicit */unsigned int) 1366342841)), (arr_1 [i_1])))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)96)))), (((((/* implicit */int) (short)-29980)) * (((/* implicit */int) var_8))))))) / ((+(arr_0 [i_0])))));
                var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) min((arr_0 [(_Bool)1]), (((/* implicit */unsigned long long int) var_1))))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_3 [i_0])))) / (max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-29984)) - (((/* implicit */int) (unsigned char)141))))) : (((((/* implicit */_Bool) var_7)) ? (625456934464638677LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : (min((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)110)), ((unsigned short)57344))))))));
    var_16 = var_5;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220998
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = (((!((_Bool)1))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [(signed char)10] [(signed char)10] [20LL])))) && (((/* implicit */_Bool) ((signed char) var_17))))))));
                arr_6 [(unsigned char)3] = ((/* implicit */signed char) (-((~((+(arr_1 [(signed char)2] [(short)11])))))));
                arr_7 [(unsigned char)2] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (short)-19068)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)19))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((2697815273U), (((/* implicit */unsigned int) var_4))))) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)33499))))) : (var_7))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)-25)))), (((/* implicit */int) var_11)))))));
    var_22 ^= ((/* implicit */unsigned int) var_7);
}

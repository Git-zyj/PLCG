/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236947
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) max((((/* implicit */short) ((((((/* implicit */_Bool) (short)26000)) ? (((/* implicit */int) (short)26000)) : (((/* implicit */int) (short)26000)))) < (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))))))), ((short)-26017)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)4] [i_0] [i_0])) ? ((-(((/* implicit */int) (short)26017)))) : (((/* implicit */int) (short)25985))))), ((+(arr_1 [i_1] [i_2])))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */long long int) (short)-26014))))) ? (((((/* implicit */_Bool) (short)26019)) ? (((/* implicit */int) (short)-26010)) : (((/* implicit */int) (short)-26014)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))))));
                    var_17 = arr_3 [i_0] [i_1];
                    var_18 = ((/* implicit */unsigned int) (short)-26020);
                }
            } 
        } 
    }
    var_19 = ((((((/* implicit */long long int) (-(var_12)))) < (((((/* implicit */_Bool) (short)-26017)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)25996))))))) ? (min((((/* implicit */unsigned int) var_5)), (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (short)26017))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))));
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((short) var_2))), (var_12)));
    var_21 = ((/* implicit */unsigned int) (short)26014);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217355
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
    var_14 -= ((/* implicit */unsigned long long int) var_13);
    var_15 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11)) / ((-(((/* implicit */int) var_10)))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((unsigned long long int) arr_3 [i_0])) << (min((((/* implicit */int) var_2)), (((((/* implicit */int) (signed char)58)) / (((/* implicit */int) var_7)))))))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2))))))));
        var_19 += ((/* implicit */long long int) (unsigned short)25373);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) (unsigned short)49247)))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_21 += ((/* implicit */int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) arr_5 [i_2]))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (min((((long long int) (unsigned short)25360)), (((/* implicit */long long int) -539770179)))))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */short) ((var_12) ? (min((((/* implicit */long long int) var_2)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}

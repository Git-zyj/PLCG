/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230781
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_10)))) : (((/* implicit */int) max((max((((/* implicit */short) var_18)), ((short)2737))), (((/* implicit */short) var_10))))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (max((var_2), (((/* implicit */long long int) var_15)))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [(unsigned char)9] = ((/* implicit */int) ((((/* implicit */_Bool) 1432255385)) ? (((/* implicit */unsigned long long int) var_0)) : (var_3)));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32594)) + (((/* implicit */int) (unsigned short)58917))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */int) var_18)))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
    for (int i_2 = 3; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((short) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_18)))));
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)2738))))) - (((((/* implicit */_Bool) (short)2755)) ? (658719257U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83)))))))) ? ((+(var_17))) : (((/* implicit */unsigned long long int) (-(var_16))))));
        arr_11 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */short) var_18)), (var_6)))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_8))))))) || (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) var_13)))))) + (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-29612)) + (2147483647))) << (((((((/* implicit */int) (short)-2730)) + (2735))) - (5)))))) : (min((var_13), (((/* implicit */unsigned int) (short)-6246)))))))))));
    var_25 *= ((/* implicit */unsigned short) var_10);
}

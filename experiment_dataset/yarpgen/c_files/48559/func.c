/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48559
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), ((((!(((/* implicit */_Bool) var_5)))) ? (-2626861522105821608LL) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))))))))));
        arr_2 [i_0] = ((int) ((var_12) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)58557))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) ((short) var_15))))) : (min((((((/* implicit */_Bool) 868474699969616617ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_12))))));
        var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_22 -= ((/* implicit */short) (_Bool)1);
                        var_23 = ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_4))))));
                        var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) arr_5 [i_4 + 3])) : (arr_3 [i_4 - 1])))));
                    }
                } 
            } 
        } 
        arr_14 [i_2] = ((/* implicit */unsigned long long int) (short)25531);
    }
    var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) min(((_Bool)1), ((_Bool)1)))))));
    var_26 = ((/* implicit */unsigned char) (unsigned short)59441);
}

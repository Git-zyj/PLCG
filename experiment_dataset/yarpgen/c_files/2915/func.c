/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2915
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) <= (((((/* implicit */_Bool) ((int) var_0))) ? ((+(((/* implicit */int) var_17)))) : ((+(((/* implicit */int) (_Bool)0)))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */int) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_18)))))));
        arr_5 [i_0] = ((/* implicit */_Bool) 2528361875U);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_20 = arr_7 [i_1] [i_1];
        arr_8 [i_1] [i_1] = ((/* implicit */int) arr_6 [(unsigned short)4]);
        arr_9 [i_1] [i_1] = (-(((/* implicit */int) (unsigned short)65030)));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((var_8) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (unsigned short)23831)))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_11 [i_2]))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 *= ((/* implicit */unsigned short) 3989727312U);
            var_24 = ((/* implicit */int) max((var_24), (11)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17371))))) | (0)));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */int) (+(1766605421U)));
                            arr_25 [i_5] &= var_3;
                        }
                    } 
                } 
            } 
        }
        var_26 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((unsigned short) (unsigned short)20))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_11)) - (61924)))))) ? (((((/* implicit */_Bool) 2666799999U)) ? (1194580796U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1622870296)) ? (4294967295U) : (((/* implicit */unsigned int) -1))))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_28 [i_8] = arr_26 [i_8];
        var_29 = ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */_Bool) arr_27 [i_8])) || (((/* implicit */_Bool) var_17)))))));
        var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_27 [i_8 + 1])) ? (((/* implicit */int) arr_27 [i_8 + 1])) : (((/* implicit */int) var_12))))));
        arr_29 [i_8] |= (((+(1664156845))) >> (((((/* implicit */int) var_13)) - (41576))));
    }
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_13))));
}

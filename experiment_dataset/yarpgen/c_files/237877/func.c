/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237877
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
    var_12 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2889885526U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31536))) : (var_2))), (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_7))))))));
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_5)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_10)))))), (max((var_6), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_1))))))));
        var_16 -= ((/* implicit */signed char) (unsigned char)0);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_17 += ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        var_18 -= ((/* implicit */unsigned short) min((arr_1 [i_1]), (arr_1 [i_1])));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? ((+(((33423360LL) | (var_2))))) : (((/* implicit */long long int) ((arr_13 [i_3] [i_4]) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) var_4))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) var_10)), (min((arr_2 [(unsigned char)1] [i_1]), (((/* implicit */unsigned int) (unsigned short)5)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (short)-6)))) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_9)))))))));
        var_21 = ((/* implicit */int) var_7);
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((short) var_6)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32720
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((var_16) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_18)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_19))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_12))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) (~(var_15)))) ? (var_9) : (var_3)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_19);
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_0)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 90416065U)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned char)131))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_9)));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned int) var_0));
                            var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(0ULL))))));
                            arr_15 [i_0] [i_4] [i_0] [i_4] [i_4] [i_1 - 1] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned long long int) 4204551231U)) : (0ULL)));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) var_15);
            var_27 *= ((/* implicit */unsigned char) var_3);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_9))));
            arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((~(var_9)))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-31084))));
                            var_30 = ((/* implicit */short) var_19);
                        }
                    } 
                } 
            } 
        }
        arr_28 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_0) : (var_11)));
    }
}

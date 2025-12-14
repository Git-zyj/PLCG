/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226950
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        arr_8 [i_0] [i_0] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) var_2))))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (var_5) : (var_15))) << (((((((var_6) + (9223372036854775807LL))) << (((var_5) - (3862961607U))))) - (7146731461427424353LL))))))));
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15))) : (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_8)) - (92)))))));
                        arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) var_7);
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_8)) - (91)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_6)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_7)) - (15503)))))) : (((unsigned int) var_5)))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_7))))) : (((var_1) - (var_1))))))));
                        arr_18 [i_0] [(unsigned short)0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) && (((/* implicit */_Bool) var_3))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9)))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_12), (var_16)))))) : (max((((/* implicit */long long int) ((signed char) var_5))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_9))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_7)))) << (((((var_1) + (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_2)) : (var_5))))) - (3986910577U))))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) - (6977))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_3))))) ? (((var_14) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10))))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) var_14)))))));
            }
        } 
    } 
}

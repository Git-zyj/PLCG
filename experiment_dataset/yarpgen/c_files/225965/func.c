/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225965
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [19LL] = ((/* implicit */unsigned int) (~(((var_11) ? (((/* implicit */int) var_1)) : (var_2)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_9)))) ? (((var_10) ? (((/* implicit */unsigned long long int) var_6)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) var_11))))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_0))));
            var_19 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(var_11)))), (((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_2))));
            var_21 = ((/* implicit */unsigned long long int) var_11);
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_10);
        }
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127)))))));
            var_23 = ((/* implicit */unsigned char) var_5);
            arr_15 [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) (signed char)-120)), (var_6)))));
        }
        arr_16 [i_1] = (((!(var_13))) ? (var_9) : ((-(((/* implicit */int) (signed char)28)))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned long long int) (!(var_13)));
            arr_20 [i_4] = (~((+(((/* implicit */int) var_13)))));
            /* LoopSeq 2 */
            for (int i_5 = 3; i_5 < 23; i_5 += 3) /* same iter space */
            {
                var_25 ^= ((/* implicit */unsigned short) var_2);
                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))));
                var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_1))))) ? ((-(((/* implicit */int) var_0)))) : (min((var_2), (var_2)))));
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 23; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_31 [i_4] = ((((/* implicit */_Bool) 2633764832U)) ? (2781679338U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))));
                    arr_32 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) var_16);
                    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_9) : (((/* implicit */int) var_11)))))));
                    var_30 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                }
                arr_33 [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))));
            }
        }
        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) min(((~(var_15))), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */signed char) var_10)))))));
            arr_37 [i_1] [i_1] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
            var_32 = var_9;
        }
    }
    var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_16), (var_16)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))));
}

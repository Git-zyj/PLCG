/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46299
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
    var_15 = ((/* implicit */short) ((unsigned int) var_5));
    var_16 = ((/* implicit */int) ((long long int) min((var_3), ((short)-29674))));
    var_17 *= ((/* implicit */signed char) ((_Bool) (signed char)69));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [(signed char)6] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_6 [i_2] [1ULL])))) : (((/* implicit */int) var_6))));
                var_19 = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 *= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                    arr_12 [i_1] [i_2] [i_1] [i_1] = var_4;
                }
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_21 = ((/* implicit */int) (~(arr_14 [i_4] [i_4] [i_4] [i_4] [i_4])));
                    arr_17 [i_1] = ((/* implicit */signed char) ((_Bool) (short)29674));
                }
            }
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_1] [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) 1131377932U)))))));
            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_11))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            arr_18 [(unsigned short)6] [i_1] [(unsigned short)6] &= ((unsigned long long int) arr_16 [(unsigned short)14] [i_1] [i_0] [i_0] [(signed char)12]);
        }
        for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)15104))) / (var_8)));
            arr_22 [i_0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) var_0)) - (1087726033U)));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_2 [i_0]))));
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) var_7);
            var_26 = ((/* implicit */unsigned long long int) (+(1540622561)));
        }
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) var_12)))) : (-1540622561)));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (11921))))))));
            var_28 &= ((/* implicit */unsigned int) ((((int) var_3)) <= ((~(((/* implicit */int) (short)29674))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_31 [i_8] [i_8] = ((/* implicit */short) var_7);
        var_29 = ((/* implicit */_Bool) var_4);
        var_30 = ((/* implicit */short) var_10);
    }
    /* LoopSeq 3 */
    for (unsigned int i_9 = 1; i_9 < 24; i_9 += 2) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) arr_33 [i_9 - 1] [16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46602))) : (var_1))))), (((/* implicit */unsigned long long int) var_10))));
        var_31 = ((/* implicit */long long int) var_2);
        var_32 = ((/* implicit */signed char) var_14);
    }
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        var_33 = ((/* implicit */long long int) ((unsigned long long int) 1152921504338411520ULL));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-(((/* implicit */int) ((short) (-(((/* implicit */int) var_13)))))))))));
    }
    for (short i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        arr_41 [i_11] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)29674)), (520192U))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_11]))))), (min((var_0), (((/* implicit */int) var_10))))))));
        var_35 += ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >> (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)29674)) : (((/* implicit */int) var_7)))) - (((/* implicit */int) ((unsigned short) var_11))))) + (23663)))));
    }
}

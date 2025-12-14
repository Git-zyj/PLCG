/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199508
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)47))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_11))) & ((~(arr_1 [i_0])))));
        var_22 = ((/* implicit */_Bool) (signed char)47);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_23 = ((/* implicit */short) (signed char)-17);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) 662414390);
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) 1014000282);
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((_Bool) (unsigned short)39015)))));
                        }
                    } 
                } 
            }
            for (int i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) ((arr_16 [i_6 + 1]) ? (((/* implicit */int) var_12)) : (var_16)));
                arr_21 [i_1] [i_6] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)55))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_2] [i_1] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-47)) && (((/* implicit */_Bool) (signed char)-46))));
                            var_27 -= (~(((/* implicit */int) (signed char)47)));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) * (var_2)));
        }
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [i_1] [i_9] [i_10] [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : ((((_Bool)1) ? (((/* implicit */int) arr_28 [i_1] [i_1] [i_10] [(unsigned short)11] [i_11] [(short)3] [i_11])) : (((/* implicit */int) var_0)))))) * ((+(((/* implicit */int) (unsigned char)20))))));
                        arr_38 [i_1] [i_11] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_1] [i_9])), (var_7))))));
                        arr_39 [2ULL] [i_11] [i_10] [(short)6] [i_9] = ((/* implicit */int) (-(var_15)));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_4 [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_44 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(568583177U)))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)47))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_31 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_43 [i_12]))));
            var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    var_33 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned long long int) (_Bool)1))));
}

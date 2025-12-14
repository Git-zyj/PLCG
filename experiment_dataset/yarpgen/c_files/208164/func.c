/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208164
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2])) ? (var_0) : (((/* implicit */int) arr_5 [i_3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_19))));
                                arr_14 [i_0] = ((/* implicit */long long int) min((((unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((/* implicit */int) arr_8 [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_4 [i_0])))))));
                                arr_15 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) ? (min((((unsigned int) arr_5 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_3])) : (arr_2 [i_3] [i_0])))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_0])), ((~(((/* implicit */int) arr_8 [i_1] [i_2] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)122)), ((unsigned short)45276)))))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) var_12)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_17 [i_5]))));
        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3359945544899665951LL)) ? (((/* implicit */int) (short)-25465)) : (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */int) arr_18 [i_5]);
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1)))))))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5])) && (((/* implicit */_Bool) arr_17 [i_5]))))) >> (((((/* implicit */int) ((short) arr_17 [i_5]))) + (23378)))));
    }
    var_29 = ((/* implicit */signed char) (+(3359945544899665951LL)));
    var_30 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_6]))) <= (var_2)));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_19 [i_6]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_6])))))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */int) arr_19 [i_6])) / (((/* implicit */int) arr_20 [i_6] [i_6])))) : ((~(((/* implicit */int) arr_19 [i_6]))))));
        arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6])))));
        arr_23 [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_7] [i_7])))) : (((((/* implicit */int) arr_4 [i_7])) / (arr_1 [i_7])))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (unsigned int i_10 = 2; i_10 < 15; i_10 += 1) 
                {
                    {
                        var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */int) var_1)) : (arr_2 [i_8] [i_9])))) ? (((((/* implicit */_Bool) arr_32 [i_9] [i_8])) ? (arr_2 [i_10] [i_8 + 1]) : (((/* implicit */int) arr_31 [i_8 + 2] [i_8 - 1] [(signed char)4])))) : (((var_12) ? (arr_12 [(short)4] [i_10 - 1]) : (((/* implicit */int) var_18))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            arr_39 [i_7] = ((((/* implicit */_Bool) ((unsigned short) arr_33 [i_7] [i_8 - 1] [i_7] [i_10] [i_7] [i_11]))) ? ((+(((/* implicit */int) (unsigned short)11783)))) : (((/* implicit */int) arr_17 [i_8])));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_34 [i_7] [i_8] [i_7] [i_10 + 3] [i_7])) : (((/* implicit */int) arr_4 [i_11])))) : (((/* implicit */int) arr_30 [i_7]))));
                            arr_40 [i_7] [i_9] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11761)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (short)25464))));
                            var_36 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_31 [i_7] [i_8 + 2] [i_7])) >> (((((/* implicit */int) arr_20 [i_9] [i_9])) - (37832)))))));
                        }
                        var_37 = ((((/* implicit */int) ((signed char) (_Bool)1))) != (((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_10 + 1])));
                    }
                } 
            } 
        } 
    }
}

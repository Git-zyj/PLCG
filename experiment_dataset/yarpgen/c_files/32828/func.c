/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32828
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2])) ? (var_4) : (arr_8 [i_2 + 1] [i_2] [i_2 + 3]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1 + 1] [i_1] [i_1 - 1]));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) 2147483647);
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) -2147483647);
                            arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) var_1);
                        }
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) -1981205889)))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(3365094907U))))));
                            arr_20 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (short)19568)) < (arr_4 [i_5] [i_3] [i_0]))));
                            arr_21 [i_3 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_2])) < (((/* implicit */int) (unsigned short)1022)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1023)) != (((/* implicit */int) (signed char)75)))))) : (((long long int) arr_1 [i_0]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            arr_24 [i_6] [i_6] [i_2] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(806873287U)))) ? ((-(((/* implicit */int) (signed char)118)))) : ((~(((/* implicit */int) arr_22 [i_0] [i_6] [i_6] [i_0] [i_0] [i_0]))))));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((532575944704LL) >= (((/* implicit */long long int) (-(arr_13 [i_0] [i_1 - 4] [i_2] [i_3 - 1] [i_6 + 1]))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (arr_1 [i_3 + 1]) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 - 2]))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(2147483647))))));
                            var_24 = ((/* implicit */unsigned long long int) (short)-13983);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) max((var_25), ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2 - 2] [i_8]))))));
                        var_26 *= ((unsigned long long int) (+(1231506292U)));
                        arr_32 [i_0] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2] [i_8] [i_8 - 2] [i_0] [i_0]);
                    }
                    arr_33 [i_1 + 2] = ((/* implicit */short) arr_8 [i_2] [i_1] [i_0]);
                }
                arr_34 [i_0] [i_1 + 2] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (unsigned char)241)))));
                arr_35 [i_0] [i_1 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) min((-5381800380945619705LL), (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_1] [i_1 + 2] [i_1])))))) ? (((/* implicit */int) ((unsigned char) (short)23353))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 4] [i_1])) <= (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 4] [i_1])))))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((long long int) arr_28 [i_0] [i_1] [i_0] [i_0] [i_1 + 1])), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25222)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 2] [i_0] [i_0]))) <= (6821285306567370797LL))))))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
    /* LoopSeq 4 */
    for (short i_9 = 2; i_9 < 8; i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_9 + 2] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 2])), (var_1)))) ? (arr_5 [i_9] [i_9] [i_9 + 1]) : (arr_5 [i_9 + 1] [i_9 - 2] [i_9 - 1]))));
        arr_39 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_9 + 1] [i_9 - 2] [i_9 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_6 [i_9 + 1] [i_9 + 1] [i_9 - 2])) : (((/* implicit */int) arr_6 [i_9 - 1] [i_9 - 2] [i_9 + 2]))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_9 + 1])))));
    }
    for (short i_10 = 2; i_10 < 8; i_10 += 1) /* same iter space */
    {
        arr_42 [i_10 - 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_12 [i_10 - 1] [i_10 - 2] [i_10] [i_10] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_12 [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10]))), (arr_12 [i_10 + 2] [i_10 - 2] [i_10] [i_10] [i_10])));
        arr_43 [i_10 + 1] [i_10] = ((/* implicit */_Bool) (~(max((((int) (short)-13980)), (((/* implicit */int) var_3))))));
    }
    for (short i_11 = 2; i_11 < 8; i_11 += 1) /* same iter space */
    {
        var_29 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_45 [i_11])) ? (arr_26 [i_11 + 1] [i_11] [i_11] [i_11 - 2] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) (+(-1981205889))))))) ? (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_47 [i_11] [i_11])))))) : (min((((/* implicit */long long int) arr_17 [i_11 + 2] [i_11 - 1] [i_11] [i_11] [i_11 - 1])), (max((((/* implicit */long long int) -1981205889)), (-8819378332460636651LL))))));
        arr_48 [i_11] = arr_30 [i_11 - 2] [i_11 + 2] [i_11] [i_11] [i_11] [i_11 + 2];
        var_30 = 4310990776027072325LL;
        var_31 = ((/* implicit */signed char) arr_1 [i_11]);
        var_32 = ((/* implicit */int) (((~(10761904934300396357ULL))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (signed char)-80))))))));
    }
    for (short i_12 = 4; i_12 < 16; i_12 += 4) 
    {
        var_33 -= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)32765))))))));
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 4) 
            {
                {
                    var_34 = ((((/* implicit */_Bool) 9842380356311263682ULL)) ? (2147483622) : (((/* implicit */int) (short)23368)));
                    var_35 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-97))))), (((long long int) ((_Bool) (unsigned char)237)))));
                }
            } 
        } 
    }
}

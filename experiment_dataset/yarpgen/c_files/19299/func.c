/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19299
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
    var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) 3575780412015376112LL))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_10)))) : (((/* implicit */int) ((signed char) var_16))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))))), (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) ((short) 8388607LL))) <= (((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */int) (unsigned char)2))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) 8388607LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)11] [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8388607LL)) ? (((/* implicit */int) (short)-10783)) : (((/* implicit */int) var_15)))))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [i_1]))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (7735412026011837210LL))))))))));
                var_20 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_1)))));
                var_21 *= ((/* implicit */unsigned short) ((min((((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) (signed char)0))))))) % (((/* implicit */long long int) -1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_22 -= ((/* implicit */signed char) (_Bool)0);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-10))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32746)) / ((~(((/* implicit */int) (_Bool)1))))));
            arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-6)) > (((/* implicit */int) arr_11 [i_2] [i_3]))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 4; i_4 < 22; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) arr_11 [i_5] [i_3]);
                            arr_19 [i_2] [i_2] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? ((~(arr_8 [i_2] [i_2] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [(unsigned char)23])))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (-219544022592610834LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_7] [i_2] [i_2])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((2442274435488236655LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 8480729223354627865LL)) || (((/* implicit */_Bool) 4611686018410610688ULL)))))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_8] [i_7 + 1] [i_2]) : (((/* implicit */int) var_9))))))));
                        var_28 = ((/* implicit */signed char) (+(9223372036854775799LL)));
                        arr_29 [i_7] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) -219544022592610834LL)))));
                        var_29 = ((/* implicit */_Bool) (short)-32767);
                    }
                } 
            } 
            arr_30 [(unsigned short)18] [i_7] = ((/* implicit */signed char) arr_22 [(signed char)18] [i_7]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_33 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [1LL])) && (var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_10] [4U]))) : (var_12)));
            arr_34 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((var_16) - (((/* implicit */unsigned long long int) var_6))))));
            arr_35 [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_2] [i_2] [(unsigned short)10] [i_10])) * (((/* implicit */int) arr_23 [i_10]))));
        }
    }
}

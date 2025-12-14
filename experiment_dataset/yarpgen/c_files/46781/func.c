/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46781
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
    var_16 = ((/* implicit */unsigned short) min((var_3), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_5))), ((~(((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-13337)) | (((/* implicit */int) ((short) arr_1 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] [(short)5] = ((/* implicit */unsigned int) ((arr_6 [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))));
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)36387))));
        }
    }
    var_18 = ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) && (((/* implicit */_Bool) 8098565108216582387ULL)))))) : (var_7));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)13340))))) ? (((/* implicit */int) (short)13336)) : ((-(((/* implicit */int) var_12))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) arr_8 [10ULL]);
                var_21 = ((/* implicit */unsigned char) var_15);
            }
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_10 [i_2])))));
        }
        /* LoopSeq 3 */
        for (short i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            arr_20 [i_2] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_5])) + (2147483647))) >> (((((/* implicit */int) (short)-13334)) + (13354)))));
            var_23 = ((/* implicit */unsigned char) var_9);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_24 = ((((/* implicit */_Bool) arr_21 [i_5 + 1])) ? (((/* implicit */int) arr_21 [i_5 + 1])) : (((/* implicit */int) arr_21 [i_5 + 1])));
                        var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) ((int) var_6))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_6] [i_5]))) & (arr_13 [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535)))))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_10 [i_2 + 3]))));
                    }
                } 
            } 
        }
        for (short i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            arr_30 [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) (short)-13337);
            arr_31 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_8 - 1] [(short)5])) ? (((/* implicit */int) arr_16 [i_2])) : (((/* implicit */int) (short)-13360))))) ? (arr_17 [(unsigned char)5] [i_2 + 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8 - 2] [i_2] [i_2 + 1])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            arr_35 [i_2] = ((/* implicit */unsigned short) (-((~(arr_28 [i_9] [i_9] [i_2])))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_12))) & ((~(((/* implicit */int) (unsigned char)95))))));
        }
        arr_36 [i_2] [i_2] = ((/* implicit */short) ((int) ((70367670435840LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-9282))))));
        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_2 + 4])) ? (arr_29 [i_2 + 2] [i_2 + 2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_2])) + (2147483647))) << (((((/* implicit */int) var_1)) - (1470))))))));
    }
}

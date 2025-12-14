/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228215
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
    var_11 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)-25893)) ? (2147483647) : (((/* implicit */int) var_7)))) >= (((/* implicit */int) min((var_2), (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_6 [15LL] [15LL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (arr_3 [i_1])));
                arr_7 [i_1] = arr_3 [i_1];
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_10)));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_2))) && (((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                            var_13 += ((/* implicit */short) (~(((/* implicit */int) var_2))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            }
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned short)12] [i_1] [i_1] [i_1])) + (-2147483647)))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) var_8)))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_18 [i_1] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            arr_24 [(unsigned short)16] [i_1] [6U] [i_1] = ((/* implicit */_Bool) var_6);
                            var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_5] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_0] [i_0] [i_1] [i_0])))))) : (((long long int) var_3))));
                            var_16 ^= ((/* implicit */long long int) (((~(((/* implicit */int) var_7)))) > (((((/* implicit */int) (unsigned short)19871)) - (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned char i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_17 ^= ((long long int) var_4);
                            var_18 -= arr_21 [(signed char)0] [i_0] [(signed char)0] [i_8] [i_9] [i_10];
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_0));
            }
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                arr_38 [i_1] = ((((/* implicit */int) (signed char)112)) & (((/* implicit */int) (short)25873)));
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
            }
            for (int i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (var_9)))) ? (var_10) : (var_10)));
                arr_41 [(signed char)8] [(signed char)8] [i_12] &= ((/* implicit */unsigned short) var_8);
                arr_42 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)77)) * (((/* implicit */int) (short)-25885)))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) (-(arr_14 [i_13] [i_0 + 1] [i_12] [i_12 + 1] [i_13])));
                    arr_45 [i_1] = ((_Bool) var_6);
                    arr_46 [i_0] [i_1] [i_12] [i_1] [i_0] = var_5;
                    arr_47 [i_0] [i_1] = (i_1 % 2 == zero) ? (((((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (-2147483630))) >> (((((int) arr_9 [i_1])) + (1158308109))))) : (((((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (-2147483630))) >> (((((((int) arr_9 [i_1])) + (1158308109))) + (839410024)))));
                    arr_48 [i_0] [i_1] [i_1] [i_1] [i_12] [0ULL] = ((/* implicit */unsigned char) var_3);
                }
            }
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                arr_51 [i_1] [i_1] [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                arr_52 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_37 [i_0 + 1]))));
            }
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_2))));
                    var_24 -= ((/* implicit */long long int) (((-(((/* implicit */int) (short)-25878)))) / (((/* implicit */int) var_4))));
                }
                var_25 = ((/* implicit */unsigned int) ((unsigned long long int) (!(var_0))));
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_26 = ((/* implicit */_Bool) ((arr_54 [i_0 - 1]) * (((/* implicit */unsigned int) var_10))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [14U] [i_0] [i_0])) ? (var_6) : (var_9)));
        }
        var_28 = ((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_39 [6LL])) : (var_6));
        arr_61 [i_0] [i_0 - 1] = var_3;
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((((/* implicit */int) var_0)) - (((/* implicit */int) var_7))))))) ? (var_6) : (((/* implicit */int) var_3))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_9)) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_9) : (((/* implicit */int) ((signed char) var_1)))));
    var_31 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
}

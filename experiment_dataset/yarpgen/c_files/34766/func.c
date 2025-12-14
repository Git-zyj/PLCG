/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34766
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_8 [(short)10] = ((((/* implicit */_Bool) ((arr_3 [i_2]) ? (arr_0 [i_0]) : (arr_7 [i_0] [i_0 - 1] [i_1] [i_2])))) ? (arr_7 [i_1] [i_0 + 2] [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) > (var_8)))));
                arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) == ((-(var_3)))));
                var_10 ^= ((/* implicit */unsigned short) var_6);
                var_11 = ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_4)))) > (((/* implicit */int) arr_6 [(short)5] [i_0 + 1] [(short)5])));
            }
            for (int i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) < (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2] [i_3 - 1]))));
                    var_13 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2] [i_0 - 1]))));
                }
                var_14 += ((/* implicit */unsigned char) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [(signed char)19] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))))))));
                arr_15 [(unsigned short)6] [i_1] [i_1] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_3 [i_0 - 1])) < (((/* implicit */unsigned long long int) ((int) arr_11 [i_0] [i_3 - 2] [i_0 + 1])))));
            }
            var_15 *= ((/* implicit */signed char) ((max(((-(var_8))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1]) >> (((arr_0 [i_0]) - (899667771)))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) arr_3 [i_0])))), (arr_4 [i_0 - 1] [i_1])))))));
        }
        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
        {
            var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_5] [i_5 + 2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : ((-(var_2))))), (min((arr_2 [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_5 + 2]))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * (max((((((/* implicit */int) var_5)) / (arr_0 [i_5]))), (((/* implicit */int) arr_14 [i_5 + 1] [i_0 + 2]))))));
            var_18 = ((/* implicit */signed char) ((unsigned char) arr_6 [i_0] [i_5] [i_5 - 1]));
            var_19 += ((/* implicit */long long int) (~(var_2)));
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                arr_25 [i_0] [(short)16] [i_0] &= ((/* implicit */_Bool) arr_22 [(unsigned short)3] [i_6] [i_0 + 2]);
                arr_26 [i_7] [i_6] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_21 [(unsigned short)21])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            arr_33 [i_0] [(unsigned char)4] [i_7] [i_8] [i_9] = ((/* implicit */short) (_Bool)1);
                            arr_34 [i_0] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((int) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_5 [i_0] [(short)0] [i_7])) - (182))))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                var_20 = ((/* implicit */long long int) arr_7 [i_10] [i_6] [(short)11] [i_0]);
                var_21 = ((/* implicit */unsigned long long int) arr_16 [i_0 + 1]);
            }
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    for (long long int i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_48 [i_0 + 2] [i_0] [i_0 - 1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((arr_12 [(unsigned short)3]) - (1952543313)))))) == (var_2)));
                            var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((var_6) <= (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [(unsigned char)21] [i_0]))))) ? (arr_37 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11] [i_6] [i_0]))) > (arr_40 [i_0] [i_0] [i_11])))))));
            }
            var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 - 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_6] [i_0 + 2]))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_6] [i_0 - 1]))))))));
            var_25 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_2 [i_0] [i_6])), (var_3)));
        }
        var_26 *= ((/* implicit */unsigned char) ((((arr_45 [i_0] [i_0 - 1]) && (arr_45 [12] [i_0 + 2]))) ? (((/* implicit */int) arr_4 [(unsigned char)15] [i_0])) : (((/* implicit */int) (unsigned char)96))));
    }
    var_27 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
    var_28 = ((/* implicit */int) var_0);
}

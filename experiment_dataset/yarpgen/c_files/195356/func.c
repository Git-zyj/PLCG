/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195356
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
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4404303722469588884LL))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)15393)) > (((/* implicit */int) (unsigned char)255)))))) / (var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_2 [i_4]);
                                var_15 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_10 [i_0] [i_2] [i_2] [i_4]), (((/* implicit */unsigned char) arr_2 [i_2]))))), (((((/* implicit */_Bool) (unsigned short)34104)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(12576271355030233715ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [(unsigned short)5] [i_2])), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (arr_4 [i_2]))))));
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((_Bool) (unsigned short)15400))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_6]) : (((/* implicit */int) max((arr_0 [i_5]), (((/* implicit */short) (unsigned char)1)))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) (unsigned char)217)))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [(unsigned char)22])))))))))) <= (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [20LL] [i_0])) ? (arr_9 [i_0] [i_5] [i_7] [i_7] [14U]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_7]) : (arr_1 [i_0])))) == (((unsigned long long int) arr_1 [i_0]))))));
            }
            arr_21 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0]))));
            arr_22 [i_5] [i_5] [(_Bool)0] = ((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) ((((17749010644998484260ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))))) ? (((/* implicit */int) arr_20 [i_5] [i_0] [i_0])) : (((/* implicit */int) (short)-2153)))))));
            arr_23 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 1340111661U)) / (var_12)))))) ? (((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_9 [i_0] [i_0] [i_0] [i_5] [i_5]))) : (arr_17 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))));
        }
        for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)247)))) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)6))));
            var_22 = ((/* implicit */signed char) (-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min((arr_0 [i_8]), (arr_0 [i_0]))))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                arr_32 [i_0] [(unsigned short)19] [(unsigned char)14] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_8] [(unsigned char)14] [i_9]), (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) var_8))));
                var_23 = ((/* implicit */long long int) ((int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7591))))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            arr_37 [2U] [2U] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_10] [14ULL] [i_10]))))), ((-(var_11)))));
                            var_24 = ((/* implicit */short) var_7);
                            var_25 |= max((1ULL), (((/* implicit */unsigned long long int) (unsigned char)208)));
                            var_26 = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_8] [i_0]))) + (1048575LL)))))));
            }
        }
    }
    var_28 ^= ((/* implicit */short) ((var_7) <= (((/* implicit */unsigned long long int) var_4))));
    var_29 = (~(12576271355030233715ULL));
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned short) ((_Bool) arr_43 [i_12] [7ULL]));
                arr_45 [i_12] = ((/* implicit */unsigned long long int) ((short) min(((-(((/* implicit */int) arr_42 [i_12] [i_12] [i_13])))), ((-(((/* implicit */int) var_0)))))));
            }
        } 
    } 
}

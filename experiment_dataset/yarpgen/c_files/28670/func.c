/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28670
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
    var_16 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_11)))))))) & (max((((/* implicit */unsigned long long int) 2987296337U)), (var_15)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((short) arr_0 [i_0]))) >> ((((~(((/* implicit */int) (short)-11849)))) - (11848)))))));
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((597724665U) >= (arr_1 [i_0]))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))), ((~(arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_2 [i_1]))));
            var_20 = ((/* implicit */unsigned char) (-(((arr_1 [i_0]) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (short)-13308)))))))));
            arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3697242610U)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 + 3])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1]))) + (2987296337U)));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (3697242619U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) | (((((/* implicit */_Bool) arr_0 [i_1])) ? (6233394963229646113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                    arr_11 [10ULL] [i_2] [(unsigned char)17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240)))))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = arr_6 [i_2] [i_1] [i_2];
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)220);
                }
                var_23 = ((/* implicit */unsigned int) var_5);
            }
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10801))))) < ((~(var_13)))))), ((~(((/* implicit */int) (short)-13308))))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) (short)17295)) ? (((unsigned int) (+(((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_15))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)140)))))))))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0])) ? (arr_7 [i_4] [i_4] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))))) ? ((+(min((((/* implicit */unsigned long long int) (short)-27024)), (12213349110479905503ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 4; i_5 < 24; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    var_27 = 597724677U;
                    arr_21 [24U] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)0);
                    var_28 *= ((/* implicit */unsigned int) (-(((unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_6]))));
                    var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_5 - 3] [i_5 - 3] [i_1 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_5 - 1] [i_5 - 1] [i_7] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_0 [i_7])))));
                        arr_27 [i_7] [i_6] [i_6] [i_5] [17ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)13303))))) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5])))));
                        arr_28 [i_0] [i_0] [i_1 - 1] [i_5] [i_1 - 1] [i_6] [i_7] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)152))))) : (((var_5) << (((((/* implicit */int) var_9)) + (8381))))));
                    }
                }
                var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5 - 4] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [11ULL])) : (((/* implicit */int) (short)-16818))))) : (arr_22 [i_1] [i_1 - 1] [i_0])));
                var_31 -= ((/* implicit */short) (+(((((/* implicit */_Bool) 15ULL)) ? (8073707619764725189ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
            }
        }
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((3181090712U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((8073707619764725189ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))) > (0ULL)));
        arr_29 [i_0] = ((/* implicit */short) var_11);
    }
}

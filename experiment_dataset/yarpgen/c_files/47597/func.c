/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47597
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21572))) + (3657578348U)));
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && ((!(((/* implicit */_Bool) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_12)));
    var_19 |= ((/* implicit */int) var_6);
    var_20 ^= ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) var_12)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)184)) - (173)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1)))))) / (var_12))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_21 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_4 [i_0] [i_0] [(short)10]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32070))))) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((arr_4 [i_1] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
            arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_22 = ((/* implicit */signed char) arr_4 [i_2] [i_2] [i_2]);
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_3] [i_0]))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_3])) | (((/* implicit */int) arr_5 [i_0] [i_2]))));
            }
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned int) arr_13 [i_4] [i_2] [i_0])))));
                var_26 = ((/* implicit */signed char) max((var_26), (var_9)));
                var_27 -= ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))));
                var_28 = ((/* implicit */unsigned char) ((((unsigned int) (signed char)-125)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((637388919U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))))) <= (((/* implicit */unsigned int) arr_19 [i_0] [i_2] [i_5 - 2] [i_2] [i_2]))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)161)))) & (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */short) (-(821745310)));
            arr_21 [i_2] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
        }
        var_32 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)17)) ^ (arr_19 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7])));
        var_34 = (!(((/* implicit */_Bool) ((arr_16 [i_7 + 2] [i_7] [i_7] [(unsigned short)16] [i_7] [i_7 + 2]) & (arr_16 [i_7 + 1] [i_7] [i_7] [(signed char)8] [i_7 + 4] [i_7])))));
    }
}

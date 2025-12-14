/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219833
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + ((~(var_8)))));
    var_18 = var_4;
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) -3252578231885957646LL)), (arr_0 [(short)5]))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned char i_3 = 4; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(short)16] [i_3 + 3] [(short)1] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 3] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3 + 3] [i_3] [(unsigned char)16]))));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [(unsigned char)6] [i_1] [i_1] [i_3 - 4])) <= (((/* implicit */int) arr_7 [i_0] [i_3] [i_2] [i_3 - 4]))));
                        arr_12 [(unsigned char)11] [(unsigned char)11] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_1] [i_3 - 3]))));
                        arr_13 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0])) > (((/* implicit */int) (unsigned char)11)))) ? (arr_0 [i_3 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -6711960700122689392LL)) != (4095778052922264983ULL)))))));
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))));
            arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1])) ? (7549824931385268286ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [(unsigned char)5] [i_1])))))));
            arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_0]))) : (arr_9 [i_0] [i_0] [(unsigned char)13] [i_1])))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (4593671619917905920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73)))));
            arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [(unsigned char)12] [(unsigned char)12] [i_4])) % (((/* implicit */int) (unsigned char)130))))) ? (((((/* implicit */_Bool) 68719476735ULL)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)15] [i_4 - 1] [(unsigned char)15]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3232480141716888583ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_4])) : (((/* implicit */int) arr_6 [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_21 [i_5] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [14ULL])) || (((/* implicit */_Bool) arr_0 [i_5]))));
            var_26 = ((/* implicit */unsigned char) (+(arr_9 [i_0] [i_0] [i_5] [i_5])));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_5])) ? (((/* implicit */int) arr_3 [i_0] [i_5])) : (((/* implicit */int) arr_3 [i_0] [i_5]))));
        }
        var_28 = (-(((arr_8 [i_0]) - (arr_8 [i_0]))));
        var_29 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)14] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_30 = (+(0LL));
        var_31 = arr_5 [i_6] [i_6];
    }
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_7] [i_7] [i_7] [1ULL]), (arr_7 [i_7] [i_7] [i_7] [i_7]))))) : (((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7] [(unsigned char)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [(unsigned char)0] [i_7]))) : (15453136101610877937ULL)))));
        arr_28 [i_7] [i_7] = arr_11 [i_7] [13ULL] [13ULL];
    }
}

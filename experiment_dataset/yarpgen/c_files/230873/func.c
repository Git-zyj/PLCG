/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230873
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 -= ((min((var_4), (((/* implicit */long long int) arr_1 [i_1 + 1] [i_1 - 1])))) % (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3])) >> (((((/* implicit */int) arr_2 [i_2 + 1])) + (9)))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12306585028580073508ULL)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))));
                    arr_6 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_16)))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 3]))) : (arr_1 [i_1 - 3] [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3] [i_3])) < (((/* implicit */int) arr_10 [i_3] [13ULL]))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_14 [0U] [i_4] [i_5])) <= (var_6)));
                    var_22 += ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3])) >= (((/* implicit */int) arr_7 [i_3]))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */long long int) var_9)) / (var_4)))));
                    var_24 &= var_7;
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_4])) < (((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) var_6);
        arr_18 [i_6] = ((/* implicit */unsigned long long int) (+(arr_17 [i_6])));
        var_27 *= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3))));
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        var_28 -= arr_13 [i_7] [i_7] [i_7];
        arr_22 [i_7] = ((/* implicit */unsigned char) (((~(arr_12 [i_7] [i_7] [i_7]))) >> ((((((~(((/* implicit */int) arr_4 [i_7] [i_7] [(short)5] [i_7])))) % (((((/* implicit */int) var_7)) % (((/* implicit */int) var_3)))))) + (24)))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) arr_8 [i_7]);
    }
    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
    var_30 = ((/* implicit */signed char) (-(var_13)));
}

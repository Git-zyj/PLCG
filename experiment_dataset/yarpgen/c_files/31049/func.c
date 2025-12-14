/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31049
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_12 &= ((/* implicit */unsigned short) 7231732113587853202LL);
        var_13 = ((/* implicit */short) arr_2 [(unsigned short)4] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) == (arr_2 [i_1] [i_1])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)2])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 4; i_3 < 12; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_17 [(unsigned short)11] [i_4] [3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [10U] [(unsigned short)5]) >= (((/* implicit */long long int) arr_0 [i_1])))))) & (arr_13 [i_1] [2] [(unsigned short)6] [(unsigned char)7])));
                        var_15 += ((/* implicit */unsigned int) var_7);
                    }
                } 
            } 
            var_16 = (~(0LL));
        }
        for (int i_5 = 4; i_5 < 11; i_5 += 1) 
        {
            var_17 -= ((/* implicit */long long int) var_8);
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
            arr_22 [i_5] = ((/* implicit */unsigned short) ((unsigned char) -8LL));
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_20 [4] [7U]))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_6] [i_6])) : (((/* implicit */int) min(((unsigned short)39564), (((/* implicit */unsigned short) var_2)))))))) < (((((/* implicit */_Bool) (unsigned short)26812)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) arr_8 [i_1] [(unsigned short)5]))))) : (((var_1) | (((/* implicit */long long int) 90174038))))))));
            arr_25 [(unsigned short)11] [(unsigned short)12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (9223372036854775798LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1])) | (((/* implicit */int) var_2)))))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) 0);
        var_19 |= ((/* implicit */long long int) arr_16 [i_7] [i_7] [i_7]);
    }
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) max((0LL), (-18LL))))));
}

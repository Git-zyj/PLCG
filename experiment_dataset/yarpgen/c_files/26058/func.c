/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26058
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
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) ((3189888146U) >= (((/* implicit */unsigned int) 31457280))))), ((~(-31457281)))))), (var_2)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [11U])) ? (-31457281) : (var_12)))));
        arr_2 [(short)7] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [2]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [12] [i_0] [i_0]))));
            var_18 += (~(((/* implicit */int) arr_5 [i_1])));
            var_19 += ((((/* implicit */int) (!(arr_3 [i_0] [i_1] [i_1])))) - (-31457281));
            arr_6 [4U] [i_1] = ((/* implicit */unsigned int) var_14);
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 31457280)) ? (2315997208U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_0] [14LL] [i_2]) / (((/* implicit */int) arr_11 [i_0]))))) : (18446744073709551615ULL)));
                    arr_13 [1U] [i_3] [i_1] [i_3] = ((_Bool) (short)-9290);
                    arr_14 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) ((-31457281) | (arr_12 [i_0] [i_1] [5U])))) || (((/* implicit */_Bool) ((-31457281) / (((/* implicit */int) (_Bool)1))))));
                }
                for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    arr_17 [7U] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && ((_Bool)1))))));
                    var_21 ^= ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))));
                    arr_18 [i_0] [i_1] [i_2] [i_4] [i_4] [(signed char)4] = ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_4] [i_4 + 3] [i_4 + 1] [i_4 + 2]))));
                }
                var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_23 |= (~(arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1]));
                arr_22 [(_Bool)1] [i_0] [i_5] = ((signed char) ((var_14) >= (arr_1 [8U])));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ^ (((/* implicit */int) arr_16 [i_0] [i_5] [(short)10] [i_5 - 1]))));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_25 [i_6] = ((/* implicit */int) ((unsigned int) arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1]));
                var_25 ^= ((/* implicit */int) ((signed char) ((signed char) var_13)));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_6] [i_6 - 1] [i_6 - 1])) >= (((/* implicit */int) arr_24 [i_6 - 1] [i_6] [i_6 - 1] [i_6]))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1])))))));
                arr_30 [i_0] [12U] [(_Bool)1] = ((((/* implicit */_Bool) ((31457309) / (-1788866426)))) ? (arr_7 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) | (-913268481))));
                arr_31 [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) -31457281);
            }
        }
        for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            var_28 |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -31457281)) || ((_Bool)1))))));
            arr_34 [i_8] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_8 + 2] [i_8] [i_0]))));
            var_29 = ((/* implicit */unsigned int) (signed char)79);
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 22; i_9 += 2) 
    {
        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) arr_37 [i_9 - 1]))));
        var_31 = ((/* implicit */long long int) ((signed char) (signed char)2));
        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_9 + 1] [i_9 + 2]))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_33 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_35 [i_10] [i_10]))))));
        arr_41 [i_10] = ((/* implicit */unsigned int) (+(arr_39 [i_10] [i_10])));
    }
    var_34 *= ((/* implicit */_Bool) var_0);
    var_35 ^= ((/* implicit */signed char) (-(min((((/* implicit */int) min(((signed char)79), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) -31457281)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32767))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244171
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) ^ (((/* implicit */int) var_12)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2548474237405211439ULL))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_1 + 1] = ((arr_0 [i_1 - 1] [i_1 + 3]) << (((arr_0 [i_1 + 4] [i_1 - 1]) - (3223003049855333948ULL))));
            var_20 = var_5;
            arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15898269836304340177ULL))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2 + 1])) * (((/* implicit */int) (signed char)0))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2 + 1]);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) >= ((~(var_14))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)72)), ((short)-32194)))) || (((/* implicit */_Bool) arr_8 [i_3]))));
        arr_16 [i_3] [i_3] |= ((/* implicit */signed char) (-((-(((/* implicit */int) min(((unsigned short)57358), (((/* implicit */unsigned short) arr_8 [i_3])))))))));
        var_22 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (min((arr_4 [i_3] [i_3] [i_3]), (-2)))));
        var_23 += arr_8 [i_3];
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_5] [i_5] [i_6])) ^ (((/* implicit */int) arr_20 [i_5]))))) ? (((unsigned long long int) 607005664)) : (((/* implicit */unsigned long long int) min((arr_17 [i_4] [i_5]), ((+(((/* implicit */int) arr_24 [i_5] [i_5])))))))));
                    arr_26 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (((((~(var_3))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)175)) / (((/* implicit */int) var_10))))))) - (((/* implicit */unsigned long long int) ((arr_25 [i_5] [i_5] [i_6]) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) arr_20 [i_6])))))));
                    arr_27 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_22 [i_5])))) ^ (((/* implicit */int) min((arr_21 [i_4]), (arr_25 [i_5] [i_5] [i_6]))))));
                }
            } 
        } 
    } 
}

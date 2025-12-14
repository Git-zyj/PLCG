/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49877
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_9))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 61572651155456LL))))) & (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)19913)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)-19911)))) > (((/* implicit */int) (unsigned short)14336))));
        var_15 *= ((/* implicit */unsigned int) (short)19910);
        var_16 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_1 [i_0] [(_Bool)1])) - (-1203645982))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_14 [i_3 - 1] [i_2] [i_1] [7LL] = ((/* implicit */unsigned short) (((~((~(arr_8 [i_1]))))) ^ (((((/* implicit */_Bool) arr_12 [i_1] [i_3 + 2] [i_3 + 1])) ? (32704U) : ((~(var_8)))))));
                    arr_15 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (-(min((arr_9 [(unsigned short)0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((arr_13 [i_1]) + (9223372036854775807LL))) >> (((((long long int) arr_13 [i_1])) + (5574230090444351934LL)))));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) arr_16 [i_4])), (540007604U)))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((1035909920) >> (((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_10 [i_4] [(unsigned short)0] [i_4])) : (((/* implicit */int) arr_0 [i_4] [(short)14]))))), (((long long int) arr_8 [i_4])))) - (4174100110LL))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((int) arr_6 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (~(((1962222431U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5])))))))) : (((unsigned long long int) max((arr_7 [i_5] [i_5]), (((/* implicit */unsigned int) arr_0 [i_5] [i_5])))))));
        arr_21 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (((~(((/* implicit */int) (unsigned short)224)))) >= ((~(((/* implicit */int) arr_10 [i_5] [i_5] [6U])))))))));
        var_20 = ((/* implicit */int) (+((~(arr_8 [i_5])))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(2139095040U)))))) : (max((((/* implicit */unsigned long long int) ((short) var_4))), (max((((/* implicit */unsigned long long int) var_10)), (var_0)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241936
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
    var_20 = ((/* implicit */long long int) min(((unsigned char)0), ((unsigned char)136)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */long long int) arr_11 [i_3] [i_3]);
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) 5264675723140514186LL));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 3212066203984522483ULL))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0] [(short)13]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [(short)6] [i_0] [16] [i_2] [(short)6])) : (arr_6 [(_Bool)1] [i_1] [i_1] [i_2 + 2])))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_17))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)4] [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [(unsigned short)11]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0] [3] [i_0]) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((var_9) < (((((/* implicit */_Bool) arr_17 [i_5])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32760)))))))))))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~((~(((/* implicit */int) ((_Bool) arr_5 [i_5] [i_5] [i_5]))))))))));
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) - (16316))))) | (((((((/* implicit */int) (short)-32761)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)24843)) - (24825)))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 2) 
            {
                {
                    arr_28 [i_6] [i_6] [(unsigned short)4] [i_8] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_5 [i_6] [i_8 + 1] [i_7]))), (((((/* implicit */_Bool) (unsigned short)40705)) ? (5494653262268341458LL) : (((/* implicit */long long int) -901875367))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30720)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))) : (0ULL)));
                }
            } 
        } 
        arr_29 [10LL] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) var_10)), (-7464981642777323300LL)));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) var_14)), (arr_7 [i_6] [i_6] [i_6])))), ((~(((((/* implicit */_Bool) (short)-16023)) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) var_16)))))))))));
        var_30 *= arr_20 [(unsigned short)11];
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        var_31 = ((/* implicit */int) arr_31 [i_9]);
        arr_33 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40705)) ? (arr_31 [i_9]) : (-9223372036854775806LL)));
        var_32 = ((/* implicit */unsigned short) (+(arr_31 [i_9])));
        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)32760)) ? (var_6) : (var_6))) < (arr_31 [i_9])));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    arr_39 [i_9] [i_9] [i_11] [i_9] |= ((/* implicit */unsigned short) ((int) arr_36 [i_9] [i_10]));
                    var_34 = ((/* implicit */_Bool) max((var_34), (((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) var_2))))));
                }
            } 
        } 
    }
}

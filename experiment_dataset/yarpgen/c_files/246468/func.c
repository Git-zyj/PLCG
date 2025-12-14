/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246468
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((short) arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]));
        var_14 = ((/* implicit */long long int) var_1);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_8 [0U] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_1]), (((arr_7 [i_1] [0ULL]) >> (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) max((arr_6 [1U]), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1] [i_1]) >= (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_7 [i_1] [11U])) ? (arr_7 [19] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3486646414U))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) max((max((max((arr_5 [i_1]), (3016162995U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */unsigned int) var_8))));
        arr_10 [i_1] [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */int) ((arr_6 [i_1]) <= (((/* implicit */long long int) arr_7 [i_1] [i_1]))))) & (((/* implicit */int) ((1278804283U) > (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4294967283U))));
        var_15 = ((/* implicit */long long int) var_0);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((signed char) arr_18 [i_4] [i_3 + 2] [i_2] [i_2 + 1]));
                        var_17 ^= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 92202787)) : (18105238178065832088ULL));
                        arr_20 [i_4] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_5])) > (arr_6 [i_5]))))));
                    }
                } 
            } 
        } 
        var_18 = arr_16 [i_2] [i_2];
        arr_21 [i_2] = ((/* implicit */signed char) arr_13 [i_2]);
        arr_22 [0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [(short)4] [i_2 + 1])) + (((/* implicit */int) arr_16 [10U] [10U]))));
    }
    for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (10083799119905292623ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))))) ? (((arr_6 [i_6 + 3]) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_6 + 2])) ? (arr_7 [i_6] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9437290776471285985ULL)) ? (((/* implicit */int) (_Bool)1)) : (-2082336989))))));
        arr_27 [i_6] = ((/* implicit */unsigned int) (~(((long long int) 2082336992))));
    }
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1488087776727964297LL)), (8362944953804259020ULL)));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_8])) - (var_5)))), (var_9)))) ? ((+(max((((/* implicit */unsigned int) var_0)), (arr_28 [i_8]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8 + 2] [i_8 + 1])) ? (((/* implicit */int) arr_30 [i_8 + 2] [i_8 + 1])) : (((/* implicit */int) arr_30 [i_8 + 2] [i_8 + 1])))))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    arr_36 [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_30 [i_7] [i_9 + 1])) + (2147483647))) << (((var_10) - (3167882388968834706LL))))))))), (((((/* implicit */_Bool) arr_35 [i_7] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_9 + 1] [i_8 + 3] [i_8 + 4] [i_8 + 3]))) : ((~(7106946924318506834ULL)))))));
                    arr_37 [i_7] [i_8] [i_7] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-12023)) ? (3391893711019641660LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-25)))))));
                    arr_38 [14] [14] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 13835058055282163712ULL))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    arr_42 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((long long int) var_5)) + (9223372036854775807LL))) << (((((/* implicit */int) ((_Bool) 12121259495519903068ULL))) - (1)))));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_7] [i_8 - 1] [i_10])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_43 [i_7] [20ULL] [i_8 - 1] [i_11] [i_7])) > (3391893711019641655LL)));
                        var_24 += ((/* implicit */unsigned int) ((arr_39 [i_8] [i_8 + 3] [i_8]) & ((+(2305843007066210304LL)))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) arr_45 [8ULL] [i_7] [i_7] [i_8] [i_10] [(unsigned char)10])))))) == (((((/* implicit */_Bool) (short)12014)) ? (((/* implicit */unsigned long long int) arr_32 [i_8 - 1] [i_8 - 1] [i_11])) : (arr_31 [9LL])))));
                    }
                }
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8 + 4])) ? (((/* implicit */int) arr_29 [i_8 + 3])) : (((/* implicit */int) arr_29 [i_8 + 3]))))))))));
            }
        } 
    } 
}

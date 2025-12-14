/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19442
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (-(arr_0 [i_0])));
        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13354442469312421697ULL)) ? (255) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */long long int) arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (-(arr_3 [i_1 - 3] [i_1 + 1] [i_1 + 1]));
                    arr_10 [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((var_9) ^ (arr_1 [i_2] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 11702731741347572409ULL)) ? (6744012332361979219ULL) : (((unsigned long long int) var_9))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (var_3))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(2147483645)))) : ((((_Bool)1) ? (arr_2 [i_3]) : (5092301604397129918ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3]))))) < (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))))));
            arr_18 [i_3] [i_3] [i_4] = ((/* implicit */signed char) 13354442469312421697ULL);
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_15 [i_6 + 3])) && (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_4] [i_3]))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_6] [i_6 + 1] [i_6 + 3]) & (arr_7 [i_4] [i_6 - 1] [i_6 + 3])))) ? (((arr_7 [i_3] [i_6 + 1] [i_6 + 3]) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 3]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-22210)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            arr_31 [i_7] = 4191327763U;
                            arr_32 [i_3] [i_4] [i_7] [i_4] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_4] [i_7] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])) ^ (((/* implicit */int) arr_28 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1])))))));
                            arr_33 [i_3] [i_8 - 1] [i_7] [i_7] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) 1330485450);
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) arr_8 [i_3] [i_3] [i_3] [i_3]);
            }
        }
        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_36 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_4 [i_3]);
            var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_21 [i_10] [i_10] [i_3] [i_3])))));
        }
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    {
                        arr_44 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3]))) / (arr_7 [i_3] [i_11] [i_13]))), (((/* implicit */long long int) (-(((((/* implicit */int) arr_5 [i_11] [i_12] [i_13])) + (((/* implicit */int) arr_39 [i_3] [i_11] [i_11])))))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6107237591470594024LL)) ? (13354442469312421697ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_13 + 1] [i_11]))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_3] [i_14])) || (((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3])))) ? (arr_0 [i_14]) : (((/* implicit */int) arr_16 [i_3] [i_11]))))), (((((/* implicit */_Bool) arr_21 [i_3] [i_14] [i_14] [i_3])) ? (((arr_46 [i_14] [i_3] [i_3]) ? (((/* implicit */long long int) arr_38 [i_11])) : (arr_43 [i_3] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_23 = 5092301604397129918ULL;
            }
        }
        arr_47 [i_3] = ((/* implicit */unsigned short) ((((unsigned long long int) ((arr_35 [i_3] [i_3]) << (((/* implicit */int) arr_46 [i_3] [i_3] [i_3]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_20 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) arr_40 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_41 [i_3] [i_3] [i_3] [i_3])))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
    {
        arr_50 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_15] [i_15] [i_15])) ? (arr_29 [i_15] [i_15] [i_15]) : (((/* implicit */int) arr_45 [i_15] [i_15] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_29 [i_15] [i_15] [i_15])) == (4294967295U)))) : (((/* implicit */int) arr_45 [i_15] [i_15] [i_15]))));
        var_24 |= ((/* implicit */short) max(((~(((((/* implicit */int) (_Bool)1)) << (((arr_7 [i_15] [i_15] [i_15]) + (7648734488689886824LL))))))), (((((/* implicit */int) arr_40 [i_15] [i_15] [i_15])) | ((-(var_2)))))));
    }
    var_25 = ((/* implicit */unsigned short) var_10);
}

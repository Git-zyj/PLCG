/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233925
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-((-(arr_2 [i_0 - 3])))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0 - 2]);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                arr_12 [i_0] [i_1] |= ((/* implicit */_Bool) ((long long int) arr_11 [i_1] [i_1] [i_0 - 2] [i_1]));
                /* LoopSeq 2 */
                for (short i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                        var_19 = ((/* implicit */signed char) (_Bool)1);
                        var_20 ^= ((/* implicit */unsigned short) 1329711489U);
                    }
                    var_21 -= ((/* implicit */unsigned short) ((var_15) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) (unsigned char)227))));
                    arr_18 [i_0] = ((/* implicit */short) ((arr_13 [i_3 - 2] [i_3 - 3] [i_3 - 2] [i_3 - 2]) ? (((/* implicit */unsigned long long int) var_6)) : (var_10)));
                    var_22 *= ((((/* implicit */int) (_Bool)1)) < (-1461960780));
                }
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) 1768868897288256207LL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_24 = ((_Bool) arr_13 [i_0 + 3] [i_0] [16] [i_0 - 1]);
                        var_25 = ((/* implicit */unsigned char) ((arr_21 [i_0 - 3]) / (((/* implicit */long long int) (+(arr_11 [i_0] [i_1] [i_1] [i_1]))))));
                    }
                    var_26 = (~((+(((/* implicit */int) arr_5 [i_0] [i_0])))));
                }
            }
            var_27 = ((/* implicit */unsigned int) (+(-834808431)));
        }
        for (int i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            var_28 -= ((/* implicit */short) 2965255798U);
            var_29 = ((/* implicit */_Bool) min((var_29), (arr_24 [i_0 - 2] [i_0 - 2] [i_7])));
            arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3805613835597469589ULL)) ? (1768868897288256207LL) : (arr_21 [i_7 + 1])));
        }
        for (unsigned int i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            arr_31 [i_0] = (-(((/* implicit */int) (unsigned char)58)));
            var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [14] [i_8 + 1] [i_0 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_16 [i_8 - 1] [10U] [i_8] [10U] [i_0 + 3])) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_5)))))));
            arr_32 [i_0] [i_8 + 1] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_0] [(unsigned short)14] [i_8 - 1] [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
            arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 2] [8LL]))) : (((unsigned long long int) 1329711489U))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_24 [i_0 + 2] [i_0 + 4] [i_0]) ? (((/* implicit */int) arr_24 [i_0 + 3] [(short)10] [i_0])) : (((/* implicit */int) arr_24 [i_0 - 1] [i_9] [i_0]))));
            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_20 [i_0 - 2] [i_0 + 3] [i_0 + 4] [(unsigned short)13] [i_0]));
            arr_39 [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) (signed char)64);
            var_31 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [(unsigned char)2] [i_9] [i_9] [i_0 + 1]))));
            var_32 = var_13;
        }
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        var_33 = (!(((/* implicit */_Bool) arr_40 [i_10] [i_10])));
        arr_42 [0ULL] &= ((/* implicit */unsigned int) ((long long int) arr_9 [i_10]));
    }
    var_34 = max((max((((/* implicit */unsigned long long int) 3956326174U)), (var_10))), (((/* implicit */unsigned long long int) var_16)));
    var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)))), (var_10)));
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        for (signed char i_12 = 3; i_12 < 11; i_12 += 3) 
        {
            for (short i_13 = 3; i_13 < 9; i_13 += 4) 
            {
                {
                    arr_54 [i_12] [i_12 - 3] [i_13 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (max((var_17), (((/* implicit */unsigned long long int) var_11))))))) ? (((((/* implicit */_Bool) 3007319801U)) ? (max((((/* implicit */unsigned long long int) arr_7 [i_12 - 1] [i_12 - 1])), (6997202768724210942ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_13 + 4])))) : (((/* implicit */unsigned long long int) max((((long long int) arr_45 [i_12 - 1])), (max((arr_21 [i_13]), (((/* implicit */long long int) arr_25 [2LL])))))))));
                    var_36 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)29)), ((~(((/* implicit */int) var_8))))));
                    var_37 = ((/* implicit */unsigned char) (+(max((1287647508U), (((/* implicit */unsigned int) arr_10 [10ULL] [i_12 - 3]))))));
                }
            } 
        } 
    } 
}

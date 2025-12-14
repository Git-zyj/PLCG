/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215914
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) 3757419856434323011LL)) <= (2520978903381838193ULL));
        var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 15925765170327713452ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((arr_1 [i_0]), ((unsigned char)255)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */short) 13649709932812800594ULL);
                                var_15 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2918010192U)) / (13649709932812800594ULL)));
                                arr_17 [i_1 + 2] [i_3] [i_1 + 2] [i_4] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (short)-23390)) : (((/* implicit */int) (unsigned char)128))));
                                var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)127)) <= (((/* implicit */int) (unsigned char)205)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (arr_5 [i_1 + 1])));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */unsigned char) 1568480493);
                    var_18 = ((/* implicit */unsigned long long int) (unsigned char)7);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (unsigned char)0);
                        var_20 = ((/* implicit */_Bool) ((arr_13 [i_1] [i_6] [i_6] [i_8]) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_13 [i_1 - 1] [i_6] [i_6] [i_8 - 2]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        for (unsigned char i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                arr_40 [i_9] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */int) 15925765170327713422ULL);
                                var_21 *= arr_35 [i_9] [i_10] [i_11] [i_11] [i_13];
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 2; i_15 < 16; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) arr_12 [i_9] [i_16] [i_15 + 1] [i_15] [i_16] [i_15 + 1]);
                                var_23 -= ((/* implicit */unsigned short) (short)23770);
                                arr_48 [i_10] [1ULL] [i_10] [i_16] = ((/* implicit */short) 4797034140896751032ULL);
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_43 [i_10] [i_10 - 1] [i_10 + 1]), (arr_16 [i_10] [i_10 - 1] [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10])))), (((((8844969464765951971ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9] [i_9]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_10] [i_9])))))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((12300122693868008703ULL) != (((((/* implicit */_Bool) arr_24 [i_9] [i_9])) ? (2520978903381838193ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_16] [i_9]))))))))) - (min((2520978903381838208ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                } 
                arr_49 [i_9] = ((/* implicit */_Bool) 3804296801U);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)21588)) ? (((/* implicit */int) (unsigned char)8)) : (((((/* implicit */_Bool) var_8)) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245958
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) var_10);
                    var_19 = ((/* implicit */int) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) var_6);
                                arr_13 [i_1] [i_4] = 8680654698262153927ULL;
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_11))));
                                var_22 = ((/* implicit */unsigned char) 16127082668328590062ULL);
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)64108);
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned short)3] [i_5]))));
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) | (((/* implicit */int) (short)32766)))) * (((/* implicit */int) (_Bool)1))));
                    var_24 *= ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        arr_28 [i_1] = ((/* implicit */unsigned int) var_4);
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = 4294967295U;
                        arr_30 [i_0] [i_1] [i_8] [i_1] [i_9] = ((/* implicit */int) arr_15 [i_1]);
                    }
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) var_0);
                        var_26 = ((/* implicit */_Bool) var_5);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_36 [i_0] [i_1] [i_8] [i_11] [i_11] = ((/* implicit */unsigned short) var_8);
                        var_27 *= ((/* implicit */short) ((((/* implicit */int) (short)32766)) >> (((var_1) - (13141220465168675800ULL)))));
                        arr_37 [i_11] [i_11] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) var_4);
                    }
                }
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (short)32766))));
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_12]))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 13; i_14 += 2) 
                        {
                            {
                                var_30 *= ((/* implicit */short) (~(((/* implicit */int) arr_33 [i_0] [i_1] [i_12] [10LL] [i_14]))));
                                var_31 = var_5;
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) var_5);
                }
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    var_33 = ((/* implicit */int) 8191U);
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
                        {
                            {
                                var_34 -= ((/* implicit */signed char) ((((/* implicit */int) var_10)) & ((-(((/* implicit */int) arr_15 [i_0]))))));
                                var_35 = ((/* implicit */long long int) var_15);
                                var_36 -= 4301548861661473972ULL;
                                var_37 = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned short) min((var_38), (arr_40 [i_0] [i_1 - 2] [i_15])));
                }
                /* vectorizable */
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((arr_35 [i_0] [i_0] [i_0] [i_18]) | (var_7))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10))))))))));
                    arr_56 [i_1] [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                    var_40 *= ((/* implicit */unsigned short) 3564195800U);
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (-(((/* implicit */int) var_9)))))));
}

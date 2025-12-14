/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47671
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
    var_17 = (_Bool)1;
    var_18 = ((/* implicit */int) 16383U);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_0 [i_0])))), ((+((~(((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))) != (((/* implicit */int) ((16383U) >= (min((((/* implicit */unsigned int) -1886810906)), (4294967295U))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) 519435904);
                                var_21 = ((/* implicit */unsigned char) var_14);
                                arr_14 [i_3] [i_4] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (_Bool)1);
                                arr_15 [i_3] [i_1] [14] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [(_Bool)1] [i_2] [i_5] [i_6] = ((/* implicit */short) (+(2467353995U)));
                                arr_22 [i_0] [7] [i_0] [i_0] [10] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_12 [(short)8]), (arr_12 [i_0])))) ? (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) arr_12 [i_6]))))) : ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0])))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) -1886810904)) : ((~(12224736814682204082ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_0] = arr_1 [i_0] [i_0];
        arr_24 [i_0] [1U] = (+(max((min((6222007259027347526ULL), (((/* implicit */unsigned long long int) (unsigned char)65)))), ((-(var_2))))));
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1937571569U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -519435904)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))));
        arr_27 [i_7] = ((/* implicit */short) 12224736814682204095ULL);
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-9548))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_32 [i_8] [i_8] = var_3;
        arr_33 [i_8] = ((/* implicit */unsigned int) 3);
    }
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            {
                var_24 = -1021045080;
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    arr_44 [i_11] [i_10 + 1] [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_3 [i_11] [i_9] [i_9]), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_45 [i_11] [i_10] [i_10] [i_9] = ((/* implicit */int) 6222007259027347526ULL);
                    var_25 = (+(0U));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max(((~(arr_19 [i_12] [i_12] [i_10 + 1]))), (((int) arr_30 [i_9] [14ULL])))))));
                                arr_52 [i_12] [i_12] [i_10 + 1] [i_12] [i_10 + 1] [i_13] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((int) (unsigned char)10))));
                                arr_53 [i_12] [i_10 + 1] [i_11] [i_11] [i_12] [i_13] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_9]))))) ? (max((((/* implicit */unsigned long long int) (signed char)-116)), (arr_34 [i_10 + 1] [i_10 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_36 [i_9])))))) + (((unsigned int) (-2147483647 - 1))))))));
                                arr_54 [i_13] [i_12] [i_12] [i_12] [i_9] [i_9] = arr_20 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12];
                            }
                        } 
                    } 
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_58 [i_14] [i_10] [i_10] [(signed char)5] = ((/* implicit */_Bool) (~(32767)));
                    var_27 = ((/* implicit */int) max((var_27), (max((min(((-2147483647 - 1)), ((((_Bool)1) ? (-1) : ((-2147483647 - 1)))))), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 217218876))))))))));
                    arr_59 [i_9] [i_9] [i_9] = ((/* implicit */signed char) max(((-(23U))), (((/* implicit */unsigned int) 217218876))));
                    arr_60 [i_9] [i_10 + 1] [i_14] = ((/* implicit */unsigned int) ((int) var_0));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_63 [i_15] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)203)), (arr_41 [i_15] [i_15])));
                    arr_64 [i_9] [i_15] [i_15] = ((/* implicit */unsigned char) var_12);
                    var_28 |= (~(((/* implicit */int) ((_Bool) (signed char)9))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(var_3))), (((/* implicit */unsigned long long int) (~(var_6))))))) ? (((/* implicit */int) var_7)) : (var_6)));
}

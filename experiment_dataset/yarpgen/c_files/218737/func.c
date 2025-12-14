/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218737
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = var_2;
                    arr_9 [i_2] [i_2] [i_2] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_6)) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_1]))))) : (((arr_7 [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((long long int) (signed char)-1));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
        var_20 = ((/* implicit */unsigned int) ((unsigned char) 4238436060U));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)48))));
                    var_22 = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_4] [i_4]));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_22 [i_3] [i_5] = ((long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_5])) || (((/* implicit */_Bool) arr_1 [(unsigned short)15]))));
                        var_23 = ((/* implicit */unsigned long long int) (~(var_6)));
                        arr_23 [i_3] [i_4] [i_5] [(signed char)2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3] [i_3])) - (((/* implicit */int) var_17))));
                        arr_24 [(short)16] [i_3] [i_4] [(short)16] [i_6] |= ((/* implicit */long long int) ((_Bool) (signed char)104));
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_29 [i_3] [i_3] [i_4] [i_7] [13U] [i_7] [i_8] = ((((((long long int) arr_17 [i_5] [i_8])) + (9223372036854775807LL))) << (((var_9) - (15753966553656366179ULL))));
                            arr_30 [i_8] [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) 56531236U))))) : (((/* implicit */int) var_17))));
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1] [2U] [i_7]))));
                        }
                        var_26 = ((/* implicit */long long int) ((unsigned int) arr_26 [i_3] [i_4] [i_4] [i_7 - 3] [i_3]));
                        var_27 = var_3;
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned long long int) var_6))))))) % (((long long int) ((signed char) 2870515142U)))))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_0 [i_9] [i_9]))));
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_31 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) -2147483644))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)55662), (((/* implicit */unsigned short) (signed char)68)))))) : (((((/* implicit */unsigned int) var_6)) ^ (1900956667U))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_10])) ? (((/* implicit */int) arr_4 [i_10])) : (((/* implicit */int) arr_4 [i_10])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) var_7);
                        arr_44 [i_13] [i_12] [i_10] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_13] [i_11] [i_12])) + ((+(((/* implicit */int) arr_5 [i_10] [i_10] [i_12]))))))) : (min((((var_15) / (((/* implicit */unsigned long long int) arr_6 [i_13] [i_13])))), (((/* implicit */unsigned long long int) max((var_11), (var_7))))))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_40 [i_10]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                {
                    arr_51 [i_10] [i_14] [9ULL] [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_42 [i_10] [i_10] [(unsigned short)6] [i_10])))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) max((var_34), (arr_37 [i_16] [i_16] [i_15])));
                                arr_57 [i_17] [i_10] [12] [i_10] [i_10] &= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) ((signed char) var_10)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                                var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((arr_34 [i_14] [i_15]), (((/* implicit */int) var_13))))) - (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_36 = ((/* implicit */_Bool) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)65)) || (((/* implicit */_Bool) var_13))))))));
}

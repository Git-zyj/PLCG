/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213878
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] |= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) 393216)), (268435456U))), (((/* implicit */unsigned int) arr_4 [i_1] [i_0]))));
            var_11 = ((/* implicit */signed char) min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (0ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (512ULL)))))))));
            arr_6 [i_1] = ((/* implicit */unsigned char) (!(((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_9)) + (118))))) < (((/* implicit */int) arr_1 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (signed char)118))))) / (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2]))))))));
            var_12 = ((/* implicit */signed char) var_2);
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_13 = ((/* implicit */short) ((unsigned int) min((((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_3])))))));
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])), (var_2)))) || (((/* implicit */_Bool) arr_3 [i_3] [i_3])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_15 |= ((/* implicit */unsigned short) arr_10 [i_3] [i_3]);
            var_16 = ((unsigned long long int) 3724417150U);
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))) : (var_2))))));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 1713559238U))) ? (((long long int) arr_20 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) var_6)))))));
                    }
                } 
            } 
            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_3] [i_3])));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (short i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (signed char)-118);
                                var_21 = ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) ((((/* implicit */int) max((arr_26 [i_10] [i_10] [i_7] [i_10]), (var_4)))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_9] [i_9] [i_7] [i_9])) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_7])))))))));
                                var_22 -= ((/* implicit */signed char) arr_28 [i_7] [i_7]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((max((((/* implicit */int) arr_23 [i_7])), (((((/* implicit */int) arr_26 [i_9] [i_9] [i_7] [i_9])) + (((/* implicit */int) var_6)))))) != (min((((/* implicit */int) arr_32 [i_7] [i_7] [i_7] [i_7])), (arr_22 [i_7] [i_8])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)4), ((unsigned short)65531)))) >> (((arr_29 [i_15]) & (((/* implicit */int) min((((/* implicit */unsigned short) arr_30 [i_15] [i_12] [i_12])), (var_6)))))))))));
                                arr_42 [i_13] [i_12] [i_15] [i_14] [i_15] [i_7] = min((((unsigned long long int) 17945305274517563407ULL)), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)199))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) 0ULL);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 21; i_16 += 1) 
        {
            arr_45 [i_7] [i_16 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_36 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))));
            arr_46 [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((short) arr_28 [i_16 + 2] [i_16 + 2]))), (max(((unsigned short)65535), ((unsigned short)6127)))));
            var_26 = ((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_16 - 1] [i_16 - 1] [i_16] [i_7])), (((((/* implicit */int) arr_30 [i_7] [i_16 + 3] [i_16 + 2])) + (((/* implicit */int) (unsigned char)4))))));
        }
        var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)59427)) ? (arr_36 [i_7]) : (var_2))), (((/* implicit */unsigned long long int) 931552523U))));
    }
    var_28 |= ((/* implicit */short) ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 524256)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7))))));
}

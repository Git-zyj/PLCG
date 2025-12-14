/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204269
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_1);
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((short) max((((/* implicit */long long int) arr_1 [(unsigned char)0])), (var_12)))))));
        arr_3 [i_0] = arr_1 [i_0];
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
            var_21 |= ((/* implicit */unsigned short) ((63) + (((/* implicit */int) arr_9 [i_2 - 1]))));
        }
        arr_11 [i_1] = ((/* implicit */unsigned int) 2094386967);
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 23; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_3))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_2);
                                arr_26 [i_3] [i_3] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((arr_23 [23U] [i_3] [i_3] [i_3]) | ((~(((/* implicit */int) var_8))))));
                                arr_27 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned short) arr_14 [i_3 + 2]));
                                var_23 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_15 [i_3])) < (-2094386956))));
                            }
                        } 
                    } 
                    var_24 &= (!(((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 - 3] [i_3 + 2] [i_3 - 4] [i_3 - 1])));
                    arr_28 [i_3] [i_3 - 4] [i_3] = ((/* implicit */_Bool) arr_15 [i_5]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_25 = ((((/* implicit */int) ((short) var_15))) == (((/* implicit */int) var_5)));
        arr_31 [i_8] = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        for (signed char i_10 = 3; i_10 < 21; i_10 += 3) 
        {
            for (int i_11 = 3; i_11 < 22; i_11 += 1) 
            {
                {
                    arr_39 [i_11] [i_10] [i_10] [i_9] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) (signed char)-1)) : (-2094386956))));
                    arr_40 [i_10] = ((/* implicit */unsigned int) ((unsigned short) -2094386957));
                    arr_41 [i_10] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 2094386961)), (max((((/* implicit */unsigned int) ((2094386952) + (((/* implicit */int) arr_21 [i_9] [(short)1] [i_9]))))), (((((/* implicit */_Bool) var_16)) ? (arr_22 [i_9] [i_9] [i_9] [(unsigned char)13] [i_9]) : (arr_35 [i_9] [i_10])))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) arr_44 [i_11 - 2] [i_11] [i_11 - 3] [i_10 + 2]))), (((unsigned long long int) arr_12 [i_11 + 1] [i_10 + 1]))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_19 [i_9] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_35 [i_13] [i_10]))))))) : (((((/* implicit */_Bool) ((unsigned char) 4294967288U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_10] [i_10 - 3] [i_10 - 2] [i_10 + 3]))) : (max((arr_17 [i_10]), (((/* implicit */unsigned int) -2094386951))))))));
                                var_28 = ((/* implicit */short) ((unsigned char) (+(arr_13 [i_10] [i_10 + 2]))));
                                arr_49 [18U] [i_10] [18U] [i_10] [i_9] &= ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                    arr_50 [i_9] [i_10] = ((/* implicit */_Bool) (short)5347);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_17))));
}

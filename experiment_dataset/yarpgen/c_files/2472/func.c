/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2472
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
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 10231413254252866983ULL))) ? ((((+(((/* implicit */int) (_Bool)1)))) * ((+(((/* implicit */int) (unsigned char)8)))))) : (((/* implicit */int) arr_2 [i_1] [i_1]))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [19LL] [i_1] = ((/* implicit */_Bool) max(((((-(arr_10 [i_0] [(unsigned char)14] [i_2] [i_2] [i_3] [i_0]))) - (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 4]))) : (410561744836115042LL)))));
                                var_13 = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0 + 3] [i_0] [i_1] = (-(((/* implicit */int) (unsigned char)255)));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+((-(arr_5 [9U]))))))));
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-8))))));
                }
                for (signed char i_5 = 4; i_5 < 18; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (((unsigned long long int) arr_2 [i_0] [i_5 - 4]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_5 - 1] [i_0] [i_5] [i_0 - 4] [i_0]))))) : (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (10035681795156795674ULL))), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)98)))))));
                    arr_19 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ ((~(arr_5 [i_5 - 1])))));
                    arr_20 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((int) -410561744836115048LL))) ? (((/* implicit */int) arr_9 [i_5] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_12)))))));
                }
                /* vectorizable */
                for (short i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_6 - 1] [i_0 - 2] [i_1])) && (((/* implicit */_Bool) ((var_6) ? (arr_21 [i_0] [i_1] [i_6]) : (((/* implicit */unsigned long long int) var_1)))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))))))));
                    arr_25 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 3]))));
                }
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                arr_35 [i_1] [i_8] [0LL] [(unsigned short)1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_8]))))) ? (arr_30 [i_0] [i_0] [i_0 + 3] [i_0 - 4] [i_0 + 3] [i_0 - 2]) : (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))))));
                                arr_36 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) + (9223372036854775807LL))) << (((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) / (var_10)))))) : (((/* implicit */_Bool) ((((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) + (9223372036854775807LL))) << (((((((arr_3 [i_0 - 3] [i_1] [i_0 - 4]) / (var_10))) + (63LL))) - (62LL))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((_Bool) min((var_0), (((/* implicit */unsigned long long int) var_11))))))));
                                arr_37 [i_7] [i_7] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                                arr_38 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((int) max((var_7), (((/* implicit */unsigned short) arr_27 [i_0 + 3] [i_8 - 2] [i_1] [i_0 + 3])))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((unsigned char) ((unsigned char) arr_15 [(unsigned short)9] [i_1] [i_0 - 2])));
                    arr_39 [i_1] [i_0] [i_0] [i_1] = var_3;
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_24 [i_10] [i_10] [i_10] [(unsigned char)2]))));
                    var_20 &= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)92)), (var_2)))) ? (((unsigned long long int) var_0)) : ((+(var_0))))) | (((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */long long int) var_8)))), ((~(410561744836115026LL))))))));
                    var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6369966670696836929LL)))));
                    arr_48 [i_10] [15U] [i_12] = ((/* implicit */short) ((unsigned char) (+(arr_24 [i_10] [i_11] [i_11] [i_10]))));
                }
            } 
        } 
    } 
}

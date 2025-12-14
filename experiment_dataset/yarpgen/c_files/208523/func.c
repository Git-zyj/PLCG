/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208523
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = (-((-(var_11))));
        var_20 = ((/* implicit */unsigned long long int) -2090683286);
        var_21 = ((/* implicit */unsigned char) var_8);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_8 [(unsigned short)4] [3] = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
        var_22 = ((((/* implicit */_Bool) arr_0 [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1 - 2])));
        var_23 = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_1 - 1]));
        arr_9 [i_1] = ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [4]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_17 [i_2] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_2] [3U] [i_3])) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))))));
            arr_18 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), ((-((~(((/* implicit */int) arr_10 [i_3]))))))));
            var_24 -= ((/* implicit */unsigned short) ((((((long long int) var_15)) / (max((((/* implicit */long long int) arr_2 [i_2])), (292654422073742829LL))))) >> (((((((/* implicit */_Bool) -1840931506)) ? (((/* implicit */unsigned long long int) 5655598812126076160LL)) : (13ULL))) - (5655598812126076121ULL)))));
            var_25 = (-(((int) arr_11 [i_3])));
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            arr_22 [16LL] [i_4] |= ((/* implicit */short) 11U);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_17)))), (arr_19 [i_2] [i_2] [i_4])))) ? (max((((/* implicit */long long int) arr_0 [i_4])), (max((((/* implicit */long long int) arr_12 [i_2])), (3631380942670425342LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_16 [i_2] [i_4])))) ? ((~(((/* implicit */int) arr_12 [i_2])))) : ((-(((/* implicit */int) var_10)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_15)))), (((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 0ULL))))));
                arr_25 [i_2] [i_4] [i_5] [i_2] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_4] [i_4] [i_2])) ? (((/* implicit */int) arr_13 [i_2])) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2]))) & (arr_16 [(short)15] [i_2]))) << ((((-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_6]))))))) + (37)))));
                    var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [(unsigned char)18])), (((-759704972566722080LL) + (-2868568861134466735LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? ((-(var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_9])) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) (unsigned short)49515))))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) var_2)), (((/* implicit */unsigned short) arr_20 [i_2]))))))));
                                var_31 = ((/* implicit */short) ((long long int) max((((/* implicit */unsigned int) arr_10 [i_2])), (var_15))));
                                var_32 = ((/* implicit */unsigned long long int) min(((unsigned short)35124), (((/* implicit */unsigned short) (unsigned char)204))));
                                var_33 = ((/* implicit */unsigned int) var_6);
                                var_34 = ((/* implicit */unsigned short) max((((2982509460U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2982509472U)))))))), (((/* implicit */unsigned int) (unsigned short)0))));
                            }
                        } 
                    } 
                    arr_36 [(signed char)12] [i_2] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_2])) && (((/* implicit */_Bool) min((arr_28 [i_7]), (((/* implicit */unsigned int) var_1)))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned int) var_2);
}

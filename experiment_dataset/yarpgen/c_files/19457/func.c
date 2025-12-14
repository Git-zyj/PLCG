/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19457
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_11 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) min((arr_12 [i_0]), (((/* implicit */int) var_6))))) * ((-(var_4)))))), ((-(((((/* implicit */_Bool) 0LL)) ? (-1LL) : (20LL)))))));
                                arr_13 [i_4] [i_1] [i_2] = ((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0]);
                                var_12 = ((/* implicit */unsigned char) ((max((var_2), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_4])) : (arr_12 [i_0]))))) * (((/* implicit */int) ((((/* implicit */unsigned int) (+(var_3)))) >= (var_4))))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (4294967295U)))) - (((var_1) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)83))))) : (((10LL) / (-1LL))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(14LL)))) ? (((/* implicit */long long int) 25)) : (18LL)));
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((int) (+(var_8))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) ? (arr_26 [i_0]) : (((/* implicit */unsigned int) var_3))))) ? ((~(arr_26 [i_1]))) : (((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_26 [i_0])))));
                                var_15 = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_6)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((var_3) + (-320460477)))) : (((((var_10) ? (var_9) : (((/* implicit */unsigned long long int) var_2)))) - (((/* implicit */unsigned long long int) -19LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 4) 
        {
            for (unsigned int i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) (((((+(var_2))) >= (arr_12 [i_10]))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 10LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_10] [i_11 + 1] [20ULL] [i_9]))))))))));
                                arr_39 [i_9] = ((/* implicit */unsigned char) ((((arr_29 [i_10] [i_9] [i_13]) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -19LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)201))))))) < (((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_23 [i_13] [i_12] [i_11 - 2] [i_9] [i_9]))))) : (arr_26 [i_9])))));
                                arr_40 [i_12] [i_12] [(unsigned char)4] [i_10] [(unsigned char)4] [i_12] [i_12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) arr_35 [i_10] [i_11 + 1] [i_12 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) -13LL)) || (((/* implicit */_Bool) 1062409696U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 1) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (~(arr_17 [i_9] [i_11] [i_9] [i_14] [i_15] [i_9] [i_9])));
                                arr_46 [i_9] [i_9] [i_9] [i_11] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((signed char) (unsigned char)49));
                                var_18 &= ((/* implicit */signed char) ((((/* implicit */int) var_1)) << (min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) / (3731536674405526686ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((11693507320545550990ULL) + (((/* implicit */unsigned long long int) -18))))) ? ((~(arr_49 [i_10 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_10 - 2] [i_11 + 1] [(_Bool)0] [i_11 + 1]))))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 815655313U))) ? ((~(var_4))) : (((/* implicit */unsigned int) 25))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13979343320220929041ULL)) && ((_Bool)1)));
                                arr_53 [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (arr_41 [i_10 - 2] [i_11 + 1] [i_17] [(signed char)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10 + 2] [i_11 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

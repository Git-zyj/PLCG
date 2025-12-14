/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243828
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
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) var_5);
                arr_6 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) max((2099267796964813604LL), (-3903467133641140518LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) < (((/* implicit */int) (unsigned short)7546)))))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_1 [i_0]))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (4294967283U) : (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))))));
                arr_7 [i_0] = ((/* implicit */int) var_1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_2 - 4] [i_2 - 4]) : (((/* implicit */long long int) var_11))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                arr_16 [i_2] [i_3] [i_4 + 2] &= ((/* implicit */_Bool) ((var_13) ? (((((/* implicit */int) (signed char)-104)) & (arr_3 [3] [i_2] [i_2]))) : (((/* implicit */int) ((var_13) && (((/* implicit */_Bool) arr_0 [i_4] [2U])))))));
                arr_17 [17] [i_3 + 2] [i_4 + 1] [i_4] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 2] [i_4] [i_3]))) : (2305843009213693951LL));
                arr_18 [i_2] [5U] [i_2] = var_6;
                arr_19 [i_2] [i_3 + 3] [i_4 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2 + 2] [i_3 - 1] [i_2 + 2]))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) ^ (arr_10 [4] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62264)) ? (((/* implicit */int) (unsigned short)7540)) : (((/* implicit */int) arr_0 [i_2] [i_2])))))));
                arr_22 [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((~(var_14))) : (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (unsigned char)209)) : (225160954))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (int i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_29 [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
                            arr_30 [i_2] [i_3] [i_5] [i_6] = (-((+(arr_23 [15] [15] [0] [i_6] [i_6]))));
                            arr_31 [0] [i_3] [2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_14 [i_5] [i_5 - 1] [i_5 - 1]) : (var_9)));
                        }
                    } 
                } 
            }
        }
        arr_32 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)7559)), (arr_4 [i_2 + 2] [i_2] [i_2 + 2])));
        arr_33 [i_2] [(unsigned char)13] = ((/* implicit */signed char) var_0);
    }
    var_19 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) -1);
                            /* LoopSeq 1 */
                            for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                            {
                                arr_46 [i_12] [i_11] [i_10] [i_10] [i_11] [i_8] = ((/* implicit */signed char) 323034303);
                                arr_47 [i_12] [i_11] [i_8] [i_11] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1694020044)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) (unsigned short)6479))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)5790))))), (max((var_14), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) || (((/* implicit */_Bool) ((int) (unsigned char)175)))))))));
                                arr_48 [i_8] [i_9] [i_10 - 1] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * ((-(22)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_16))))) : (((min((-3081795569766352452LL), (var_9))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                            var_20 -= ((((/* implicit */_Bool) ((unsigned short) 2246074370239084387LL))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (-225160934));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((int) ((_Bool) arr_15 [i_9] [i_9] [i_8] [i_8])));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191517
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (min((arr_3 [i_0] [5]), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [2LL] [i_1])) ? (((/* implicit */int) arr_2 [10ULL])) : (((/* implicit */int) (short)12)))) ^ (((/* implicit */int) ((_Bool) 9223372036854775807LL))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [4U] [i_4] [i_2] [4U] [i_4]))) == (9223372036854775807LL))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned short)4] [i_1])) ? (4143637726U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                                var_14 = arr_12 [i_1] [i_1] [i_1] [i_1] [i_1];
                                arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) var_1);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((~(arr_7 [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_2] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 488423460)) ? (((/* implicit */int) var_2)) : (0))) ^ (((((/* implicit */_Bool) 4143637726U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)16864))))));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_0] [i_1] [i_2 + 2]) << (((((-7397981203111405214LL) + (7397981203111405239LL))) - (25LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_8 [i_1] [i_0])))))) : ((-(8375470134114692338ULL)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) arr_0 [i_5]);
                                var_19 = ((/* implicit */_Bool) min((var_19), (arr_12 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6] [i_6])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_5] [i_6 + 1] [i_6 + 2])) << (((((/* implicit */int) ((short) arr_9 [i_6 + 2] [i_5] [i_2] [i_1] [i_0]))) + (30553)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    arr_22 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (((+(151329570U))) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))) << (((((((/* implicit */_Bool) var_6)) ? (13894543132142167725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) - (13894543132142167717ULL)))));
                    arr_23 [5] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_4 [i_7 - 1])))) == ((-2147483647 - 1))));
                }
                for (int i_8 = 3; i_8 < 12; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3760581441U)))))));
                                var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((3760581441U), (((/* implicit */unsigned int) arr_10 [i_10] [i_0] [i_10] [3U] [i_10]))))) ? (((/* implicit */int) arr_11 [i_10] [i_1])) : (((/* implicit */int) ((arr_25 [(unsigned char)3] [i_8] [i_9] [i_10]) <= (0))))))));
                                var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((-8380848211794469195LL) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)6] [i_0]))))))))) ^ ((+(((/* implicit */int) ((signed char) var_9)))))));
                                var_24 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 18018649669759366813ULL)))) + (max((151329569U), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) (+(arr_28 [i_8 + 1] [i_8 + 2] [i_0] [i_8 + 2]))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                    var_25 = ((/* implicit */unsigned short) (((~(((unsigned int) (short)4537)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5395016054352213124ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))));
                }
                for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 1) 
                {
                    var_26 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (-(arr_34 [i_0] [i_1])))))));
                    var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((short) (unsigned short)16855))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [8] [i_11 - 3])) == (arr_28 [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) var_2)))))) % (((/* implicit */int) (unsigned short)29914))));
                }
                var_28 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((long long int) 4552200941567383891ULL))), (((((/* implicit */unsigned long long int) -8380848211794469188LL)) & (4552200941567383891ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_8 [i_0] [i_1])) >= (((/* implicit */int) (signed char)4))))))))));
                /* LoopNest 3 */
                for (signed char i_12 = 2; i_12 < 13; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_0] [i_1] [i_0] [(signed char)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                                var_29 *= (~(((((/* implicit */_Bool) ((12375579931837593693ULL) | (((/* implicit */unsigned long long int) 36028797018963967LL))))) ? (((/* implicit */int) arr_2 [i_12])) : (((/* implicit */int) var_3)))));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) ((((((/* implicit */int) (short)(-32767 - 1))) ^ (-796504674))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))));
                                var_31 = arr_30 [i_14] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            {
                var_33 = ((/* implicit */long long int) arr_49 [i_15] [i_15] [i_15]);
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) arr_49 [i_15] [i_16] [i_16])) != (((/* implicit */int) var_5))))))))));
            }
        } 
    } 
}

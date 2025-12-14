/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207966
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), ((~(((/* implicit */int) arr_9 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */int) (((+(((/* implicit */int) (signed char)96)))) >= (((/* implicit */int) ((491520LL) >= (((/* implicit */long long int) 572076339U)))))))) >> (((((/* implicit */int) arr_5 [i_4] [i_4])) - (46570)))));
                                var_14 = ((/* implicit */int) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) 7369607576164579868LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_0]))) : (var_7)))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) 3067151901U);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 3912682921183034229ULL)) ? (((/* implicit */unsigned int) min((2147483647), (-948728743)))) : (max((16383U), (((/* implicit */unsigned int) var_8))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            {
                var_16 -= ((/* implicit */short) -800798019);
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(max((max((((/* implicit */long long int) arr_20 [(signed char)6] [i_8])), (5182981647865615137LL))), (((/* implicit */long long int) var_6)))))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_5] [i_6])) ? (((/* implicit */int) ((min((arr_24 [i_5] [i_6]), (((/* implicit */int) (unsigned char)216)))) >= (((int) arr_25 [i_6] [i_6 - 1] [i_6]))))) : (((/* implicit */int) ((unsigned char) (~(-73586334)))))));
                                var_19 = ((/* implicit */long long int) min((14487905321860605519ULL), (((/* implicit */unsigned long long int) (signed char)53))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)16)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                            {
                                var_21 = ((/* implicit */int) arr_28 [i_12] [i_12] [i_12] [i_12]);
                                arr_42 [i_5] [i_5] [(short)16] [i_6] = ((/* implicit */int) var_5);
                                arr_43 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                            }
                            var_22 = (~(((/* implicit */int) ((((/* implicit */int) (short)384)) != (1333027369)))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_5] [i_6 - 1] [15] [i_6] [i_6])) && (((/* implicit */_Bool) arr_29 [7LL] [i_10] [i_10]))))), (var_0)))) == ((~(arr_20 [i_10] [i_10])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) arr_40 [i_5] [13] [i_6] [i_6] [(unsigned short)14]);
                var_25 = ((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_6] [i_6]));
            }
        } 
    } 
}

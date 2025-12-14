/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2136
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
    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(0ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (signed char)1)) : (-1)))) ? (min((var_13), (((/* implicit */long long int) (unsigned short)48804)))) : (var_1))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_21 = ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_2] [i_1])) ? (-1663418531) : (((((/* implicit */int) arr_6 [i_0] [i_4] [i_2])) * (((/* implicit */int) var_3)))));
                            arr_11 [i_4] [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) var_15);
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1])) ? (((1140904618) / (((/* implicit */int) (unsigned short)40648)))) : (((/* implicit */int) arr_9 [i_0] [8] [i_2] [i_3] [8] [i_4]))));
                            arr_13 [i_2] = ((/* implicit */signed char) var_19);
                        }
                        arr_14 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                        arr_15 [i_0] [i_0] [i_1] [3LL] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]))))) : (((((/* implicit */_Bool) -2085026547)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (17761042326167551682ULL)))));
                    }
                    arr_16 [(_Bool)1] [i_2] [(signed char)8] [i_2] = -1663418515;
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((((/* implicit */long long int) var_7)), ((~(-4622734580572382791LL)))));
                                var_23 = ((/* implicit */unsigned long long int) var_9);
                                var_24 = ((/* implicit */long long int) (+(var_18)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                {
                    arr_28 [i_9] = ((/* implicit */unsigned long long int) -6673392571440850631LL);
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1073741820ULL)))) : (((((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_7])) ? (18446744072635809796ULL) : (((/* implicit */unsigned long long int) var_1)))) << ((((-(arr_10 [i_7] [(unsigned short)11] [i_7] [i_8] [i_9] [i_9] [i_9]))) - (2982445636U))))))))));
                }
            } 
        } 
    } 
    var_26 = 7968140532442492643ULL;
}

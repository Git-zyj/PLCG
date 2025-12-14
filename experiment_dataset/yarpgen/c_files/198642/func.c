/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198642
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551600ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1875677599)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))))) ? (((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) (+(-1517799676)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
                    var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 3])) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41057))) + (-2571006819084944523LL)))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */long long int) arr_6 [i_0] [i_0])), (var_5))))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1]))) + (var_15))) + (6121800471288861862LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            {
                var_20 = ((/* implicit */short) (((+(12822882559877164819ULL))) < (((/* implicit */unsigned long long int) -830883272944034746LL))));
                var_21 = ((/* implicit */unsigned short) (+(((arr_10 [i_3 - 3]) ^ (arr_10 [i_3 - 2])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_13 [i_4] [i_4] = -1708561856;
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)-5045))));
                                arr_20 [i_3 - 2] [i_3 - 2] [i_4] = ((/* implicit */signed char) (~(var_13)));
                                arr_21 [i_3] [i_4] [i_5] [i_6 + 1] [i_7] [1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)138)) && ((_Bool)1)));
                                arr_22 [i_3 + 2] [i_3 + 1] [(signed char)2] [i_5] [i_5] [i_6] [i_7] &= ((/* implicit */_Bool) (-(((818457499U) << (((2147483647) - (2147483631)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 3; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_8 [i_9]);
                                var_24 = ((/* implicit */long long int) (~(14U)));
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_25 = ((/* implicit */signed char) var_7);
                    arr_30 [(unsigned char)0] [i_4] [i_4 + 1] [(unsigned char)0] |= ((/* implicit */signed char) var_15);
                    arr_31 [i_4] = ((/* implicit */signed char) (-(arr_16 [i_10] [i_4 - 2] [i_4 - 1] [i_3] [i_3 - 1])));
                    var_26 |= ((/* implicit */short) 14U);
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 4; i_11 < 11; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) (-(min((10085967236787939928ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_28 ^= ((/* implicit */unsigned short) max((((arr_17 [i_3] [i_4 - 3] [i_11 - 1] [i_3 - 1] [i_12]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_12] [i_11 + 1] [i_4 - 2] [i_3 - 2] [i_3 - 2]))))), (((((((/* implicit */_Bool) arr_7 [i_4] [i_11 - 1])) ? (arr_27 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_4] [i_4] [i_3 + 1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22)))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */long long int) (-2147483647 - 1))) / (-830883272944034738LL))))));
                            var_30 = ((/* implicit */unsigned int) ((unsigned short) ((max((((/* implicit */unsigned long long int) 0LL)), (16959425136242158870ULL))) + (8541998289970877149ULL))));
                        }
                    } 
                } 
                arr_36 [i_4] [i_4 + 2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_15))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 17; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            {
                var_31 = ((/* implicit */short) var_0);
                arr_42 [i_13] = ((/* implicit */short) max((10495084063088504415ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-92)) < (((/* implicit */int) (unsigned short)38919)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) (short)-9199)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14))))))))));
}

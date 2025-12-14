/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4527
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2 + 1] [i_2 - 2])), (arr_4 [i_2 - 3] [4U] [i_2 - 2]))) >> (((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 3325237727U)) : (var_1))) ^ (((((/* implicit */_Bool) 969729568U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))) - (3325237707ULL)))));
                    arr_9 [i_0] [i_0] [1U] [i_1] = ((/* implicit */unsigned long long int) max((arr_8 [i_2] [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -2014330936)) || (((/* implicit */_Bool) var_16))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_14);
    var_19 = ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max(((-(arr_12 [i_3] [i_3]))), (((((/* implicit */int) (unsigned short)12990)) % (((/* implicit */int) (short)16998))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) var_15);
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)12994)) : (((/* implicit */int) (short)26625)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)2] [(unsigned short)2])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (unsigned short)12994)))) : (var_0)))) : (3325237701U)));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_22 += ((/* implicit */signed char) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_17 [i_4] [i_5] [i_6])) : (((/* implicit */int) arr_17 [i_7] [19] [i_4])))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [(signed char)11]))))), (((((/* implicit */_Bool) (short)16394)) ? (760493401U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) 969729577U)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) >= (14178308686641508783ULL)))), ((~(14178308686641508787ULL)))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (((min((arr_24 [i_4]), ((_Bool)0))) ? (((/* implicit */unsigned int) 1533414668)) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) | (arr_19 [i_7] [i_7] [i_7]))))))))));
                            var_25 = ((/* implicit */unsigned short) arr_15 [i_8 - 1]);
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_32 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6575367683971232307ULL)) ? (1160447452U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (unsigned short)52542))));
                            var_26 = ((/* implicit */short) min((var_26), ((short)16394)));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(max((6575367683971232308ULL), (((/* implicit */unsigned long long int) max((2518097335U), (3534473895U)))))))))));
                            arr_33 [i_9] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) ((2361060473U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10186)))));
                        }
                        arr_34 [i_4] [i_4] [i_7] [i_5] [i_6] [(_Bool)1] &= ((/* implicit */unsigned long long int) arr_21 [i_4]);
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */short) (((~(arr_22 [i_6] [i_4] [i_6] [i_6] [i_5] [i_4]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_5] [(short)4]))))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (unsigned short)12994))));
                        arr_37 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_4]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_40 [i_5] [i_5] [i_6] [i_11] [i_5] [i_4] = (-(((/* implicit */int) (short)16391)));
                        var_30 = ((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4]);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_14);
                        var_32 = ((/* implicit */short) arr_42 [(short)3] [i_5] [(short)3] [i_12]);
                        arr_44 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_14)))))));
                        arr_45 [i_4] [i_5] [i_4] [i_12] = ((/* implicit */unsigned short) 3325237728U);
                        arr_46 [i_4] [i_5] [3U] [i_4] = ((/* implicit */int) 3534473895U);
                    }
                    arr_47 [(signed char)16] [i_4] [2ULL] = ((/* implicit */unsigned short) 3325237727U);
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) == (2518097335U)));
                    var_34 ^= ((/* implicit */unsigned long long int) (signed char)127);
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-16392)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_31 [i_6] [(short)6] [i_5] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)3))))))))))));
                }
            } 
        } 
    }
}

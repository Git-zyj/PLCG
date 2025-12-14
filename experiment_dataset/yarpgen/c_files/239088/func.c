/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239088
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
    var_19 = ((/* implicit */short) (~(9223372036854775807LL)));
    var_20 = ((/* implicit */unsigned int) var_18);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_0 [i_0]))) <= (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4681288573893465642LL)) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) (short)24)) ? (-225723234) : (-2147483646)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (3) : (((/* implicit */int) (short)8))))) : (arr_1 [i_0])));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */int) var_6);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18025))) : ((-(var_3)))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_2] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_3 + 2] [i_1] [i_0]))));
                    }
                } 
            } 
            arr_13 [i_0] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [2LL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_8 [i_0] [i_1] [i_1] [i_1])));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((arr_9 [i_0] [i_0]) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)88))))))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_4 [3ULL] [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_18)))))) * ((-(((/* implicit */int) (short)7033))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)232)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1781)))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0])))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_9 [i_0] [i_0]))));
        }
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((signed char) (+(arr_1 [i_0]))));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)1)))) + (((((var_0) + (2147483647))) >> (((/* implicit */int) var_7))))));
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_0] [i_0])))));
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-792)) ? (((/* implicit */long long int) -4)) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_16)) ? (arr_10 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22525))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6])))));
            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_0)) : (arr_10 [i_0])));
        }
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) arr_15 [i_7] [i_7] [i_7])))) >> (((((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) - (8278960613418515366ULL)))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [(_Bool)1] [i_7]))))) ? (arr_14 [i_7]) : ((-(arr_21 [i_7] [i_7] [i_7])))));
    }
    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
    {
        var_33 = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 7797375349825550035LL)) ? (((/* implicit */unsigned int) -3)) : (1481339645U))) : (((/* implicit */unsigned int) 488354242))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18034)) != (((/* implicit */int) (short)-7024))))), (-8372323592771097431LL))) : (((/* implicit */long long int) 4294967279U)));
        var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)779)));
        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8 - 1] [i_8 + 2]))) <= (arr_21 [i_8 + 1] [i_8 + 2] [i_8 + 1]))))));
        /* LoopSeq 3 */
        for (signed char i_9 = 2; i_9 < 21; i_9 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) var_4);
            var_37 ^= ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned int) var_11)), (arr_21 [i_8] [i_9 - 2] [i_8]))), (((/* implicit */unsigned int) min((arr_6 [i_8] [i_8] [i_8]), (var_7)))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (var_3)))) ? (((((/* implicit */int) var_16)) + (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_22 [i_9 - 1] [i_9])))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_35 [i_8] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_16)), (((unsigned long long int) (-(((/* implicit */int) arr_30 [i_8])))))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 2; i_11 < 21; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    {
                        arr_43 [i_8] [i_12] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_8 + 2]))))) >= (((/* implicit */int) ((short) arr_14 [i_10])))));
                        var_38 -= ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) (short)18)), (min((arr_28 [i_12]), (((/* implicit */unsigned long long int) var_16))))))));
                    }
                } 
            } 
            arr_44 [11ULL] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) ((unsigned short) var_12))))))));
        }
        for (long long int i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            arr_47 [i_8] = ((/* implicit */unsigned char) ((((var_14) != (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8] [i_13] [i_13 - 1]))))) ? ((-(((-1277967394907135316LL) + (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_8]))))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_3)) ? (8029174592569994437LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_8])))))))));
            var_39 |= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_13 + 1] [i_8 + 1] [i_8 + 2]))))));
            arr_48 [i_8] [i_8] [i_13] = ((/* implicit */unsigned long long int) arr_10 [i_8]);
            var_40 = ((/* implicit */long long int) (unsigned char)23);
        }
        var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)19))));
    }
    for (short i_14 = 1; i_14 < 18; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    var_42 = ((/* implicit */signed char) ((unsigned short) ((unsigned char) -488354269)));
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (max((281474943156224ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15))))) / (((/* implicit */int) ((unsigned char) var_14))))))))));
                }
            } 
        } 
        var_44 = ((/* implicit */short) var_9);
    }
}

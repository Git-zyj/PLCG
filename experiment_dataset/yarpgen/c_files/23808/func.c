/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23808
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
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) ((short) var_0)))))) > (((((1531315471913157167LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_4 [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */_Bool) var_4);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_5)))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_2 [i_0 - 1])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
                                arr_19 [i_1 + 2] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_7)))))) >= (((unsigned int) var_1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)121)))) > (((/* implicit */int) ((_Bool) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_12 = ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [(signed char)3] [i_1] [i_2] [i_5] [(short)10]))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [4] [4] [4] [i_6])))) : (((/* implicit */int) (!(arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_25 [i_5] [i_5] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_14 [6U] [6U] [7] [i_0 - 2])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_16 [(unsigned char)12] [i_1 + 2] [i_1 + 2] [i_5] [i_6]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [(unsigned short)8])) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (_Bool)1))))) : (((((((/* implicit */_Bool) arr_7 [(short)21] [(short)21])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_5] [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))));
                                var_13 = ((/* implicit */unsigned short) arr_22 [(unsigned char)18] [i_0 - 1] [(_Bool)1] [13LL] [i_0 - 3]);
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_1 + 1] [i_1] [14ULL] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) var_9)), (arr_21 [i_1 - 1] [i_1] [i_1 - 1] [i_0 + 2] [i_0 + 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned short)0] [i_7])) && (((/* implicit */_Bool) arr_7 [i_7] [i_7]))));
        arr_30 [i_7] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (var_3));
        arr_31 [i_7] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned long long int) var_10)) <= (arr_7 [(short)5] [i_7]))));
        arr_32 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]) << (((var_8) - (443583979))))) : (((/* implicit */unsigned long long int) (~(var_0))))));
    }
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (var_10))))) ? (var_10) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 298755041643553240ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23420))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (long long int i_10 = 1; i_10 < 6; i_10 += 2) 
            {
                {
                    arr_41 [i_9] = ((/* implicit */_Bool) (+(6667318698552879456LL)));
                    arr_42 [i_10 + 4] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)119)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8]))) : (var_5)));
                    arr_43 [i_8] [i_9] [i_8] = ((/* implicit */_Bool) (+(var_8)));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((int) arr_17 [i_8] [i_9] [(unsigned char)9] [i_9]));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned char)238))) >> (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    arr_48 [i_10] [i_10] [6LL] [i_10 + 1] = ((/* implicit */unsigned long long int) ((1011178801535293921LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2152887483U)) && (((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
        arr_49 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_21 [16U] [i_8] [16U] [i_8] [(short)5]) : (arr_21 [i_8] [i_8] [i_8] [3U] [i_8])));
    }
    var_17 = ((/* implicit */long long int) var_5);
}

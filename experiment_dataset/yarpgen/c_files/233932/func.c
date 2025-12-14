/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233932
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
    var_11 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((2409506863466982809ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_2 [i_0 - 2]))));
        var_12 = ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(unsigned short)1] [i_2] = ((((/* implicit */_Bool) 21789439U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [0LL] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)20570))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_13 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_4)) : (var_2)))));
                        arr_13 [i_3] = ((/* implicit */unsigned char) 9834476689891269942ULL);
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])) ? (var_5) : (var_5))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_15 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_1 - 1])) : (var_0)));
                        arr_14 [i_3] = ((/* implicit */long long int) var_5);
                    }
                    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        var_16 -= ((/* implicit */signed char) ((arr_1 [i_0 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4 - 1] [i_4 + 3] [i_4] [i_4])))));
                        var_17 ^= ((int) ((((/* implicit */int) (signed char)124)) + (((/* implicit */int) var_9))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 4])) - ((-(var_5)))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        arr_19 [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_5] [i_5]))))) == ((~(var_7)))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((short) ((1457455106U) != (arr_6 [12LL]))));
        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) arr_8 [i_5] [i_5] [(_Bool)1]));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                {
                    arr_26 [(_Bool)1] [i_6 - 1] [(unsigned short)12] = ((/* implicit */unsigned long long int) arr_0 [i_5 + 4]);
                    var_20 = ((/* implicit */short) (~(arr_12 [5] [i_7 + 1] [i_7])));
                    arr_27 [i_7] [i_6 - 2] [i_6] [i_5 + 2] = ((/* implicit */short) ((1996100022U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7])))));
                    var_21 = ((/* implicit */long long int) (~(((unsigned int) arr_10 [i_7] [i_7] [i_5] [i_7] [i_5]))));
                    var_22 = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 4) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */long long int) 21789439U);
        arr_31 [i_8 + 1] [i_8 + 1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_8])) != (var_6)))) >> (((((((/* implicit */_Bool) arr_18 [i_8])) ? (2512611453U) : (((/* implicit */unsigned int) arr_12 [i_8] [i_8] [i_8])))) - (2512611424U)))))) ? ((+(((var_3) + (((/* implicit */unsigned long long int) 4273177856U)))))) : (((/* implicit */unsigned long long int) 4294967278U))));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_23 = ((/* implicit */_Bool) (short)-9552);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                {
                    var_24 += ((/* implicit */short) ((long long int) max((max((((/* implicit */unsigned long long int) 16777215LL)), (17162815371734921572ULL))), (min((arr_33 [i_9] [i_11]), (((/* implicit */unsigned long long int) var_6)))))));
                    var_25 = ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2890164534U)) || (((/* implicit */_Bool) var_7)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40666))) + (var_8))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_10))));
                        arr_41 [i_9] [i_9] [i_11] [i_12] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_9])) << (((((/* implicit */int) var_9)) - (6165)))))) : ((+(var_8))))));
                        arr_42 [i_11] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)64)))))))));
                    }
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (signed char)107))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) var_5);
    }
}

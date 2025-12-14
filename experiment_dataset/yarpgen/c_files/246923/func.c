/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246923
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] = (-(((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)5248))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-5264)) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_0] [i_0]))));
                                var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 9223372036853727232LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [8LL] [i_2])))) != (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 2] [i_2] [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 + 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
        {
            arr_14 [i_5] = ((/* implicit */signed char) var_1);
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_11 = ((/* implicit */short) (~(arr_20 [i_0] [i_5] [i_6] [i_7])));
                        arr_21 [i_0] [i_0] [i_0] [(short)15] [i_5] = ((/* implicit */signed char) ((arr_17 [i_0] [i_5] [i_5] [i_7]) > (arr_0 [i_5])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (arr_17 [i_0] [i_5] [i_5] [i_9])));
                        arr_27 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)166)) * (((/* implicit */int) var_3))))) > (arr_22 [i_0] [i_5] [i_8])));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_9] [i_5] = (+(((/* implicit */int) var_6)));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (arr_22 [i_0] [i_8] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_18 [i_0] [i_5] [i_8] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
        {
            arr_32 [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_24 [16U] [(unsigned char)6])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_5 [22ULL] [i_10] [22ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)16] [i_10])))))));
            arr_33 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_10] [i_0] [i_0])) >> (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
        {
            var_14 = (-(((arr_12 [i_11] [i_11]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            arr_37 [i_11] = ((/* implicit */unsigned int) arr_35 [i_0] [i_11] [i_11]);
        }
    }
    for (unsigned short i_12 = 2; i_12 < 11; i_12 += 2) 
    {
        arr_41 [i_12] |= ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (short)5264)), (-6327185913762745035LL))) / (((((/* implicit */_Bool) var_8)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)5266))))))) | (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_29 [i_12])) == (((/* implicit */int) var_2))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 12; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) arr_12 [i_12] [i_13])) ? (arr_39 [(_Bool)1] [i_13 + 1]) : (((/* implicit */int) (_Bool)1)))))))))));
                        arr_51 [i_13] [i_13] [i_14 + 1] [i_15] = (-(((/* implicit */int) arr_35 [i_12] [i_13 + 1] [i_14 - 1])));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned int) max((var_16), ((-(4294967295U)))));
    var_17 = ((/* implicit */short) var_2);
}

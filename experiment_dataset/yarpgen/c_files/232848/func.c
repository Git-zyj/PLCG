/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232848
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
    var_10 = ((/* implicit */signed char) var_1);
    var_11 |= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [(unsigned short)1] = (((((-(((/* implicit */int) arr_4 [i_0])))) + (2147483647))) >> (((arr_1 [i_0]) - (4105199426U))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_2 [i_0]);
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
            var_13 *= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_3] = var_3;
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [5])))));
                var_15 = (+(arr_11 [i_0] [i_2] [i_0]));
                arr_13 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_3] [5U]))));
                arr_14 [i_0] [(short)1] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3] [i_0]))));
            }
        }
        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_4]);
            arr_18 [i_0] [i_4] |= ((/* implicit */signed char) arr_10 [i_0] [i_4] [i_4]);
        }
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54545))) / (12443180547785101589ULL)));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_18 = ((arr_1 [i_7]) << (((arr_8 [i_0] [3] [i_0]) - (4063559697043378131LL))));
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_19 &= var_2;
                            arr_32 [i_0] [i_5] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */short) var_5);
                            var_20 = ((/* implicit */signed char) arr_30 [i_0] [i_0] [(_Bool)1] [i_0] [i_7] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_21 &= ((/* implicit */long long int) arr_5 [i_0]);
                            arr_36 [i_0] [(short)5] [i_5] [i_6] [(short)10] [i_9] = ((/* implicit */unsigned char) ((arr_30 [i_0] [i_5] [i_5] [2] [i_0] [i_5]) / (arr_30 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9])));
                            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)223))));
                            var_23 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)133)) ? (var_5) : (var_5)))));
                        arr_43 [i_0] [(unsigned char)1] [i_11] [(_Bool)1] = ((/* implicit */_Bool) var_9);
                        /* LoopSeq 3 */
                        for (long long int i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10990)) * (((/* implicit */int) arr_15 [i_0]))));
                            var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [8])) || (((/* implicit */_Bool) arr_41 [(unsigned char)2]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_10] [i_11])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0] [7ULL] [6ULL] [4] [i_13] [i_13] [i_13]))));
                            var_28 *= ((/* implicit */unsigned char) var_0);
                        }
                        for (long long int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) (-(arr_31 [i_0] [i_10] [i_10] [i_10] [i_11] [i_12] [2U])));
                            var_30 &= ((/* implicit */unsigned char) (~(arr_26 [i_0] [i_0] [i_0] [i_0])));
                            var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                        }
                        for (long long int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) var_9);
                            arr_51 [3] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_10] [i_15]))));
                            var_33 = ((/* implicit */unsigned char) arr_5 [i_0]);
                        }
                        arr_52 [i_0] [i_11] [i_10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0] [i_11] [i_12])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned short)10990)) ? (1025480768) : (((/* implicit */int) (signed char)-111))))));
                    }
                } 
            } 
        } 
    }
}

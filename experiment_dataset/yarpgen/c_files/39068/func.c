/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39068
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (short)20108)))));
            var_16 = ((/* implicit */signed char) min((((/* implicit */int) (short)-20108)), ((-2147483647 - 1))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3)))))) : ((-(18446744073709551600ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0]), (var_12))))) : (((long long int) arr_4 [i_0] [(short)8] [i_0]))));
            var_17 = ((/* implicit */int) min((var_1), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2)))))));
            arr_7 [(unsigned char)8] [i_1] |= ((/* implicit */unsigned short) 15ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            var_18 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 3]))) : (var_9));
            var_19 = ((/* implicit */signed char) (-(arr_8 [i_2 + 3] [i_2] [i_2 + 2])));
            var_20 = ((/* implicit */unsigned char) ((arr_4 [i_2 + 3] [i_2 + 4] [i_2 + 4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10777)))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_13 [i_0] [i_3] [i_3]))));
            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) (signed char)-27))))));
            var_23 = ((/* implicit */unsigned int) (-(((long long int) var_0))));
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15ULL)))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_15 [i_0] [i_4]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) (short)-20108))))))))) : (var_8))))));
            /* LoopNest 3 */
            for (short i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_26 -= ((/* implicit */short) var_6);
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_5] [i_4] [i_7])))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 4477618254722304044LL)) ? (arr_17 [i_7] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551600ULL))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) <= (var_2))) ? ((-(arr_22 [i_0] [i_0] [i_4] [i_0] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_12)), (var_15))) == (min((((/* implicit */long long int) (_Bool)1)), (-4477618254722304051LL)))))))));
        }
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) max((((/* implicit */short) (signed char)65)), ((short)971))))))));
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (4292202541571710192ULL))))))), ((+(((/* implicit */int) (short)23142))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 19; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 2; i_9 < 19; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            {
                                var_30 = (_Bool)1;
                                arr_39 [i_8 + 1] [i_8 + 1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) var_12))))) == (arr_32 [i_9 - 2])));
                                arr_40 [i_8] [i_8] [i_8 + 1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12] [i_12] [i_9 + 1] [i_9 + 1]))) - (4477618254722304026LL)));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) ((_Bool) arr_32 [i_10]));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8] [i_8])) ? (arr_33 [i_8 + 1] [i_8] [i_8 - 1] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_8 + 1] [i_8 + 2])))));
        arr_41 [i_8] = ((/* implicit */unsigned char) ((short) arr_32 [i_8 + 2]));
    }
    for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 2) 
    {
        arr_44 [8LL] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (459818649313327533LL)));
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (unsigned int i_15 = 1; i_15 < 9; i_15 += 1) 
            {
                for (unsigned char i_16 = 1; i_16 < 6; i_16 += 2) 
                {
                    {
                        var_33 &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-77)) + (98)))));
                        var_34 = ((/* implicit */int) arr_32 [i_13]);
                    }
                } 
            } 
        } 
        var_35 = max((((/* implicit */long long int) (unsigned short)65535)), (-4477618254722304051LL));
    }
    var_36 = (-(max((((((/* implicit */_Bool) 2798285997847773356ULL)) ? (((/* implicit */unsigned long long int) 4477618254722304020LL)) : (17300427215483733476ULL))), (((/* implicit */unsigned long long int) var_0)))));
}

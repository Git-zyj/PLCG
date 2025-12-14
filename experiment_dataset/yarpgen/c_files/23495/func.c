/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23495
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) var_17);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((var_12), (((/* implicit */long long int) var_18)))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)242);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) ((14735146188685998899ULL) == (16040260269185781561ULL)));
            arr_9 [i_1] [i_0] [i_1 - 1] = ((/* implicit */long long int) (unsigned char)30);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_11);
                            var_22 = ((((/* implicit */_Bool) arr_15 [i_1] [i_3 + 2] [i_4 - 1])) ? (arr_15 [i_1] [i_3 + 2] [i_4 - 1]) : (arr_15 [i_1] [i_3 + 2] [i_4 - 1]));
                        }
                        arr_19 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                    }
                } 
            } 
            arr_20 [i_1] = ((/* implicit */long long int) (~(2406483804523770054ULL)));
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-69)) | (((/* implicit */int) var_9))));
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 9; i_5 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) var_3);
            var_25 = ((/* implicit */short) (~((+(((/* implicit */int) arr_21 [i_0] [i_0] [i_5]))))));
            arr_24 [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_5))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)59))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((unsigned char) 2406483804523770061ULL))));
                            var_28 += ((long long int) ((signed char) 14735146188685998899ULL));
                            arr_33 [i_8] [i_7] [i_0] [i_5 - 2] [i_7] [i_0] = ((/* implicit */unsigned char) 3711597885023552717ULL);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 3) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-127)), ((unsigned char)7)))))) : ((~(((/* implicit */int) ((unsigned char) (signed char)111))))))))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 7; i_12 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (signed char)-4))));
                            arr_46 [i_0] [i_0] &= ((/* implicit */_Bool) ((signed char) min((var_9), ((unsigned char)242))));
                            arr_47 [i_0] [i_9] [i_10] [0ULL] [i_9] = ((unsigned long long int) (unsigned char)0);
                            arr_48 [i_0] [i_9] [i_9] [i_11] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) (signed char)56))))))));
                        }
                    } 
                } 
            } 
        }
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (signed char)53))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
    {
        arr_51 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2406483804523770054ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_36 [i_13] [2]), (var_14)))) ? (((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)1163)) ? (arr_25 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        var_32 *= min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))), (((((/* implicit */unsigned long long int) arr_7 [i_13] [i_13])) | (arr_2 [i_13]))));
    }
    var_33 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    var_34 = ((/* implicit */signed char) min((10546831428641701326ULL), (((/* implicit */unsigned long long int) max((((2273126652U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (unsigned char)0))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205749
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
    var_11 = (-((~(((/* implicit */int) var_6)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-32)), (min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned short)14631))))))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_14 [i_0] [i_3] [i_0] &= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)14648))))));
            arr_15 [(unsigned char)4] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (6998455555867212362LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_0])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))) : ((~(var_9)))))));
            var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_3)))));
        }
        var_14 = ((/* implicit */int) (~((-(min((var_9), (((/* implicit */long long int) var_6))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            arr_18 [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_0]);
            var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_6)), (var_1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ ((+(var_5)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_0] = (i_0 % 2 == 0) ? (((((((/* implicit */int) arr_0 [i_0])) & (var_10))) << (((((/* implicit */int) arr_12 [i_0] [i_0])) + (((arr_1 [i_5]) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5])))))))) : (((((((/* implicit */int) arr_0 [i_0])) & (var_10))) << (((((((((/* implicit */int) arr_12 [i_0] [i_0])) + (((arr_1 [i_5]) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5])))))) + (1087876281))) - (13)))));
            arr_22 [i_0] [i_0] = ((/* implicit */int) arr_16 [i_0]);
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_16 *= ((/* implicit */unsigned long long int) (~(((unsigned int) var_6))));
        arr_25 [i_6] = ((/* implicit */unsigned short) (((!((_Bool)1))) && (((/* implicit */_Bool) max((min((arr_23 [i_6] [i_6]), (arr_23 [i_6] [i_6]))), ((~(arr_23 [i_6] [i_6]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] = var_7;
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((9934909549131713385ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 419501375416375006ULL)))))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_9 = 2; i_9 < 15; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 16; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_39 [i_8] [15U] [i_10 + 1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_33 [i_10 + 1] [i_8] [i_11] [i_9 - 1])))) ? (((/* implicit */long long int) min((arr_33 [i_10 + 1] [i_9] [(signed char)5] [i_9 - 1]), (var_10)))) : (var_9)));
                        arr_40 [7ULL] [i_9] [i_10 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned long long int) (-2147483647 - 1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_1) : ((-(((/* implicit */int) arr_24 [i_9 + 2] [i_10 + 1]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((var_8) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) arr_26 [i_11]))), (arr_29 [i_8]))))));
                            arr_43 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */int) arr_37 [i_8] [i_9] [i_10 + 1] [i_11] [i_11]);
                            var_19 = ((/* implicit */_Bool) ((unsigned short) (!(((((/* implicit */int) (unsigned short)1)) < (((/* implicit */int) var_3)))))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [4ULL]))) == (var_5)))) : ((+((-2147483647 - 1))))))));
                    }
                } 
            } 
            arr_44 [i_8] = ((/* implicit */int) ((unsigned int) var_4));
        }
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_31 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_45 [i_8] [i_8])), ((unsigned short)3139)))))))))))));
                arr_49 [i_8] [(_Bool)1] [i_13] [i_14] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (max((((/* implicit */unsigned long long int) (unsigned short)56213)), (6327918195331745697ULL)))))));
            }
            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (!((_Bool)1))));
        }
        /* LoopNest 3 */
        for (short i_15 = 3; i_15 < 16; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    {
                        arr_57 [i_16] [i_16] [i_15 + 1] [i_17] = ((/* implicit */_Bool) arr_29 [i_17]);
                        var_23 = ((/* implicit */long long int) arr_46 [i_8]);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_33 [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_15 - 3]))) * ((~(((/* implicit */int) arr_46 [i_15 + 1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            for (unsigned short i_19 = 1; i_19 < 16; i_19 += 3) 
            {
                {
                    arr_64 [i_18] [0ULL] = (~(var_10));
                    arr_65 [i_8] [i_8] [i_18] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((int) var_2))))));
                    var_25 += (!(((/* implicit */_Bool) ((int) arr_42 [i_8] [i_8] [i_18] [i_18] [i_18] [i_19 + 1] [i_19]))));
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_68 [i_20] [i_18] [i_19] [i_8] = ((/* implicit */unsigned long long int) var_4);
                        arr_69 [i_8] [i_19] [i_19] [5LL] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_18])) ? (((/* implicit */int) arr_59 [i_18] [i_18])) : (((/* implicit */int) ((unsigned short) (unsigned char)244))))))));
                        arr_70 [i_8] [5ULL] [0LL] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-18845))));
                    }
                    /* vectorizable */
                    for (short i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        arr_73 [i_8] [i_18] [i_19] [i_21] = ((/* implicit */int) var_6);
                        arr_74 [i_8] [i_8] [i_18] [i_18] [i_18] [i_18] = (~(((/* implicit */int) (signed char)-116)));
                    }
                    arr_75 [i_8] [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_61 [i_19 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_32 [i_19] [i_18] [i_19])) : (((/* implicit */int) var_7))))))) >= (-4073640206413400561LL)));
                }
            } 
        } 
        arr_76 [i_8] [i_8] = ((/* implicit */_Bool) arr_32 [i_8] [(signed char)15] [i_8]);
    }
}

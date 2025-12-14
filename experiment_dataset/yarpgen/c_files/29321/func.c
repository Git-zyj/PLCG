/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29321
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0])))))) ? (min(((-(arr_2 [4U]))), (((/* implicit */long long int) 92739215U)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0]))))));
                arr_5 [i_0] [i_1] = max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)42442)) >= (25390591))) ? (1948173333U) : (2346793981U)))), (((unsigned long long int) arr_3 [i_1 - 2])));
                arr_6 [(unsigned char)14] = ((/* implicit */unsigned long long int) (((~(min((-9124723435687788893LL), (((/* implicit */long long int) -2135501359)))))) / (((/* implicit */long long int) var_8))));
                var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 270215977642229760ULL)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_12);
    var_17 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            arr_15 [i_3] = ((/* implicit */int) min((-4755645512099964678LL), (((/* implicit */long long int) (_Bool)1))));
            arr_16 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2 + 1]))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_3 - 1]))))));
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_14 [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1]))))) : (((arr_7 [i_3 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 3] [i_2 + 2]))) : (var_1)))));
        }
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_25 [i_2] = (~(((((/* implicit */_Bool) (-(arr_3 [i_5])))) ? ((~(11622688914713552401ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 3]))))));
                        var_18 = ((/* implicit */int) var_3);
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_28 [1LL] [10LL] [1LL] [i_7] = ((/* implicit */long long int) ((unsigned long long int) (+(var_5))));
                        arr_29 [i_7] [i_4] [i_4] [i_2 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_2 [i_2 - 1]), ((+(var_1))))))));
                        arr_30 [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_2 + 2])) ? (((/* implicit */unsigned long long int) (~(-1141082651081564779LL)))) : (min((18176528096067321837ULL), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) max(((~(427247789))), (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_34 [(unsigned short)2] [(unsigned short)2] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 270215977642229779ULL)))))) ^ (var_4))) & (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_31 [i_2 - 1] [i_5])) ? (((/* implicit */int) arr_14 [i_4] [(unsigned char)7])) : (((/* implicit */int) (unsigned short)0)))), (arr_8 [i_2]))))));
                        }
                    }
                    arr_35 [i_2] [i_4] = ((/* implicit */int) arr_10 [i_5 + 2] [i_2 + 2]);
                    var_20 = (-(((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_2] [i_5])), (arr_4 [i_5])))) ? ((+(arr_3 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_12 [i_5]))))))));
                }
            } 
        } 
    }
    for (int i_9 = 2; i_9 < 8; i_9 += 3) 
    {
        arr_38 [i_9] = ((/* implicit */int) var_13);
        var_21 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)1)), (min((((/* implicit */long long int) 0)), (4410651347288358062LL)))))) & (((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_39 [i_9] = min((((7461596773303263400LL) | (((/* implicit */long long int) 1948173333U)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_10)) <= (arr_18 [i_9])))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 2; i_10 < 6; i_10 += 2) 
    {
        arr_43 [(unsigned char)6] = ((/* implicit */_Bool) arr_37 [i_10 - 2] [i_10]);
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            var_22 = ((unsigned long long int) arr_45 [i_11] [i_11] [i_10 + 3]);
            arr_47 [i_10] [i_11] = ((/* implicit */unsigned char) (+(arr_2 [i_10 - 1])));
        }
        for (unsigned long long int i_12 = 2; i_12 < 6; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14076724255599884062ULL)) ? (((/* implicit */long long int) -788526837)) : (4581681199316767980LL)))) ? ((+(((/* implicit */int) arr_14 [i_10] [i_12])))) : (((/* implicit */int) arr_31 [i_10 + 2] [i_12 - 2]))));
                        arr_55 [i_10] [i_10] &= ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) arr_8 [i_10 - 1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (unsigned int i_16 = 3; i_16 < 7; i_16 += 2) 
                {
                    {
                        var_24 *= ((/* implicit */unsigned char) (-(var_6)));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_10 + 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (14076724255599884061ULL)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned int) ((unsigned char) var_1));
                        arr_67 [i_10] [i_12 + 3] [i_17] [i_18] = arr_54 [i_10 - 2] [i_12 + 2] [i_10 - 2] [i_12 + 3];
                    }
                } 
            } 
        }
        arr_68 [i_10] = ((/* implicit */unsigned long long int) (~(var_5)));
    }
}

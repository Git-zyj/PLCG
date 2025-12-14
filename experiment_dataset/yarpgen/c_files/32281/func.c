/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32281
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
    var_14 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                arr_9 [i_1] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)19685)) ? (-1926233441) : (-1926233441))));
                arr_10 [i_1] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_1)))) + (2147483647))) >> (((arr_2 [i_0]) - (2280934285U)))));
            }
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_4 - 2] [i_5] [i_5] = (+(arr_0 [i_5] [i_5]));
                            arr_19 [i_5] [i_5] [i_5] [i_5] [6ULL] = ((/* implicit */long long int) arr_6 [i_1] [i_4 + 2]);
                        }
                    } 
                } 
            } 
            arr_20 [i_1] [i_0] [i_0] = ((/* implicit */short) var_8);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    {
                        arr_33 [i_8] [10] [(short)4] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) 1926233444)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0]))) : (arr_23 [2LL])))));
                        arr_34 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_12 [i_8] [(_Bool)1] [i_6] [1LL])) % (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])));
                        arr_35 [i_0] [i_0] [8U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                        arr_36 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_29 [i_0] [i_8 + 2] [i_7] [i_0] [i_0]))));
                    }
                } 
            } 
            arr_37 [i_0] [i_6] = ((((-1926233441) != (1926233437))) ? (((/* implicit */long long int) var_4)) : (((long long int) arr_25 [i_0] [i_6] [i_6] [i_6])));
        }
        for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            arr_41 [12ULL] = ((/* implicit */short) (unsigned char)229);
            arr_42 [i_0] = min((((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_9])) && (((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_9 + 2]))))))), (((((/* implicit */_Bool) arr_22 [i_9 + 4] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_38 [i_9 + 3] [i_9 + 4] [i_9 + 4])))));
            arr_43 [i_0] [i_9 + 2] = (-((-(var_13))));
            arr_44 [i_0] [i_9] [i_9 - 2] = ((/* implicit */short) arr_22 [i_0] [i_9]);
            arr_45 [i_0] = (short)17763;
        }
        arr_46 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)228)), (arr_1 [i_0] [6LL])))) ? (arr_25 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)8937)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_47 [i_0] [i_0] = ((/* implicit */int) (short)4291);
    }
    for (short i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 8; i_11 += 3) 
        {
            arr_55 [i_11] [i_10] = ((/* implicit */long long int) (+(var_13)));
            arr_56 [i_10] [i_11 - 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_10] [i_10])) : (((/* implicit */int) arr_1 [i_10] [(short)10]))));
        }
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 8; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    arr_62 [9LL] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) -759600876))))) ? (((((/* implicit */_Bool) (short)28114)) ? (var_10) : (((/* implicit */long long int) arr_2 [i_10 + 1])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (arr_54 [i_10]))))))), ((+(((((/* implicit */_Bool) (short)-14840)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_10] [1U] [i_12] [i_13]))) : (var_6)))))));
                    arr_63 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_54 [i_10])) : ((-(arr_23 [i_10]))))))));
                    arr_64 [i_10] [i_10] [i_13] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */short) (!(((/* implicit */_Bool) (~(var_10))))))), (var_7)));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (1926233458) : (var_5)))) ? (((((/* implicit */_Bool) 759600857)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (var_11)))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))))))))));
}

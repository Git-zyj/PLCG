/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52574
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)-13932)) && (((/* implicit */_Bool) (unsigned char)63)))) || (((/* implicit */_Bool) (+(arr_0 [i_0] [4U])))))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (230169592U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))) : (1988305426692580485ULL)))));
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1])))))));
        var_17 = ((/* implicit */int) 1002439447U);
        var_18 = ((((/* implicit */_Bool) (-(4064797703U)))) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1])));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) max((var_0), ((!(((/* implicit */_Bool) 230169592U))))))), ((unsigned char)106)));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) arr_9 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_10 [i_2] [i_2])))) != (((/* implicit */int) arr_10 [i_2] [i_2]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_6 [i_3])))), (((((/* implicit */int) arr_15 [i_3] [i_3])) - ((-(((/* implicit */int) var_10)))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((arr_16 [i_4 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))))) : ((~(arr_16 [i_4 + 2]))))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (signed char i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (max(((unsigned char)59), (((/* implicit */unsigned char) arr_21 [i_6] [i_6] [i_6] [i_6] [i_6 + 3] [i_6])))))))));
                            var_23 = arr_7 [i_5] [i_4 - 1];
                            var_24 = ((/* implicit */unsigned char) ((max((arr_0 [i_5] [i_6]), (arr_0 [i_4] [i_6 + 1]))) < (var_8)));
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_6 - 2] [i_4 - 2])), (var_11))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            arr_26 [i_3] = ((/* implicit */unsigned char) arr_9 [i_3]);
            var_26 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 14284222879748241890ULL))))));
            var_27 += var_2;
        }
        /* LoopSeq 1 */
        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_28 -= ((/* implicit */unsigned int) var_5);
                            var_29 = ((/* implicit */signed char) arr_31 [i_11] [i_9]);
                            var_30 += ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            arr_39 [i_13] [(_Bool)1] [i_10] [(_Bool)1] [i_3] |= (-(var_8));
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_34 [i_11 + 2] [i_11 + 2] [i_13 + 2] [i_13 - 2]))));
                            var_32 -= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_13 - 1])) < ((~(arr_0 [i_10] [12])))));
                            arr_40 [i_9] [i_9] [i_10] [i_9 - 3] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)47)) | (((/* implicit */int) arr_1 [i_10])))) - ((~(arr_29 [i_10])))));
                            var_33 &= ((/* implicit */signed char) arr_27 [i_3] [i_9] [i_10]);
                        }
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) max((arr_23 [i_3] [i_3] [i_10] [i_10] [i_14]), (((/* implicit */unsigned int) var_2))))) >= (var_5))) && (((/* implicit */_Bool) arr_9 [i_3]))));
                            arr_44 [i_3] [i_3] [i_10] [i_10] [i_14] = ((/* implicit */short) (unsigned char)216);
                        }
                        arr_45 [i_10] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_7)))))) && (((/* implicit */_Bool) ((((3953148350U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_3]))))) - (((/* implicit */unsigned int) min((arr_24 [i_3] [i_3]), (((/* implicit */int) (unsigned char)55))))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        {
                            arr_56 [i_3] [i_9 - 1] [i_15] [i_16] [i_17] [i_15] [i_16] = ((/* implicit */long long int) var_4);
                            var_35 = ((/* implicit */short) (~(min((arr_33 [i_3] [i_3] [i_9 + 2]), (arr_48 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_17] [i_9 - 1])))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned char) var_8);
        }
    }
    var_37 = ((/* implicit */unsigned int) var_7);
}

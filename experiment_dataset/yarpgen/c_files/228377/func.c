/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228377
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))));
        var_12 = ((/* implicit */long long int) var_1);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1 + 3]))));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1])))) : (arr_5 [i_1 - 1]))))));
            var_15 = ((/* implicit */unsigned short) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_3 [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                arr_9 [i_0] [i_1 + 3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_1 + 4])) : (((/* implicit */int) var_3))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) ((signed char) (-2147483647 - 1)))) : (((/* implicit */int) arr_6 [i_0]))));
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~(var_8)));
            }
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_15 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */short) (~(-2370609162249098549LL)));
                var_17 = 2370609162249098548LL;
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_22 [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1 + 4] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_1 + 3] [i_5])) : (((/* implicit */int) arr_13 [i_1 + 2] [i_3] [i_3] [i_3]))));
                            var_18 = (+(((/* implicit */int) (short)62)));
                            var_19 -= ((/* implicit */long long int) ((signed char) (((_Bool)1) ? (-1012754949) : (((/* implicit */int) (signed char)87)))));
                            var_20 ^= ((/* implicit */unsigned char) ((-2370609162249098558LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21813)))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)125))))) ? ((~(((/* implicit */int) arr_12 [i_6])))) : (((/* implicit */int) var_10)))))));
            var_22 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0]))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_28 [i_7] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_21 [i_7] [i_7] [i_6] [i_6] [i_0] [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((long long int) var_1)))));
                    arr_32 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (var_8) : (-2370609162249098562LL))))));
                    var_24 = ((/* implicit */unsigned short) ((arr_11 [i_0]) ? (((/* implicit */int) arr_29 [i_0] [i_6] [i_7] [i_8])) : (((/* implicit */int) var_6))));
                }
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_7] [i_9] [i_0] [i_9])))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_11 [i_0]))));
                    var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) (signed char)94)) / (((/* implicit */int) (signed char)-19))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_10 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)111))));
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)96))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2370609162249098562LL)) ? (-155597481) : (((/* implicit */int) arr_6 [i_6]))))) : ((+(2370609162249098548LL)))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 15; i_11 += 2) /* same iter space */
                    {
                        arr_44 [i_0] [i_6] [i_7] [i_0] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (2370609162249098575LL) : (2370609162249098575LL)));
                        var_30 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2370609162249098583LL))))));
                        var_31 = ((/* implicit */signed char) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41767)))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_3))));
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        arr_47 [i_0] [i_6] [i_7] [i_12] [i_9] [i_12] = ((/* implicit */_Bool) (signed char)50);
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3646167740837736994LL)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)-99)))))));
                    }
                    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)168)) && (((/* implicit */_Bool) 3646167740837736994LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6])) || (((/* implicit */_Bool) (unsigned short)21599)))))));
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                {
                    var_35 += var_7;
                    var_36 += ((/* implicit */_Bool) (((~(((/* implicit */int) arr_26 [i_0] [i_6] [i_7])))) ^ (arr_24 [i_6] [i_7])));
                    var_37 -= ((/* implicit */long long int) (~(arr_5 [i_0])));
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (5941103879617970285ULL)));
                    arr_52 [i_13] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (arr_24 [i_0] [i_7]) : (((/* implicit */int) var_9))));
                }
                var_39 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_0]))) ^ (9437392847038548307ULL)));
            }
            for (long long int i_14 = 2; i_14 < 14; i_14 += 4) 
            {
                arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) 1532199750));
                var_40 -= arr_2 [i_0];
                var_41 = (!(((/* implicit */_Bool) arr_38 [i_14] [i_14 + 2] [i_14] [i_14])));
            }
            for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_42 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_38 [i_15] [i_6] [i_0] [i_0])));
                var_43 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)19619)) : (((/* implicit */int) var_4))))));
                var_44 = ((/* implicit */signed char) arr_23 [i_15]);
            }
        }
        arr_60 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)87)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)59)) && (((/* implicit */_Bool) (unsigned short)51616))))) : (((((/* implicit */_Bool) 2370609162249098575LL)) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_45 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1125899906842623LL)) && (((/* implicit */_Bool) (signed char)89)))) && (((/* implicit */_Bool) var_8))));
    }
    var_46 -= var_10;
}

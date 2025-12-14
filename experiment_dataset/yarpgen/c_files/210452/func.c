/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210452
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [(short)21] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))));
                    var_10 = ((/* implicit */long long int) ((unsigned long long int) var_8));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (!(var_0))))));
                                arr_17 [(short)1] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_4])) : (((/* implicit */int) var_8))))));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_4])))))));
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])))));
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_2])));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) var_6);
        arr_20 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)127))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)86)))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        arr_33 [i_5] [i_6] [i_6] [i_8 - 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_2)))) ? (((/* implicit */int) min((var_7), (((/* implicit */signed char) var_0))))) : (((((/* implicit */_Bool) (short)24)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)0))))))));
                        var_15 -= ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_0 [i_5] [(unsigned short)12])))), (((/* implicit */int) ((unsigned char) var_4)))));
                    }
                    for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((arr_3 [i_5] [i_6] [i_5]) ^ (((/* implicit */unsigned long long int) arr_24 [i_5] [i_6])))))) + (min((((var_0) ? (var_2) : (((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_6))))))));
                        var_17 ^= ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [(_Bool)1] [(_Bool)1] [i_9] [i_9])), (var_8)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_6))))))));
                    }
                    arr_36 [i_6] [i_6] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */short) arr_34 [i_7 + 3] [i_7 - 3] [i_7 - 3] [15] [i_7 - 3] [i_7 - 2])), ((short)24)))) ? ((~(((/* implicit */int) arr_26 [i_7 + 1] [i_7] [i_7 + 1])))) : (((/* implicit */int) var_6)));
                    arr_37 [i_5] [i_6] [i_7] [(unsigned char)12] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (unsigned short)57329))))) ? (-551447802) : (((/* implicit */int) max((((/* implicit */short) (signed char)60)), ((short)6848))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_10 = 4; i_10 < 18; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 4; i_12 < 19; i_12 += 3) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) ((short) arr_26 [i_12] [i_12] [i_12 - 3]))) ? (((/* implicit */int) arr_5 [(unsigned short)2] [(unsigned short)2] [i_11])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)4))))));
                        arr_48 [i_5] [i_10] [i_10 - 4] [i_10] [i_12 + 1] = ((/* implicit */int) arr_23 [i_5]);
                        var_19 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (short)24)) ? (((/* implicit */int) (signed char)110)) : (var_4))), ((+(((/* implicit */int) (unsigned char)127)))))) % (((((/* implicit */_Bool) var_1)) ? (max((var_1), (arr_45 [(unsigned char)7] [i_10] [i_10] [i_5]))) : (var_1)))));
                    }
                } 
            } 
            arr_49 [i_10] [i_10 - 1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), ((-(((long long int) var_6))))));
            arr_50 [i_10] = (-(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_10])) ? (var_2) : (((/* implicit */int) arr_9 [i_5] [(unsigned short)22] [i_5] [i_5]))))) - (arr_40 [i_5] [i_10] [i_10 - 1]))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_20 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((~(arr_42 [i_5] [i_13]))), (((long long int) arr_7 [(unsigned short)18]))))) + (((unsigned long long int) min((var_4), (arr_45 [i_5] [(unsigned short)12] [i_5] [i_5]))))));
            arr_53 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5] [i_13] [(unsigned short)17] [i_5] [i_5] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))) ? (max((((/* implicit */long long int) arr_25 [i_13] [1])), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 594298672))))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_45 [i_5] [i_13] [9U] [i_13])))))) : ((+(arr_41 [i_13] [i_13] [i_13] [i_13])))));
            var_21 ^= ((max((((/* implicit */int) max((arr_43 [i_13] [i_13] [i_13] [i_13]), (arr_15 [i_5] [i_5] [i_5] [i_13] [i_13])))), (max((((/* implicit */int) arr_43 [i_5] [i_13] [i_13] [i_5])), (var_1))))) % (((/* implicit */int) arr_5 [i_5] [i_13] [i_5])));
        }
    }
    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) ((signed char) var_2)))) : (((((int) (signed char)94)) ^ (((/* implicit */int) var_8))))));
        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) var_7))), ((+(((unsigned int) arr_24 [i_14] [i_14]))))));
    }
    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
    {
        arr_59 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_55 [i_15]))))));
        var_24 -= ((/* implicit */long long int) arr_29 [i_15] [4U] [4U] [i_15]);
    }
    var_25 &= ((/* implicit */signed char) ((var_9) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((int) (unsigned short)65535)) : (((/* implicit */int) (short)32504)))))));
    var_26 = ((/* implicit */unsigned long long int) var_9);
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) >= (15435435076252227744ULL)));
}

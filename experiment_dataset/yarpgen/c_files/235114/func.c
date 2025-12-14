/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235114
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned short)54649)) || (((/* implicit */_Bool) arr_0 [(unsigned char)14])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) arr_1 [11ULL]))))), (((((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (unsigned short)10886)) : (((/* implicit */int) (unsigned short)10881)))) ^ (((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_13 &= ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
        arr_6 [i_1] = ((/* implicit */short) arr_1 [i_1]);
        var_14 &= var_7;
        var_15 = ((((var_4) >= (arr_3 [i_1]))) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1]))))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_8 [1U])) > (((/* implicit */int) arr_8 [i_2]))))), ((-(((/* implicit */int) arr_8 [i_2]))))));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) (unsigned short)54643))), ((((~(67108863U))) ^ (min((arr_11 [12ULL]), (((/* implicit */unsigned int) (signed char)127))))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */int) var_7))))) ? (arr_7 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4227858434U))))));
                    var_17 -= ((/* implicit */unsigned short) ((unsigned int) 4227858432U));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (arr_15 [5U] [i_2] [5U] [i_2])));
                    var_19 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_15 [13ULL] [i_6 - 1] [i_3] [i_6 - 1])));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127)))))));
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_15 [i_2] [i_3] [i_6 - 1] [i_6]), (arr_15 [i_2] [i_2] [i_6 - 1] [(short)13])))) * ((-(((/* implicit */int) arr_15 [i_6] [i_3] [i_6 - 1] [i_4]))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 ^= (+(4227858432U));
                    var_23 = ((/* implicit */unsigned long long int) var_6);
                }
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_24 ^= ((/* implicit */short) ((long long int) (unsigned short)61554));
                    var_25 ^= ((/* implicit */long long int) 67108865U);
                    arr_28 [(unsigned char)0] [i_2] [(unsigned char)0] = arr_16 [i_4];
                }
                arr_29 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3026229077U))));
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                arr_34 [i_2] [5U] [i_2] [5U] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_23 [i_2] [(signed char)3] [i_2] [i_2] [(short)11])), (((((arr_14 [i_2] [i_2] [i_2]) && (((/* implicit */_Bool) arr_8 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [13] [i_3]))) : (((((/* implicit */_Bool) (unsigned short)10892)) ? (((/* implicit */unsigned long long int) 3183328758U)) : (var_0)))))));
                var_26 = ((((arr_11 [i_2]) << (((arr_11 [i_2]) - (726589808U))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2])) && (((/* implicit */_Bool) (short)-8857)))))));
            }
        }
        for (short i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            arr_37 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10893)) ? (arr_32 [i_10] [i_2]) : (((/* implicit */int) arr_8 [i_2]))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((_Bool) var_3)))));
            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4227858413U) : (((/* implicit */unsigned int) -1229357764))))) ? (((unsigned int) 688739457)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1545048104)) && (((/* implicit */_Bool) 2857382567U)))))))))));
            var_29 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_10 - 1])) ? (arr_7 [i_10 + 1] [i_10 + 1]) : (arr_7 [i_10 - 1] [i_10 - 1]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_10])) : (((/* implicit */int) arr_30 [i_10] [i_10])))) != (((((/* implicit */int) arr_36 [i_2])) << (((arr_23 [i_2] [i_10] [(signed char)12] [8ULL] [(short)4]) - (2499442711U))))))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) -1229357782))));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((int) ((arr_10 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        {
                            arr_51 [i_13] [i_11] [i_12] [(signed char)1] [i_14] [i_11] = (~(((((/* implicit */_Bool) arr_19 [i_11] [i_11] [i_13])) ? (((/* implicit */int) arr_19 [i_2] [i_11] [i_2])) : (((/* implicit */int) arr_19 [i_2] [i_11] [i_2])))));
                            var_32 -= ((/* implicit */signed char) min((min((3251905366U), (arr_33 [i_2] [i_12] [7U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_12] [i_12] [8])) ? (-1229357744) : (((/* implicit */int) arr_42 [i_12] [2] [i_12])))))));
                            arr_52 [i_2] [i_2] [i_12] [i_11] [(unsigned short)12] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */int) arr_4 [i_13])) : (((/* implicit */int) arr_4 [i_13]))))) + (var_4));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) arr_22 [i_13] [i_13] [i_12] [i_14] [i_14] [i_2]))))), (((((/* implicit */_Bool) arr_49 [(unsigned short)12] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_38 [i_13] [i_13] [i_13])))))), (((/* implicit */unsigned long long int) arr_47 [i_2] [12] [i_13] [12] [i_14])))))));
                        }
                    } 
                } 
            } 
            arr_53 [i_11] [(unsigned char)3] = ((/* implicit */unsigned int) min((((-1890985956222668498LL) * (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_11] [i_11]))))), (((/* implicit */long long int) arr_27 [i_2] [i_2] [i_11] [(unsigned short)4] [9U] [i_11]))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_56 [i_2] [i_15] [6LL] = ((/* implicit */int) arr_13 [i_2]);
            var_34 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (var_0))));
        }
        var_35 *= ((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_2] [i_2]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            arr_61 [i_2] [8LL] [i_2] = ((/* implicit */int) ((10092493819836408263ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2] [i_16] [i_16] [i_16])))));
            var_36 = ((unsigned int) (unsigned short)49152);
            var_37 = ((/* implicit */_Bool) min((var_37), (((((/* implicit */int) arr_20 [i_2] [i_2] [(short)5])) < ((-(var_3)))))));
        }
        arr_62 [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_38 [i_2] [i_2] [i_2]))) || (((/* implicit */_Bool) arr_43 [i_2] [i_2]))));
    }
    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
    {
        var_38 |= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) 2000456500)) | (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_4)))))));
        arr_65 [10ULL] [7U] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_64 [(_Bool)1]))));
        var_39 = ((/* implicit */int) 67108861U);
    }
    var_40 = ((/* implicit */signed char) var_1);
    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_10))));
}

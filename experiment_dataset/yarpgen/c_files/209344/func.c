/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209344
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) var_3);
                    var_10 = ((/* implicit */int) max((var_10), (((((/* implicit */_Bool) ((unsigned long long int) ((-1514667030) >= (1208066625))))) ? (((((/* implicit */_Bool) 1208066625)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)113)))) : (((/* implicit */int) ((arr_4 [i_0] [i_0]) > (-1208066623))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 591407768)) > (3188237858472782689ULL)));
                                var_12 = ((/* implicit */unsigned long long int) 591407771);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */int) (signed char)66);
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */short) var_9);
                arr_25 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */signed char) -1208066604);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            arr_31 [i_5] [i_5] [i_8] [i_5] [i_6] = var_9;
                            arr_32 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((-(-1208066603))) : (arr_8 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2])));
                        }
                    } 
                } 
            }
            for (short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
            {
                arr_36 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_3);
                arr_37 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 34359738367ULL)) ? (((/* implicit */int) (signed char)113)) : (-14)));
            }
        }
        for (int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
        {
            var_15 = var_2;
            var_16 = ((/* implicit */signed char) ((6815195178556888131ULL) << (((729382195) - (729382145)))));
        }
        for (int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
        {
            arr_42 [i_12] = ((/* implicit */int) ((var_5) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-110)) >= (-1208066625))))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_9 [i_12] [i_12] [i_5]))) || (((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_5] [i_5] [8ULL] [8ULL])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 4) 
            {
                var_18 += ((/* implicit */signed char) var_5);
                var_19 ^= (+(var_2));
                arr_45 [i_5] [i_12] [i_12] [i_5 - 2] = var_9;
                var_20 += ((/* implicit */int) var_0);
            }
        }
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(arr_8 [i_5] [i_5] [i_5] [i_5 - 3]))))));
    }
    for (signed char i_14 = 3; i_14 < 16; i_14 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                for (short i_17 = 3; i_17 < 15; i_17 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_22 ^= ((int) ((int) (short)20749));
                            var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_18])) ? (((((/* implicit */_Bool) 2053801304600367069ULL)) ? (16392942769109184525ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1345175138826751005ULL)) ? (((/* implicit */unsigned long long int) -729382192)) : (((((/* implicit */_Bool) -225079940)) ? (((/* implicit */unsigned long long int) arr_29 [i_14] [i_15] [i_18] [i_15] [i_16] [i_18] [i_18])) : (64512ULL))))))));
                        }
                        for (short i_19 = 0; i_19 < 17; i_19 += 1) 
                        {
                            var_24 = ((/* implicit */int) var_2);
                            var_25 = var_5;
                            var_26 = ((/* implicit */int) var_3);
                        }
                        var_27 = ((/* implicit */int) arr_61 [i_17] [i_17] [i_16] [i_17]);
                    }
                } 
            } 
        } 
        arr_62 [i_14] = ((/* implicit */signed char) arr_58 [i_14 - 1] [i_14 - 2] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 1] [i_14 + 1]);
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [(short)10] [i_14 - 1] [i_14 - 1] [(short)10])), (arr_51 [i_14] [i_14 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_14 - 2])) ? (arr_56 [i_14]) : (var_1))))))) : (arr_26 [i_14] [12ULL] [i_14] [12ULL] [i_14 - 1]))))));
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_4))));
    var_30 ^= ((/* implicit */unsigned long long int) (-((-(var_8)))));
    var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) 2053801304600367088ULL)) : (((/* implicit */unsigned long long int) ((int) (signed char)127))))), (max((var_2), (((/* implicit */unsigned long long int) var_4))))));
}

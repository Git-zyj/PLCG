/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36155
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) (~(max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2]))))));
                    var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_1] [i_2]))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [15U] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])), (arr_5 [(short)12]))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((short) ((short) min((var_1), (((/* implicit */short) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */short) arr_11 [i_3]);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((int) arr_12 [i_3])), (((((/* implicit */int) arr_12 [i_3])) - (((/* implicit */int) arr_12 [i_3])))))))));
        arr_14 [i_3] = ((/* implicit */int) min((min((((/* implicit */long long int) var_1)), (arr_11 [i_3]))), (((/* implicit */long long int) ((unsigned char) var_13)))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) ((int) arr_24 [i_7] [i_6] [i_7 + 1] [i_7] [i_7 - 1]));
                        arr_26 [i_4] [i_6] [i_6] [1] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)19))));
                    }
                } 
            } 
        } 
        arr_27 [i_4] = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) arr_12 [i_8])) : (((/* implicit */int) arr_30 [i_9]))))) * (((unsigned long long int) (_Bool)1)))))));
            var_19 = ((/* implicit */long long int) ((unsigned char) ((long long int) arr_29 [i_8] [i_8])));
            var_20 = ((/* implicit */unsigned int) arr_31 [i_8] [i_9] [i_8]);
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                arr_35 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                var_21 = ((/* implicit */int) ((unsigned short) arr_31 [i_10] [i_10] [i_10]));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (_Bool)1))));
                arr_36 [i_8] [i_9] [i_10] = ((/* implicit */int) arr_34 [i_8] [i_9] [i_10]);
            }
            for (short i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_34 [i_9] [i_9] [i_9]))));
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [i_8])) : (((/* implicit */int) arr_38 [i_9]))));
                    var_25 = ((/* implicit */short) min((var_25), (((short) arr_37 [i_9] [i_9] [i_9] [i_12]))));
                }
            }
            for (short i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((short) ((long long int) var_8))))));
                            arr_49 [i_8] [i_8] [i_8] [i_14] [i_8] = (((_Bool)1) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            arr_50 [i_8] [i_9] [i_13] [i_14] [i_8] = (i_8 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_43 [i_15] [i_14] [i_13] [i_9])) << (((((/* implicit */int) arr_30 [i_8])) - (129)))))) : (((/* implicit */short) ((((/* implicit */int) arr_43 [i_15] [i_14] [i_13] [i_9])) << (((((((/* implicit */int) arr_30 [i_8])) - (129))) + (47))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((67108863U) >> (((((/* implicit */int) arr_34 [i_9] [i_9] [i_9])) + (7718)))))) : (arr_31 [i_8] [i_9] [i_16]))))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_8] [i_9])) == (((int) arr_53 [i_8] [i_8] [(short)13] [i_8])))))));
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        arr_56 [i_8] [i_8] [i_9] [i_8] [i_16] [i_17] [i_8] = ((/* implicit */unsigned int) ((unsigned short) arr_52 [i_16] [i_9] [i_13] [i_16] [i_8] [i_9]));
                        var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_17]))));
                    }
                    for (int i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        arr_61 [i_8] [i_13] [i_13] [i_13] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) (_Bool)1))));
                        arr_62 [i_9] [i_13] [i_9] [i_8] = ((short) arr_53 [i_8] [i_9] [i_8] [i_16]);
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                }
            }
        }
        for (long long int i_19 = 0; i_19 < 19; i_19 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 19; i_20 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) (-(((arr_65 [i_8] [i_20]) << (((var_7) - (802308881U)))))));
                var_32 = arr_12 [i_19];
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
                {
                    for (int i_22 = 0; i_22 < 19; i_22 += 3) 
                    {
                        {
                            arr_72 [(short)7] [(short)7] [i_20] [(short)10] [i_20] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1))))));
                            arr_73 [i_8] [i_20] [i_8] [i_8] = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                var_33 = (+(var_2));
            }
            for (short i_23 = 0; i_23 < 19; i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_24 = 1; i_24 < 18; i_24 += 2) 
                {
                    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) (_Bool)1);
                            arr_85 [i_8] [i_19] [i_8] [i_19] [i_8] = ((/* implicit */int) ((unsigned char) arr_83 [i_24 + 1] [i_24] [i_24 + 1] [i_25] [i_24 + 1] [i_24 + 1] [i_25]));
                            arr_86 [i_8] [i_24] [i_23] [i_24 - 1] [i_8] [i_8] [i_23] = (+(arr_48 [i_23] [i_8]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 19; i_26 += 1) 
                {
                    for (short i_27 = 0; i_27 < 19; i_27 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)189)) ^ (((/* implicit */int) (short)32767))));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_64 [i_8] [12U] [12U]))));
                            arr_94 [i_8] [i_8] [i_8] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned int) (!(var_10)));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) 8388544U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 19; i_28 += 1) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 19; i_29 += 1) 
                    {
                        {
                            arr_101 [i_8] [i_8] [i_8] [i_28] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            arr_102 [i_8] [i_8] [i_8] [(short)4] [i_8] = ((/* implicit */unsigned long long int) var_7);
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((unsigned char) arr_29 [i_19] [i_23])))));
                            arr_103 [i_8] [i_8] [i_8] [i_8] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_89 [i_8] [i_19] [i_23] [i_19] [i_29]) : (4294967293U)))) ? (arr_75 [i_8] [i_29] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_75 [i_8] [i_8] [i_8]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 19; i_30 += 1) 
            {
                for (unsigned int i_31 = 0; i_31 < 19; i_31 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (-(arr_46 [i_19] [i_19] [i_19] [i_19]))))));
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (+(arr_46 [i_19] [i_19] [i_8] [i_19]))))));
                        var_42 = ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
            arr_109 [i_8] [i_8] = ((/* implicit */long long int) arr_70 [i_8] [9] [i_8]);
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) arr_47 [i_19] [i_19] [i_8]))));
        }
        for (long long int i_32 = 0; i_32 < 19; i_32 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */int) max((var_44), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_69 [i_8] [i_32] [i_32] [i_8] [i_32])) : (((/* implicit */int) var_1))))));
            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) var_7))));
            var_46 = ((/* implicit */int) min((var_46), (arr_107 [i_8] [i_32] [i_32])));
            var_47 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) var_12))) % (arr_47 [i_8] [i_8] [i_8])));
        }
        for (long long int i_33 = 0; i_33 < 19; i_33 += 2) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned int) arr_37 [i_8] [i_8] [i_8] [i_33]);
            arr_116 [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
        }
        var_49 = ((/* implicit */int) arr_88 [i_8] [i_8] [i_8] [i_8]);
        arr_117 [i_8] = ((/* implicit */unsigned short) ((short) arr_32 [i_8]));
    }
    var_50 = ((short) ((unsigned int) min(((unsigned char)255), (((/* implicit */unsigned char) var_10)))));
}

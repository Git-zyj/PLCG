/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25244
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
    var_11 = ((/* implicit */int) var_1);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1013775574)) ? (var_9) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((_Bool) var_10))) : (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (-(-9223372036854775806LL)));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [19]);
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1])) / (((/* implicit */int) arr_6 [i_1 + 1]))))) ? ((+(((/* implicit */int) arr_6 [i_1 - 1])))) : (((/* implicit */int) arr_6 [i_1 - 1]))));
        var_15 = ((/* implicit */signed char) arr_4 [i_1]);
    }
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2015929167)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)0))));
                        arr_20 [i_5] [i_4] [i_3] [i_5] = ((/* implicit */signed char) arr_13 [i_2]);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((unsigned long long int) ((1013775571) ^ (((/* implicit */int) (_Bool)0)))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                var_17 = ((/* implicit */unsigned char) arr_21 [i_6] [i_7]);
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))), (((arr_24 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1)))));
                    var_19 = ((/* implicit */unsigned short) ((arr_8 [i_2 + 1]) % (arr_25 [i_2 + 1])));
                }
                for (short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned int) 1013775565)), (2025890313U))))) ? (((/* implicit */int) arr_18 [i_2] [i_7] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-1656694786)))) && (((/* implicit */_Bool) min((1013775571), (((/* implicit */int) (signed char)0))))))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        var_21 = ((((-1030299804) & (((/* implicit */int) var_8)))) ^ (((/* implicit */int) (signed char)121)));
                        var_22 = ((/* implicit */int) arr_30 [i_2 - 1] [i_6] [i_7] [i_9]);
                    }
                }
                for (short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    arr_36 [i_11] [i_7] = ((/* implicit */unsigned char) max((((926270660640940191ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [(unsigned char)1]))))))), (((/* implicit */unsigned long long int) var_9))));
                    var_23 = ((/* implicit */int) min((arr_32 [i_2] [i_6] [i_6] [i_7] [i_7] [i_11] [(short)10]), (((/* implicit */unsigned char) var_7))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_2] [i_7] = ((/* implicit */_Bool) 1013775571);
                        arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) (_Bool)1);
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_24 = ((((/* implicit */_Bool) arr_12 [i_2] [(signed char)2] [i_2])) ? (arr_12 [i_2] [i_13] [i_13]) : (((int) 1121560066)));
            /* LoopNest 2 */
            for (unsigned char i_14 = 2; i_14 < 20; i_14 += 1) 
            {
                for (signed char i_15 = 1; i_15 < 20; i_15 += 1) 
                {
                    {
                        arr_48 [i_2] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 945590815)) ? (((/* implicit */int) (unsigned short)41150)) : (((/* implicit */int) (unsigned char)189))))), (arr_30 [i_14] [i_14 + 1] [i_14] [i_15 + 2])));
                        arr_49 [i_14] [i_14 + 1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_14 [i_2])))) : (arr_25 [i_2])));
                        arr_50 [i_2 + 1] [i_13] [i_14] [i_14 + 2] [i_15 - 1] = ((/* implicit */int) arr_22 [i_2 - 1] [i_13] [i_15]);
                        var_25 = ((((/* implicit */_Bool) ((signed char) arr_35 [i_2 - 1] [i_13] [i_13] [i_13] [i_13] [i_2]))) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2])) : ((+(arr_34 [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_2 + 1] [i_2]))));
                    }
                } 
            } 
            arr_51 [i_13] [i_2 - 1] = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_26 = ((/* implicit */int) ((long long int) (unsigned char)249));
                arr_55 [i_16] = ((/* implicit */unsigned char) var_0);
            }
            for (unsigned char i_17 = 2; i_17 < 20; i_17 += 1) 
            {
                arr_60 [i_2 + 1] [i_2 - 1] = ((/* implicit */int) (-(arr_16 [i_2 - 1] [i_17] [i_17])));
                arr_61 [i_17] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_13 [i_2])))), (var_1)));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_2 - 1] [i_2 - 1] [i_2] [i_13] [i_2 + 1] [i_2 - 1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_28 = arr_9 [i_2 - 1] [i_2 - 1];
                            var_29 = ((/* implicit */int) arr_29 [i_18] [i_18] [i_18]);
                            arr_70 [i_19] [i_19] [11] [i_18] = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned short) arr_18 [i_18] [i_18] [i_18] [i_2]);
                arr_71 [i_2 - 1] [i_13] [i_13] [i_18] = (-(((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) var_2)) : (945590815))));
                arr_72 [i_18] [i_13] [i_18] [i_18] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_67 [i_2] [i_13] [i_13] [i_18] [i_18])))) != (var_5)));
            }
            for (short i_21 = 3; i_21 < 21; i_21 += 1) 
            {
                var_31 = var_7;
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_2] [i_2 + 1] [i_21] [i_21 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)0)))) : ((-(3135050350U)))));
                arr_77 [i_21] = ((/* implicit */_Bool) max((((min((var_3), (((/* implicit */int) arr_62 [i_2] [i_13])))) - (((/* implicit */int) arr_27 [i_2] [i_13] [i_21] [i_13] [i_21 - 2] [i_2])))), ((+((+(var_3)))))));
            }
        }
        for (int i_22 = 1; i_22 < 20; i_22 += 1) 
        {
            arr_81 [i_22] [i_22] [i_22] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)189)), (13500475736226692175ULL)));
            /* LoopNest 2 */
            for (long long int i_23 = 4; i_23 < 19; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_33 = ((min((((/* implicit */int) var_8)), (arr_34 [i_2] [i_2 - 1] [i_22] [i_22] [i_22]))) - (((var_6) + (arr_43 [i_22 + 1] [i_2]))));
                        arr_88 [i_22] [i_22] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) max((arr_22 [i_22] [i_22 - 1] [i_23 + 2]), (((/* implicit */unsigned char) (signed char)-1))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)47)), ((unsigned short)56938)))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_42 [i_2 + 1] [i_23] [i_23])) ? (arr_42 [i_2 + 1] [i_24] [i_24]) : (arr_42 [i_2 - 1] [i_2] [i_24]))) <= (((/* implicit */int) ((_Bool) var_1)))));
                        arr_89 [i_24] [i_22] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned char)255)), (var_5))))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) arr_27 [i_2] [i_2] [i_2 - 1] [i_22] [i_2] [i_22 + 1]);
        }
        for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 2) 
        {
            /* LoopNest 3 */
            for (int i_26 = 2; i_26 < 19; i_26 += 2) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (int i_28 = 0; i_28 < 22; i_28 += 1) 
                    {
                        {
                            arr_99 [i_27] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                            var_36 = (unsigned char)29;
                        }
                    } 
                } 
            } 
            var_37 = ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) ((-1) != (((/* implicit */int) var_10)))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_64 [12] [i_2] [i_25] [i_25] [i_25]))) | (((/* implicit */int) var_4))))));
        }
    }
    var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
}

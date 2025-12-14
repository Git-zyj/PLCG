/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2943
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
    var_17 = max((((((/* implicit */_Bool) -1343165471)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) var_2))))), (((/* implicit */int) var_15)));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            var_18 = (i_0 % 2 == 0) ? (((((((int) arr_4 [i_0 + 1] [i_0] [i_0 - 3])) + (2147483647))) >> (((arr_2 [i_0 + 4] [i_0] [i_0 + 4]) + (1742421483))))) : (((((((((int) arr_4 [i_0 + 1] [i_0] [i_0 - 3])) - (2147483647))) + (2147483647))) >> (((arr_2 [i_0 + 4] [i_0] [i_0 + 4]) + (1742421483)))));
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0 - 1] [i_2 - 2] [i_0 - 1] [i_3]) : (arr_0 [i_0]))), (((/* implicit */int) (_Bool)1))));
                    arr_12 [i_0] [i_0] [i_2] [i_2 + 1] = ((/* implicit */signed char) max((arr_10 [i_3] [i_2] [i_2 + 1] [i_2 + 1]), (((/* implicit */int) ((signed char) (signed char)-6)))));
                }
                var_20 = ((int) (!(((/* implicit */_Bool) -1343165468))));
                arr_13 [i_0] [i_0] [(signed char)7] = max((max((((((/* implicit */int) arr_9 [i_0] [0] [i_1] [i_0])) >> (((arr_1 [(_Bool)1] [i_1]) + (605589225))))), (var_16))), (arr_4 [0] [i_0] [i_0]));
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [3] [i_0] [i_0])) ^ (((/* implicit */int) arr_9 [8] [8] [i_2 - 2] [i_0])))))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_22 = arr_15 [i_4] [i_0] [i_0] [i_1];
                arr_16 [i_4] [i_0] [i_0] = ((/* implicit */int) ((signed char) arr_2 [i_0 + 4] [i_0 + 2] [i_0 + 4]));
            }
            var_23 = ((/* implicit */_Bool) 1867914226);
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) max((arr_14 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0 - 3])) || (((/* implicit */_Bool) ((int) var_10))))))));
            var_24 = max(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)1)))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_5] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((int) arr_3 [i_0 - 3]))) || (((/* implicit */_Bool) 1343165471)))));
            var_25 = ((/* implicit */signed char) max((((((int) 182370004)) - ((+(-418679558))))), (((/* implicit */int) (!(((/* implicit */_Bool) 182370002)))))));
            var_26 = ((/* implicit */signed char) (+((+(arr_19 [i_0 + 4] [i_0 + 2] [i_0])))));
            var_27 = ((((/* implicit */_Bool) max((var_1), (((arr_1 [(_Bool)1] [(_Bool)1]) % (((/* implicit */int) (_Bool)1))))))) ? (((int) (signed char)4)) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_5]))))) ? (max((var_14), (arr_10 [i_0 + 4] [i_0 + 4] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */int) var_12)))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 4; i_7 < 9; i_7 += 4) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((int) (+(-1343165484))))));
                var_29 = 2093056;
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_3))))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_29 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)16)) : (2147483647)));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(arr_1 [i_0 - 3] [i_0 + 1]))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_10 = 2; i_10 < 9; i_10 += 1) 
                {
                    arr_38 [i_0] = ((/* implicit */signed char) (+(1870037882)));
                    arr_39 [i_0] [i_6] [i_0] = (+(1343165449));
                    arr_40 [(signed char)2] |= ((/* implicit */_Bool) ((1567889122) >> (((131068) - (131059)))));
                    var_32 = ((/* implicit */_Bool) ((int) arr_37 [i_9] [i_10 - 1] [i_9] [i_10]));
                }
                for (int i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    var_33 = ((((/* implicit */_Bool) ((int) -1277237949))) ? (var_5) : (((int) (signed char)0)));
                    var_34 = ((int) arr_42 [i_0 + 4] [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 3]);
                }
                for (int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_35 = var_11;
                    var_36 = var_10;
                    var_37 = arr_43 [i_0 - 2] [i_6] [i_9];
                }
                /* LoopSeq 1 */
                for (signed char i_13 = 2; i_13 < 8; i_13 += 1) 
                {
                    arr_51 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */int) (((~(arr_0 [i_0]))) < (arr_14 [i_0 + 2] [i_6] [i_13 + 1] [i_13])));
                    var_38 = ((/* implicit */int) arr_32 [i_0] [i_0] [i_9] [i_13 - 1]);
                }
            }
            arr_52 [i_0] = ((arr_21 [i_0 + 4] [i_0 + 4]) >> (((arr_21 [i_0 + 3] [(signed char)7]) - (752617919))));
            arr_53 [i_0] = var_14;
            var_39 = ((/* implicit */_Bool) arr_15 [i_6] [i_0 + 3] [i_0] [9]);
        }
        for (int i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            var_40 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_32 [i_14] [i_14] [i_0] [i_0 + 3])) & (arr_41 [i_0] [i_0]))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    for (int i_17 = 2; i_17 < 9; i_17 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_1) >> (((var_13) - (1018142846)))))) ? ((~(-769353504))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_16] [i_0] [i_0 + 4])) || (((/* implicit */_Bool) arr_24 [i_0] [i_14] [i_14]))))))) << (((/* implicit */int) ((max((var_8), (((/* implicit */int) arr_49 [i_16] [i_16] [i_0] [i_16] [i_17 + 1] [i_0])))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (940239727)))))))));
                            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_17 + 1] [i_0 - 3] [i_0] [i_0 + 3] [i_0])) / (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((arr_47 [i_17 - 2] [i_0 + 4] [i_0 + 3]) ? (var_10) : (((/* implicit */int) arr_11 [i_17 - 1] [i_17 - 1] [i_0 + 4] [i_0]))))))))));
                            var_43 = ((/* implicit */int) arr_22 [i_16]);
                            arr_64 [i_0] [i_0] [i_0] [i_15] [(signed char)4] [i_17 - 1] = ((((var_8) / (arr_4 [i_17 + 1] [i_0] [i_17 + 1]))) * ((+(((/* implicit */int) (signed char)0)))));
                        }
                    } 
                } 
            } 
        }
        arr_65 [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_55 [(signed char)4])) : (arr_15 [i_0] [(signed char)3] [(signed char)3] [i_0]))))) << (((max((((/* implicit */int) ((signed char) (signed char)-78))), ((+(-182369994))))) + (81)))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
    {
        var_44 = ((/* implicit */int) min((var_44), ((+(var_0)))));
        var_45 += arr_69 [(_Bool)1];
        arr_70 [i_18 + 1] = ((((/* implicit */int) arr_67 [i_18 + 1] [i_18])) + (0));
    }
    var_46 = max((((/* implicit */int) (((+(((/* implicit */int) (signed char)120)))) == (((-182369997) % (1867146935)))))), (((int) max((((/* implicit */int) (_Bool)1)), (66977792)))));
}

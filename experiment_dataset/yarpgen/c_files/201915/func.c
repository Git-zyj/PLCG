/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201915
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? ((+(arr_0 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_0] [i_1] [i_2]) : (arr_9 [i_0] [i_0] [i_2])))))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (((arr_4 [i_1] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (short)0))))))))));
                        arr_12 [i_2] = ((/* implicit */long long int) arr_5 [i_0]);
                        arr_13 [i_2] = ((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_2] [i_3])));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 4; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_24 [i_0] [i_0] [i_4] [i_5] [i_6 + 1] &= ((/* implicit */unsigned int) arr_23 [i_4 - 1] [i_6 + 2] [i_6] [i_6 + 2]);
                        var_21 = ((/* implicit */unsigned long long int) (-(arr_20 [i_4 + 1] [i_4 + 1] [i_4 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_6 - 3] [i_6 - 2]))) | (arr_11 [i_0] [i_6 - 3])));
                            var_22 = ((/* implicit */_Bool) ((arr_27 [i_4] [i_4 + 1] [i_4 + 1]) / (arr_27 [i_0] [i_0] [i_4 + 1])));
                            var_23 = ((/* implicit */short) (~(arr_27 [i_4 - 1] [i_4 - 1] [i_6 - 1])));
                            arr_30 [i_0] [(unsigned short)6] [i_5] [i_6 - 3] [i_7] [i_7] &= ((/* implicit */short) (-(arr_20 [i_4 + 1] [i_5] [i_5])));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        arr_41 [i_8] = ((/* implicit */signed char) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9] [i_11]))))), (max((((/* implicit */long long int) var_1)), (var_12))))) * (((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)(-127 - 1)))) * (((/* implicit */int) min((arr_31 [7ULL] [7ULL]), (((/* implicit */short) arr_3 [i_9]))))))))));
                        arr_42 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_10] [i_11] = ((/* implicit */long long int) (+(max((((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (unsigned char)255)))), ((-(((/* implicit */int) arr_21 [i_8] [i_9] [i_8] [i_10] [i_11]))))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8] [i_9] [i_8] [i_8])) ? (arr_22 [i_8] [i_10]) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (arr_26 [i_8 + 1] [i_8 + 1] [i_9] [i_10] [i_8 + 1] [i_11] [i_8 + 1]))) * (arr_17 [i_8 + 1] [i_8 + 1]))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)9172))))), (((((/* implicit */_Bool) min((arr_18 [i_8] [0ULL] [i_9] [i_9]), (((/* implicit */unsigned long long int) (short)-9176))))) ? (max((var_10), (((/* implicit */unsigned int) arr_38 [i_8 + 2] [i_8])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))))))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (signed char i_13 = 2; i_13 < 11; i_13 += 1) 
                {
                    {
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_35 [i_8 - 1] [i_13 - 1]), (arr_35 [i_8 - 1] [i_13 - 1]))))));
                        var_27 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (max((arr_43 [i_8 - 1] [i_13 - 1] [i_12] [i_13]), (arr_43 [i_8 - 1] [i_13 - 1] [i_12] [i_13])))));
                        arr_48 [i_9] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */short) arr_19 [i_8 + 2] [i_8 + 2] [i_13 - 2] [i_13])), (min((var_4), (((/* implicit */short) arr_19 [i_8 + 2] [i_12] [i_13 - 2] [i_8 + 2]))))));
                    }
                } 
            } 
            arr_49 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) arr_2 [i_8] [i_9]);
        }
        for (unsigned short i_14 = 1; i_14 < 10; i_14 += 3) /* same iter space */
        {
            var_28 -= (+(min((max((arr_8 [i_8] [i_8] [(signed char)8]), (arr_8 [(unsigned char)10] [i_8 + 1] [(unsigned char)10]))), (((/* implicit */unsigned int) arr_7 [i_8 + 1] [i_14] [i_14 + 2])))));
            arr_52 [i_8 + 2] [i_8] = ((/* implicit */signed char) ((min(((~(((/* implicit */int) arr_38 [i_8] [i_8])))), ((-(((/* implicit */int) var_9)))))) * (((/* implicit */int) arr_7 [16] [i_8] [i_14]))));
        }
        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_1 [i_8]))));
            var_30 = ((/* implicit */long long int) var_13);
        }
        /* LoopSeq 4 */
        for (long long int i_16 = 1; i_16 < 8; i_16 += 3) 
        {
            var_31 &= ((/* implicit */short) var_3);
            var_32 = ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_8 + 1] [i_16 + 1])) + (((arr_19 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [16])) : (((/* implicit */int) arr_54 [i_8] [i_16]))))))) + (min((((/* implicit */long long int) arr_37 [i_8 - 1])), (((((/* implicit */_Bool) arr_54 [i_8] [i_16])) ? (arr_4 [i_8] [i_16]) : (arr_11 [i_8] [i_16 + 4]))))));
            /* LoopSeq 2 */
            for (signed char i_17 = 2; i_17 < 10; i_17 += 1) 
            {
                arr_61 [i_8] [6] [i_17] &= min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_17 - 1] [i_16 + 3]))) - (arr_16 [i_17]))))), (((/* implicit */unsigned long long int) ((long long int) ((arr_9 [i_8] [i_16 + 2] [i_17]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))))));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_10 [i_17] [i_17 + 2] [i_17] [i_17]))));
                var_34 = (-(((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_17 - 2])));
            }
            for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                var_35 = ((/* implicit */signed char) (+(max(((+(var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_59 [i_8 - 1])), (arr_62 [i_16]))))))));
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_2)))) ? (min((arr_44 [i_8] [i_16] [i_8 - 1] [i_16 + 1]), (((/* implicit */long long int) arr_19 [i_8 - 1] [i_16 + 1] [20] [i_8 - 1])))) : (((/* implicit */long long int) var_11))));
                var_37 = ((/* implicit */signed char) arr_8 [i_8 + 2] [i_8 + 1] [i_8]);
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [i_8] [i_16])), (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_18] [i_8] [i_18]))) : (((arr_34 [i_8] [i_8 + 1] [i_16 + 1]) + (((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_8] [i_8] [i_8]))) - (arr_57 [i_8])))))));
            }
            arr_65 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8 + 2] [i_8 + 2]))) | (arr_26 [i_8] [(unsigned char)12] [i_8] [i_8 - 1] [i_8] [i_16 + 1] [(unsigned char)12])));
        }
        for (signed char i_19 = 1; i_19 < 11; i_19 += 1) 
        {
            arr_68 [i_8] [i_19] [i_19] = ((/* implicit */unsigned char) min((arr_4 [(signed char)10] [i_19]), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (arr_46 [i_8] [i_19] [i_19] [i_8] [(short)1])))) / (((/* implicit */int) max((var_8), (var_15)))))))));
            arr_69 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_8 - 1] [i_19])) * (((((/* implicit */int) arr_58 [i_8 - 1] [i_19])) * (((/* implicit */int) arr_58 [i_8 - 1] [i_19 + 1]))))));
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) min((max((arr_4 [i_19 + 1] [i_19 + 1]), (arr_4 [i_19] [i_19 - 1]))), (min((arr_4 [i_19 - 1] [i_19 - 1]), (arr_4 [i_19 + 1] [i_19 + 1]))))))));
        }
        /* vectorizable */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_20])) || (((/* implicit */_Bool) 4294967288U))));
            var_41 = ((/* implicit */unsigned long long int) var_17);
            arr_72 [i_8] [i_20] [i_8] = (signed char)31;
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [(signed char)3] [i_8])) ? (((/* implicit */int) arr_62 [i_8 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_8] [i_20] [i_8] [i_20])) && (((/* implicit */_Bool) var_5)))))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) max((((/* implicit */int) (!(var_3)))), (((((/* implicit */_Bool) arr_28 [i_8 + 2] [(short)20] [i_8] [i_8] [i_8 + 1] [i_21] [i_21])) ? (((/* implicit */int) arr_28 [i_8 + 2] [i_21] [i_8 + 2] [i_8] [i_21] [i_21] [i_8])) : (((/* implicit */int) arr_28 [i_8 + 2] [i_21] [i_8 + 2] [(short)11] [i_8] [i_8] [i_8])))))))));
            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_71 [(unsigned char)8])))))))));
            arr_75 [i_8 - 1] [i_8] [i_8 + 2] = ((/* implicit */_Bool) var_17);
        }
    }
    var_45 = ((/* implicit */long long int) var_9);
    var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (((-(((/* implicit */int) var_14)))) == (((/* implicit */int) var_3)))))));
}

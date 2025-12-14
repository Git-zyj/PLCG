/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220699
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
    var_14 = ((/* implicit */unsigned short) (+(var_6)));
    var_15 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_1))));
        var_17 &= ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1]))));
            var_19 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)127))));
        }
        for (long long int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_1);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)-17760)) : (((/* implicit */int) (short)-12882))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */long long int) (+(var_5)));
            var_22 *= ((/* implicit */unsigned long long int) var_3);
        }
        for (long long int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_9)))))));
            var_24 *= ((/* implicit */_Bool) arr_9 [(signed char)4] [i_0]);
            arr_19 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [4LL])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_0] [i_6 + 1]))))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (~(var_5)));
                            arr_27 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_8] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0]))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 1; i_10 < 16; i_10 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) var_7)) : (arr_3 [i_10 - 1] [i_10 + 1])));
            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56632)) ? (5) : (var_1)));
            /* LoopSeq 3 */
            for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                arr_34 [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_21 [i_0] [i_10 - 1] [i_11]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
                var_28 = ((/* implicit */short) var_7);
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_10 + 1] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : ((+(arr_5 [12] [i_11])))));
                    var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_0] [i_0] [i_10 - 1] [14LL] [i_0] [i_12]))))) && (((/* implicit */_Bool) var_11))));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                arr_40 [i_0] [i_10 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                arr_41 [i_0] [i_10] [i_10] [15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_10 + 1])) / (((/* implicit */int) arr_17 [i_10 - 1]))));
            }
            for (short i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_1 [i_14]))))))));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_10] [i_0] [i_0] [i_14]))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_14] [i_14]))) : (arr_33 [(signed char)11] [i_10] [i_10] [i_14]))))))));
                var_33 = ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) var_0);
                            arr_50 [(short)14] [i_10 - 1] [i_15] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_16]))));
                            var_35 = ((/* implicit */_Bool) arr_20 [i_0] [(unsigned char)7] [i_0]);
                            var_36 = ((/* implicit */_Bool) ((unsigned long long int) ((var_8) - (arr_23 [i_0] [i_15]))));
                            var_37 = ((/* implicit */int) ((unsigned long long int) var_4));
                        }
                    } 
                } 
                arr_51 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_10]);
            }
            var_38 = ((/* implicit */unsigned short) var_5);
        }
    }
    for (short i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (min((16897667096491431391ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 1; i_19 < 18; i_19 += 2) 
            {
                for (long long int i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    {
                        arr_63 [8LL] [(short)2] [i_19 + 1] [i_18] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) min((((/* implicit */int) var_13)), (var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) var_0);
                            arr_66 [12ULL] [i_18] [12ULL] [i_18] [i_20] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_62 [i_18] [(_Bool)0] [i_20] [i_21])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_61 [i_17] [i_19] [i_21]), (((/* implicit */unsigned short) arr_65 [15U] [i_19 + 1] [11U] [i_21]))))), (arr_59 [i_21] [i_19])))) : (var_5)));
                        }
                        var_41 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (short)13168)) ? (var_1) : (((/* implicit */int) (unsigned short)8901)))), (((/* implicit */int) var_12))))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8903)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56633)))));
                    }
                } 
            } 
        }
        for (short i_22 = 1; i_22 < 17; i_22 += 1) 
        {
            var_43 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_62 [i_17] [(_Bool)1] [i_17] [i_22 + 1])) ? (arr_57 [i_17] [i_17] [(short)17] [i_22 + 1]) : (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (arr_62 [i_22] [i_22] [i_22] [i_17])));
            var_44 = ((/* implicit */_Bool) min((((/* implicit */int) var_12)), ((~(4194303)))));
        }
        arr_69 [(signed char)12] = ((/* implicit */signed char) (+(arr_53 [i_17])));
        var_45 = ((/* implicit */unsigned short) max((var_45), (arr_61 [(short)15] [i_17] [i_17])));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235835
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
    var_13 = ((/* implicit */_Bool) (short)-22462);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 *= ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) ((signed char) 1302562517712660606LL))) : (((/* implicit */int) var_6))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_0 [i_0] [i_1]))));
            arr_6 [i_0] = ((/* implicit */signed char) arr_5 [(unsigned char)9] [(unsigned char)9]);
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 0ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_0] [(_Bool)1] [i_1] [1] [i_0] = var_5;
                    var_18 = ((/* implicit */int) ((((/* implicit */int) var_4)) == ((+(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) ((_Bool) arr_17 [17] [i_0] [i_2] [i_0] [i_4] [i_0] [i_2]));
                        var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_12)));
                    }
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) - (((/* implicit */int) arr_18 [i_1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]))));
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22462)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) (short)-22462)))))));
                    }
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_2] [i_2] [(_Bool)1] [i_2] [(_Bool)1])) == (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) 889575888)))));
                }
            }
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22462)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-64))));
                    var_28 = var_5;
                    var_29 += ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(signed char)17] [(signed char)17])) >> (((((/* implicit */int) var_11)) - (234)))));
                }
            } 
        } 
        var_30 = ((var_12) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)23083)) >= (((/* implicit */int) arr_21 [i_0] [i_0])))))));
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                arr_37 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) var_5);
                var_31 ^= ((/* implicit */long long int) ((1128691172) / (((arr_35 [(short)21] [i_9] [i_9] [i_9]) / (((/* implicit */int) var_9))))));
                var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_30 [(short)19]))))) && (((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10 + 1]))))) : (((/* implicit */int) ((unsigned short) ((short) (short)-8813))))));
            }
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                var_33 = ((/* implicit */long long int) ((signed char) (short)-22462));
                /* LoopSeq 4 */
                for (signed char i_12 = 2; i_12 < 20; i_12 += 3) 
                {
                    var_34 += ((/* implicit */unsigned long long int) arr_33 [i_11]);
                    var_35 = ((/* implicit */int) ((((/* implicit */int) ((((var_6) && (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)60387)))))))) == (((/* implicit */int) (unsigned short)52073))));
                    arr_46 [i_9] [16ULL] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_41 [i_9] [i_12 + 2] [i_12 - 2] [i_9])))) + (min(((+(((/* implicit */int) (short)22461)))), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_5))))))));
                }
                for (int i_13 = 1; i_13 < 21; i_13 += 4) 
                {
                    var_36 ^= ((/* implicit */long long int) (+(((((_Bool) var_5)) ? (((arr_33 [i_11]) - (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) (short)32767)), (509682226)))))));
                    /* LoopSeq 3 */
                    for (short i_14 = 1; i_14 < 19; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */short) var_2))));
                        var_38 = ((/* implicit */unsigned char) (-((-(((unsigned int) arr_42 [4ULL] [i_11]))))));
                        arr_51 [i_9] [i_11] [(short)19] = ((/* implicit */_Bool) (((+(arr_33 [i_9]))) ^ (((/* implicit */int) arr_28 [(unsigned char)8] [i_9]))));
                        arr_52 [i_11] [i_14] |= ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_8)) >= (1073740800))) ? ((+(((/* implicit */int) arr_42 [(signed char)13] [(signed char)13])))) : (((/* implicit */int) ((((/* implicit */int) arr_40 [(short)10] [7LL] [17ULL])) == (((/* implicit */int) arr_48 [i_8] [(unsigned char)12] [(short)16] [i_8] [(short)21])))))))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_39 |= ((/* implicit */unsigned char) arr_41 [i_8] [(short)16] [(short)16] [i_15]);
                        arr_55 [i_15] [(_Bool)1] [(short)14] [(_Bool)1] [(short)14] [i_8] [i_15] |= arr_39 [i_8] [(unsigned short)2];
                        arr_56 [(unsigned char)18] [i_9] [i_9] [i_13] [i_9] = ((/* implicit */unsigned short) 1073740800);
                        var_40 ^= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_2)))));
                    }
                    for (int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)5149))));
                        var_42 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_59 [i_8] [(unsigned char)12] [7] [i_13] [2U] [i_16] [i_16])))) : (((/* implicit */int) arr_45 [2ULL] [i_11] [i_11] [0ULL]))));
                        arr_60 [i_13] [(unsigned short)12] [i_9] [i_13] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)200))));
                        var_43 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_59 [i_8] [i_9] [i_8] [i_8] [i_13 - 1] [(unsigned short)4] [i_8])) - (((/* implicit */int) var_0)))));
                    }
                }
                for (long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_44 = ((/* implicit */unsigned char) (unsigned short)5148);
                    arr_63 [(short)19] [(short)14] [0ULL] [i_9] [i_9] = (-(((((/* implicit */_Bool) 1073740796)) ? (((/* implicit */int) (short)-9394)) : (((/* implicit */int) ((signed char) arr_36 [i_8] [i_9]))))));
                    var_45 = ((/* implicit */_Bool) (unsigned char)168);
                }
                for (signed char i_18 = 1; i_18 < 20; i_18 += 4) 
                {
                    var_46 = ((/* implicit */short) (+(((int) (short)8812))));
                    arr_67 [i_9] [i_9] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_66 [i_8] [i_18 - 1] [i_11] [i_11])) <= (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_57 [i_8] [i_8] [(_Bool)1])))))));
                }
                var_47 = ((/* implicit */unsigned long long int) (short)32767);
            }
            var_48 |= ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) arr_66 [i_8] [i_9] [i_9] [i_9])), (var_10))));
            var_49 = ((/* implicit */unsigned short) arr_53 [(unsigned char)14] [(unsigned char)14] [i_8] [i_8] [i_9] [(unsigned char)14] [(short)13]);
            var_50 += ((/* implicit */unsigned short) arr_39 [i_8] [i_8]);
        }
        for (short i_19 = 2; i_19 < 21; i_19 += 1) 
        {
            var_51 *= ((/* implicit */unsigned short) arr_69 [i_8]);
            arr_70 [i_19] = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_8] [i_19] [(_Bool)1] [6ULL])) > (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (arr_47 [(signed char)12] [(signed char)12] [(signed char)12] [(short)5]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_39 [i_8] [(short)5])))))))));
            var_52 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                for (short i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    {
                        var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))));
                        arr_78 [(unsigned char)6] [i_8] [(unsigned char)6] [i_20] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)-26217), (((/* implicit */short) arr_65 [i_21] [18LL] [i_21] [18LL] [i_19 - 2]))))) * (((/* implicit */int) min((arr_65 [12ULL] [12ULL] [(unsigned short)9] [(_Bool)1] [i_19 - 2]), (arr_65 [(unsigned short)15] [(unsigned char)18] [(short)11] [(unsigned char)18] [i_19 - 2]))))));
                    }
                } 
            } 
        }
        arr_79 [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10002246668289975369ULL)) ? (4778605364145612859LL) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [2ULL] [(short)12] [(short)12] [2ULL]))))))))), (min((((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))), (((((/* implicit */int) (unsigned short)13461)) + (((/* implicit */int) arr_65 [(short)11] [(short)11] [(short)11] [(short)11] [20ULL]))))))));
    }
    var_54 ^= ((/* implicit */unsigned long long int) (-(min((-889575869), ((-(((/* implicit */int) var_0))))))));
    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))));
}

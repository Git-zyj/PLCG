/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44198
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_6), (var_4)))), (((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)-26))))))) && (((((/* implicit */unsigned long long int) var_11)) != (var_3)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_17 = -2147483635;
                        arr_11 [i_0] [1ULL] [i_1] [i_2] [i_2] [i_3] = var_14;
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
                        {
                            var_18 -= ((/* implicit */unsigned long long int) var_6);
                            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((max((arr_15 [i_6] [i_6] [i_7]), (((/* implicit */unsigned long long int) (signed char)127)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) ((signed char) max((-2147483624), (-1718488611))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((-2147483616), (-1032831425)))) && (((/* implicit */_Bool) arr_18 [i_5 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1])));
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) min((15260190870911455535ULL), (((/* implicit */unsigned long long int) arr_1 [i_4 + 1]))));
                        }
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [i_5 + 1] [i_6] [8] [i_6] [i_6])))) & (max((((/* implicit */unsigned long long int) (~(var_12)))), (((15260190870911455529ULL) & (((/* implicit */unsigned long long int) 933815378))))))));
                        var_22 = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4 - 1]))));
            var_24 = ((((/* implicit */_Bool) min((15260190870911455529ULL), (((/* implicit */unsigned long long int) 81031761))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_4] [i_4] [i_4 - 1])) ? (arr_3 [i_0] [i_4] [i_4 - 1]) : (((/* implicit */unsigned long long int) -2147483638))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_18 [i_0] [0] [i_4 + 1] [i_4 - 1])))) * (((/* implicit */int) ((var_14) > (var_14))))))));
        }
        var_25 = ((((/* implicit */_Bool) ((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_14 [15]))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) & (arr_16 [2ULL] [i_0] [i_0]))) - (28ULL)))))) ? ((~(arr_16 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) -1)) > (arr_8 [i_0] [(signed char)19] [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_8 = 4; i_8 < 18; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_26 ^= ((/* implicit */signed char) min((arr_32 [i_0] [i_8 - 2] [i_11] [(signed char)8] [i_11] [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3186553202798096087ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1265530234)) == (3186553202798096087ULL)))) : (arr_17 [i_9 + 2] [i_11] [11ULL] [i_11] [i_8 - 1]))))));
                            var_27 += ((/* implicit */unsigned long long int) (+(((((((/* implicit */unsigned long long int) -1718488588)) >= (11340972433026921159ULL))) ? (((/* implicit */int) ((arr_4 [i_0] [i_8 - 4] [i_9]) != (546305863)))) : (((/* implicit */int) arr_5 [i_8 + 1] [i_8 - 4] [i_8]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_12 = 2; i_12 < 19; i_12 += 4) 
            {
                arr_37 [i_0] = ((/* implicit */signed char) ((int) (signed char)26));
                arr_38 [i_0] [i_0] [i_0] [14ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))));
            }
        }
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            arr_43 [i_13] = ((/* implicit */signed char) (~((+(((arr_2 [i_0] [i_13]) / (-127340963)))))));
            var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1718488608)) & (min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_13])) ? (((/* implicit */unsigned long long int) 1718488610)) : (var_8))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_13] [i_0])) : (arr_8 [i_0] [i_0] [i_0] [i_13])))))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-89)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (arr_20 [i_13] [i_13] [21] [i_0] [i_0]))))) > (10ULL)))))))));
        }
        for (signed char i_14 = 2; i_14 < 21; i_14 += 4) 
        {
            /* LoopNest 3 */
            for (int i_15 = 3; i_15 < 18; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((int) arr_20 [i_14 - 2] [i_15] [i_15 + 4] [i_15 + 4] [i_17])) & ((~(((/* implicit */int) arr_18 [i_0] [10] [i_17] [i_0]))))));
                            var_31 = ((/* implicit */int) arr_41 [i_0] [i_14]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 4; i_18 < 19; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 4; i_19 < 18; i_19 += 2) 
                {
                    {
                        var_32 ^= ((/* implicit */signed char) (-(((/* implicit */int) min((arr_18 [i_19 + 4] [i_18 - 1] [i_14 - 2] [i_0]), (arr_29 [i_19]))))));
                        var_33 = ((/* implicit */int) ((unsigned long long int) 1718488592));
                        var_34 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 15260190870911455529ULL)) && (((/* implicit */_Bool) (signed char)81))))) << (((((unsigned long long int) arr_30 [i_14 - 1] [i_18 + 3] [i_19 + 1] [i_19 + 1])) - (6430082020570867224ULL)))));
                        arr_60 [i_0] [i_0] [i_18 - 1] [18] = max((((/* implicit */unsigned long long int) 1968376426)), (7105771640682630459ULL));
                        arr_61 [11] [(signed char)14] = ((/* implicit */int) ((((/* implicit */_Bool) 1718488587)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)100)) / (1718488585)))) : (((((/* implicit */unsigned long long int) 1718488585)) + (arr_30 [i_14 - 1] [i_14 - 2] [i_18 + 3] [i_19 - 1])))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (signed char i_20 = 0; i_20 < 17; i_20 += 1) 
    {
        arr_65 [i_20] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1718488585)), (7832852550588065466ULL)))) && (((-1) <= (((/* implicit */int) ((((/* implicit */int) arr_45 [i_20])) < (((/* implicit */int) (signed char)-69)))))))));
        arr_66 [i_20] = ((((/* implicit */_Bool) ((2147483647) << (((9256113183846311108ULL) - (9256113183846311108ULL)))))) ? (((12161120838637645519ULL) ^ (((/* implicit */unsigned long long int) -1718488611)))) : (((((/* implicit */_Bool) arr_21 [i_20] [19ULL] [i_20] [i_20] [i_20] [8] [i_20])) ? (arr_21 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) : (arr_21 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))));
    }
    for (int i_21 = 0; i_21 < 19; i_21 += 2) 
    {
        var_35 = ((((/* implicit */_Bool) min((arr_1 [i_21]), (1718488639)))) ? (min((arr_26 [i_21] [i_21]), (arr_2 [i_21] [i_21]))) : (((-1) - (-1718488585))));
        arr_71 [2ULL] [i_21] = (-(((-546305868) / (((int) var_0)))));
    }
    var_36 -= ((/* implicit */unsigned long long int) ((signed char) (+(((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned long long int) -2004413011)))))));
}

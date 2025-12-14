/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40059
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14988083416101398607ULL)) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)36))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35804))) : (14988083416101398607ULL))))) : (var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) 9226594473286436814ULL);
        arr_2 [i_0] &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_1 [(signed char)7]))))) == (((/* implicit */int) ((_Bool) (unsigned short)4096)))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [2ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_0 [i_1]))))) ? ((+(8164515280984551519ULL))) : (((((/* implicit */_Bool) (signed char)-110)) ? (14988083416101398607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62)))))));
            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_2]));
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)40))))));
            arr_13 [i_2] = ((/* implicit */signed char) (_Bool)1);
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned long long int) 128741433)))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) (unsigned short)28509);
            var_21 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_14 [i_3]));
            var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_3])))) ? (((/* implicit */int) (unsigned short)6196)) : (((/* implicit */int) (unsigned short)4263))));
            var_23 = (_Bool)0;
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_0)) : (arr_14 [i_1 + 1])));
                arr_21 [i_1] [i_4] = ((/* implicit */unsigned short) var_6);
            }
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-80))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) == (arr_16 [i_1 + 2] [i_1 + 2] [i_4])))) : (((((/* implicit */int) (signed char)71)) - (arr_4 [i_1])))));
                arr_24 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_1 - 1] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56428)) >> (((((/* implicit */int) arr_20 [i_4] [(unsigned short)5] [i_4] [(unsigned short)5])) + (8028)))))) : (((15795862668672087005ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35213)))))));
                var_26 = ((/* implicit */unsigned short) (signed char)18);
            }
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_27 = ((/* implicit */_Bool) ((830620546) + (((/* implicit */int) (unsigned short)32133))));
                var_28 = (-(6034751443100752683ULL));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_29 = ((((/* implicit */_Bool) ((int) arr_23 [i_8] [i_4] [i_4] [i_1]))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_6 [i_1] [i_4])));
                var_30 *= ((/* implicit */_Bool) arr_22 [i_1] [i_4] [i_1] [i_1 + 1]);
            }
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 1] [(short)5] [i_1 - 1]))));
        }
        var_32 = var_10;
        var_33 = ((/* implicit */_Bool) 6925833967178275502ULL);
    }
    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            var_34 = ((/* implicit */signed char) (((((((~(830620546))) & ((-(((/* implicit */int) (unsigned short)4263)))))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11030)) & (((/* implicit */int) (short)-16826))))) & (var_15))) - (10735ULL)))));
            var_35 = ((/* implicit */short) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_34 [i_9 + 1] [i_9 + 1] [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) arr_34 [i_9] [i_9 + 1] [i_9])) < (((/* implicit */int) arr_34 [i_9] [i_9 - 1] [i_9]))))) : (((/* implicit */int) ((unsigned short) arr_34 [i_9] [i_9 - 1] [i_9])))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                arr_41 [i_9 - 1] [i_9] [i_12] = ((/* implicit */unsigned short) (short)16839);
                /* LoopSeq 3 */
                for (int i_13 = 2; i_13 < 19; i_13 += 3) 
                {
                    arr_44 [(_Bool)1] [(_Bool)1] [i_12] [i_11] [i_11] [i_13] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27040))) ^ (arr_33 [i_13 + 1])));
                    arr_45 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)85)) ? (((((/* implicit */_Bool) arr_38 [i_11] [i_11] [(signed char)3])) ? (((/* implicit */int) (unsigned short)49115)) : (arr_36 [i_9]))) : (((/* implicit */int) ((_Bool) (unsigned short)19175)))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (arr_43 [(unsigned short)5] [(_Bool)1] [(_Bool)1])));
                }
                for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_37 *= ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)50050)) + (((/* implicit */int) arr_42 [i_9] [i_11] [i_12] [i_12]))))));
                    arr_50 [i_9] [i_9] [i_12] [i_14] [i_11] [(_Bool)1] = ((/* implicit */signed char) (unsigned short)11030);
                }
                for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    arr_54 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)12370))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9]))) < (arr_37 [i_9] [(unsigned short)2] [i_9 + 1]))))));
                    var_38 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_34 [i_9] [i_9] [i_9]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))) * (((((/* implicit */_Bool) arr_48 [i_9] [i_15] [i_9] [i_9] [i_9])) ? (arr_37 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
            for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                arr_57 [i_16] [i_16] [i_9] [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 17293822569102704640ULL)) || (((/* implicit */_Bool) 0)))) ? (((((/* implicit */_Bool) arr_40 [i_9] [i_11] [i_11] [20])) ? (16281009540005507930ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [1ULL] [i_9] [i_9] [i_9])))));
                var_39 = ((/* implicit */unsigned short) 10627507630056932695ULL);
                var_40 -= ((/* implicit */unsigned short) -830620547);
            }
            for (int i_17 = 2; i_17 < 20; i_17 += 4) 
            {
                arr_60 [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 4503049871556608ULL)) ? (((/* implicit */int) arr_52 [i_9] [(unsigned short)14] [i_17 - 1] [i_11] [i_11] [i_9])) : (-774784673)))));
                var_41 *= ((/* implicit */short) (signed char)0);
                var_42 = ((((/* implicit */_Bool) arr_56 [i_17 - 2] [i_9 - 1] [i_17 - 2])) || (arr_39 [i_17 - 1] [i_9 + 1] [i_17]));
                var_43 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_43 [i_9] [i_9 + 1] [i_9 + 1])))));
            }
            for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                arr_65 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)8561);
                arr_66 [i_9] [i_9] [i_9] [i_9 - 1] = ((/* implicit */unsigned short) (+(((arr_39 [i_9] [i_11] [i_9]) ? (((/* implicit */int) arr_61 [i_9] [i_11])) : (((/* implicit */int) arr_58 [i_9]))))));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_35 [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(signed char)15] [(signed char)17] [15ULL])))))) ? (((/* implicit */int) (signed char)19)) : ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_38 [i_18] [i_11] [10ULL]))))));
            }
            var_45 = ((/* implicit */unsigned long long int) var_12);
            var_46 = ((/* implicit */short) (unsigned short)30323);
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_9] [i_9] [i_9] [i_9] [i_9])))))));
            var_48 = ((/* implicit */short) (~(((/* implicit */int) (!(arr_55 [i_9] [i_11] [0ULL] [i_9]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            var_49 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) arr_53 [i_9 - 1] [(signed char)20] [i_9] [i_19] [i_19] [i_9 + 1])) : (((/* implicit */int) (short)-28965))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (18442241023837995013ULL)))));
            /* LoopSeq 2 */
            for (int i_20 = 0; i_20 < 21; i_20 += 4) 
            {
                arr_74 [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24340))));
                var_50 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_62 [i_9 + 1] [i_9 + 1] [i_20]))));
                var_51 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48669)) / (((/* implicit */int) (_Bool)1))));
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35551)) / (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_58 [i_20])) < (((/* implicit */int) (short)-1)))))) : (2181431069507584ULL)));
            }
            for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 4) 
            {
                var_53 = ((/* implicit */unsigned long long int) min((var_53), (4595646970160322051ULL)));
                var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) < (arr_67 [i_9 + 1] [i_19] [i_9 + 1])));
                arr_77 [i_9] [(signed char)20] [i_9] [i_9] = ((/* implicit */_Bool) var_6);
                var_55 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_51 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]))));
            }
            arr_78 [i_9] = ((/* implicit */unsigned short) arr_67 [i_19] [i_9] [i_9]);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_22 = 0; i_22 < 21; i_22 += 4) 
        {
            arr_81 [i_22] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -978240011)) ? (((/* implicit */int) arr_49 [i_9] [i_22] [i_22] [i_9 + 1])) : (((/* implicit */int) (unsigned short)14))));
            var_56 &= ((/* implicit */unsigned short) 13799489565256424043ULL);
            var_57 = ((((/* implicit */int) (signed char)-79)) + (((/* implicit */int) ((((/* implicit */int) (signed char)-22)) < (((/* implicit */int) arr_51 [(short)7] [i_22] [i_22] [(signed char)11]))))));
        }
        for (signed char i_23 = 1; i_23 < 19; i_23 += 2) 
        {
            var_58 = ((/* implicit */unsigned long long int) (signed char)-64);
            var_59 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)18)) ? (((((/* implicit */int) max((arr_42 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */short) var_0))))) ^ (((/* implicit */int) arr_63 [i_9] [i_9] [i_9])))) : (max((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_12))))), ((-(((/* implicit */int) (unsigned short)30584))))))));
        }
        var_60 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5824))))))));
        var_61 = ((unsigned long long int) min((((/* implicit */int) ((signed char) arr_70 [i_9]))), (((((/* implicit */_Bool) (unsigned short)36271)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65522))))));
    }
}

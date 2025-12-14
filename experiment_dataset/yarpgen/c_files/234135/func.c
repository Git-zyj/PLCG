/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234135
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) arr_1 [i_0 + 2]))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (-(arr_0 [i_0 + 1])));
    }
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_1 + 1]) | (arr_5 [i_1 + 1])))) ? (min((((/* implicit */long long int) var_5)), (arr_5 [i_1 + 1]))) : (max((((/* implicit */long long int) var_0)), (arr_5 [i_1 - 1])))));
            arr_8 [(unsigned char)7] [13U] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((unsigned short) arr_3 [i_1]))) ^ (((/* implicit */int) (unsigned short)2856))))));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((min((var_9), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_11 [11LL] [i_1] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned short) arr_6 [i_3] [i_1]))) ? (((/* implicit */long long int) ((unsigned int) (signed char)-9))) : (var_9)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_14 = ((((/* implicit */_Bool) (-(arr_9 [i_4] [i_1 - 2] [i_4])))) ? (((((/* implicit */_Bool) (signed char)0)) ? (arr_9 [(_Bool)1] [i_1 - 2] [i_4]) : (arr_9 [i_1] [i_1 + 1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_14 [i_1] [(unsigned char)3] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-7)) + (2147483647))) >> (((/* implicit */int) (signed char)25)))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                arr_19 [i_1] [i_3] [i_5] = ((/* implicit */unsigned int) var_7);
                arr_20 [(short)6] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1]))) * (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) var_1)) : (var_4))));
                var_15 = ((/* implicit */long long int) ((signed char) arr_4 [i_1 - 1] [i_1 - 2]));
            }
            var_16 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 1])), (arr_15 [i_3] [i_1 - 2] [(signed char)13])));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_16 [i_1 - 2]), (arr_16 [i_1 - 1])))) < (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1 - 2])) <= (((/* implicit */int) var_2)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 - 2] [i_1 + 1])) ? (max((((/* implicit */long long int) arr_23 [i_1 + 1] [i_6] [i_6])), (arr_4 [i_1 - 2] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_1 - 1]), (arr_10 [i_1 + 1])))))));
            arr_24 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_9 [i_1 + 1] [i_6] [i_1 - 2]))) * (((/* implicit */int) ((unsigned short) ((arr_7 [14LL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6])))))))));
        }
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [11ULL] [i_1] [i_1]))));
        var_20 = ((long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) ((var_1) > (((/* implicit */int) (unsigned char)0))))) : (((/* implicit */int) arr_23 [9U] [i_1] [i_1 - 2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_29 [i_7] [i_7] [i_8] = ((/* implicit */int) var_5);
            arr_30 [13U] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(100122878U))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_35 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)42045))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_8))) < (((/* implicit */long long int) arr_27 [i_10] [i_9] [i_7])))))));
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_0)))));
                        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_41 [1U]))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                    {
                        arr_45 [(unsigned short)3] [i_10] [i_9] [i_10] [i_12] = ((/* implicit */int) var_9);
                        arr_46 [4U] [i_10] [3U] [(_Bool)1] [i_8] [i_10] [i_7] = ((/* implicit */short) arr_31 [i_7] [i_7] [i_9] [i_10]);
                    }
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) & (-2041250983332513473LL)));
                        var_25 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) (signed char)-1)));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(-2041250983332513473LL))))));
                        var_27 -= ((/* implicit */int) (signed char)-24);
                        var_28 -= (-(((/* implicit */int) (short)-1)));
                    }
                    var_29 -= ((/* implicit */unsigned long long int) (signed char)6);
                    arr_50 [i_10] [i_8] [i_9] [(short)0] = ((/* implicit */unsigned long long int) (-(arr_44 [i_7] [i_7] [(unsigned char)16] [i_7] [i_7] [(signed char)7] [i_7])));
                }
                var_30 -= var_5;
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    var_31 = ((/* implicit */_Bool) var_2);
                    var_32 -= ((/* implicit */long long int) ((arr_36 [i_9] [i_7] [i_9] [i_9]) == (((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_7] [i_7] [9U] [3LL] [7U] [i_7])))))));
                    arr_54 [i_7] [i_7] [i_7] [i_7] [i_14] [i_7] = ((/* implicit */unsigned char) arr_26 [i_7] [i_8]);
                }
            }
        }
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_15] [i_7])) ? (var_8) : (((/* implicit */long long int) var_5)))))));
            arr_59 [i_7] [(_Bool)1] = ((/* implicit */_Bool) var_0);
            arr_60 [i_7] [i_7] = ((/* implicit */long long int) arr_37 [i_7] [i_7]);
        }
        for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            var_34 = ((/* implicit */short) ((var_9) < (((((/* implicit */_Bool) arr_49 [6U] [i_16] [i_16] [15ULL] [8])) ? (arr_39 [i_7] [i_7] [i_7] [15] [i_7]) : (var_9)))));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_7])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [15ULL] [(short)4] [i_7] [(_Bool)1] [(short)13] [i_16])) * (((/* implicit */int) arr_58 [3] [i_16] [i_7]))))) : (arr_43 [i_7] [i_7] [6U] [i_7] [i_7] [2U] [i_7]))))));
            var_36 = ((/* implicit */signed char) (-(((/* implicit */int) arr_41 [i_7]))));
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-22)) ? (2147483647) : (((/* implicit */int) (signed char)-23)))))));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
    {
        arr_67 [(short)9] = ((/* implicit */unsigned char) (~(((arr_65 [i_17]) - (((/* implicit */long long int) 3133633471U))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            arr_71 [i_18] [(unsigned short)7] [24ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_65 [i_18])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_65 [5ULL])))) || (((/* implicit */_Bool) arr_68 [i_17] [i_18] [i_17])))))) : (9223372036854775784LL)));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((arr_70 [i_18]) == (arr_70 [i_18]))) || (((/* implicit */_Bool) min((arr_70 [i_17]), (var_8)))))))));
            var_39 = ((/* implicit */_Bool) (-(min((arr_65 [i_18]), (arr_65 [i_17])))));
            arr_72 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((unsigned int) (signed char)53))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */unsigned long long int) var_4)) : (6444351351265370437ULL)))) ? (arr_68 [i_17] [(unsigned short)2] [i_17]) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) var_7)) <= (((((/* implicit */_Bool) (unsigned char)34)) ? (arr_66 [(signed char)17]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
        }
    }
}

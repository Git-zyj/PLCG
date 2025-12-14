/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203346
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
    var_19 = max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (unsigned char)163)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_13), (var_9)))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) min((var_10), (var_10)))) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_15))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) (unsigned short)40835);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (signed char)69)))) >> ((-(0ULL))))) : ((-(var_11)))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [i_0] = ((/* implicit */signed char) arr_6 [i_4]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))) ? (arr_11 [2] [i_3] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_4]) >> (((((/* implicit */int) (unsigned char)228)) - (212))))))));
                            arr_17 [i_0] [i_4] [i_4] [i_4] [i_4] [(unsigned char)2] = ((/* implicit */unsigned char) ((((((((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) arr_4 [i_4])))) | ((-(1033605895))))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (((unsigned char) var_1))))) - (253)))));
                            var_23 = ((/* implicit */int) ((1531197718138631958ULL) + (18070717717211186261ULL)));
                        }
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [(unsigned short)2] = ((/* implicit */signed char) var_11);
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_5] = var_7;
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) ((min((var_11), (((/* implicit */int) var_14)))) < (((/* implicit */int) var_1))))), (max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5])))))))));
                            var_24 = ((/* implicit */unsigned long long int) var_5);
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (max((((/* implicit */unsigned char) (signed char)75)), ((unsigned char)27))))))));
                            var_26 *= max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)43))))), (min((((/* implicit */unsigned long long int) (signed char)8)), (1115302357715020488ULL))));
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 1136419752U))))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((unsigned char) (unsigned char)227))))))));
                            var_28 = ((/* implicit */unsigned char) ((signed char) arr_8 [i_0] [i_0] [i_0] [i_0]));
                        }
                        var_29 = ((unsigned int) min((arr_21 [i_0] [i_1] [i_1] [(unsigned char)0] [(unsigned char)0] [i_3] [i_3]), (arr_21 [i_0] [i_0] [(signed char)3] [i_0] [i_0] [i_2] [i_3])));
                    }
                } 
            } 
            arr_28 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-8)), (arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])))) >> (((max((min((((/* implicit */unsigned long long int) var_7)), (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) arr_6 [i_0]))))))) - (123ULL)))));
        }
        /* LoopSeq 2 */
        for (int i_7 = 3; i_7 < 9; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (signed char i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    {
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_1)) | (-37559879))), (var_10))))));
                        var_31 *= ((/* implicit */signed char) (unsigned char)228);
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)39144)) > (((/* implicit */int) arr_33 [i_0] [i_7 - 2] [i_7 - 2] [9ULL])))), (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [3LL]))))));
            arr_37 [i_7] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_27 [i_0] [i_0] [9ULL] [i_0] [i_0] [3] [i_0]));
            arr_38 [i_0] [i_7] [i_0] = var_16;
            var_33 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (arr_3 [i_7 - 1] [i_7 - 2]) : (arr_3 [i_7 - 1] [i_7 + 1]))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)15)), (2147483647)))) ? (((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_26 [i_0])))) : (((((/* implicit */_Bool) (signed char)-9)) ? (388817005924119201ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        }
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_42 [1ULL] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_10])) ? (((/* implicit */unsigned long long int) arr_26 [i_10])) : (var_17))) >> (((((((/* implicit */_Bool) (unsigned char)242)) ? (1152921504573292544ULL) : (((/* implicit */unsigned long long int) var_5)))) - (1152921504573292506ULL))))) + (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (-1318183879)))) ? (((((/* implicit */unsigned long long int) arr_10 [(signed char)1] [(signed char)0] [i_0] [i_0])) % (arr_3 [i_10] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (10506693296700177108ULL))))))))));
            var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), ((-(((((/* implicit */_Bool) var_18)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        }
    }
    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 3) 
    {
        var_35 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) + (-2065153444)));
        var_36 = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (1008806316530991104ULL))) & (((/* implicit */unsigned long long int) max((67108864), (((/* implicit */int) (unsigned char)71))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)25)) | (((/* implicit */int) (signed char)101)))), (-504816855))))));
    }
}

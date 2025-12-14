/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240116
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((min(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_2)))) * ((+(((/* implicit */int) (unsigned char)115))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */int) (+((-(-6714136991921371713LL)))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3694201673U)) && (arr_4 [i_0] [i_0]))), ((!(((/* implicit */_Bool) ((unsigned int) (unsigned short)42437)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 4; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [4U] [(unsigned short)20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(2596562366136849849ULL)))) ? (((/* implicit */unsigned long long int) (-(-6684766084809041488LL)))) : (((unsigned long long int) arr_6 [i_4 - 3]))));
                                var_19 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-106)), (549755682816ULL)));
                                arr_17 [i_0] = ((/* implicit */signed char) arr_15 [i_4 + 1] [i_0]);
                                var_20 *= ((/* implicit */signed char) arr_4 [23U] [i_0]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) arr_13 [i_2] [i_0])) / (((7624209267709886462ULL) * (14962089200920638736ULL))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (signed char)106);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(6714136991921371698LL)))) % (min((((/* implicit */unsigned long long int) (signed char)7)), (var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)-4))))) / (((/* implicit */int) var_16))))) : (2596562366136849849ULL)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) (signed char)105);
                        arr_30 [i_5] [i_6] [i_5] [i_8] |= ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_5] [i_6] [i_8]))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_5 [19ULL] [i_6]))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 13; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-119)))))))));
                        var_26 += ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) (short)-12557)))) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_9 [i_5] [i_6] [i_7] [i_9 - 1]))))));
                        arr_35 [i_5] [i_5] [i_7] [i_9 + 2] = ((/* implicit */int) ((((/* implicit */int) (signed char)106)) != (((/* implicit */int) ((((/* implicit */int) ((5835626147755234749ULL) <= (var_6)))) != (((((/* implicit */_Bool) 18446743523953868791ULL)) ? (-298756266) : (((/* implicit */int) arr_1 [i_9])))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_38 [i_5] [i_6] [i_7] [i_9] [i_10] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23098)) & (((/* implicit */int) arr_12 [i_9 - 3] [i_9 - 2] [i_9 + 1] [i_9 - 3]))))) & (((((/* implicit */_Bool) arr_12 [i_9 - 3] [i_9 - 2] [i_9 + 1] [i_9 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9 - 3] [i_9 - 2] [i_9 + 1] [i_9 - 3]))) : (549755682816ULL)))));
                            var_27 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_9 - 1] [i_9 - 3] [i_9 - 1]))) / (arr_31 [i_9] [i_9 + 2] [i_9 + 1] [i_9] [i_9]))));
                            arr_39 [12] [i_9] [(signed char)11] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_6 [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9 - 2] [i_9 - 2])) ? (arr_34 [i_9 - 4] [i_9 - 3] [i_9 + 1] [i_9] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9 - 2] [i_9 + 2]))))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_8 [i_6])), (547584521U)))))) ? (((/* implicit */unsigned long long int) (~(6684766084809041503LL)))) : ((-(14962089200920638736ULL))))))));
                            var_29 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_6])))) << ((((+(((((/* implicit */_Bool) arr_18 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (3484654872788912879ULL))))) - (99ULL)))));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 3) 
                        {
                            arr_42 [i_6] [i_9 + 1] [(unsigned char)6] [i_6] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)96)))) % (((/* implicit */int) ((short) arr_28 [i_9] [i_9 + 1] [i_11 - 1] [i_9 - 3])))));
                            var_30 = ((/* implicit */long long int) max((((_Bool) arr_34 [i_9 + 1] [i_9] [(signed char)13] [i_9 + 1] [i_9])), (((((/* implicit */_Bool) arr_34 [i_9 - 2] [i_9] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) arr_34 [i_9 - 2] [(short)5] [i_9 + 1] [i_9 + 1] [i_9 - 3]))))));
                            var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1946171203)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)3946))))) / (549755682824ULL));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) ((unsigned int) (+(((((/* implicit */int) arr_2 [i_6])) - (((/* implicit */int) arr_23 [i_5] [i_7])))))));
                            arr_45 [i_5] [i_6] [(signed char)9] = ((((/* implicit */_Bool) arr_14 [i_9] [(signed char)6] [i_7])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_43 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 + 2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_7] [i_9] [i_12])))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_0))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_48 [i_13] [(unsigned short)3] [i_13] [i_7] [(_Bool)0] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_7] [i_6])) == (((/* implicit */int) (_Bool)1))));
                        var_33 += ((/* implicit */signed char) (~(3233847449U)));
                    }
                }
            } 
        } 
        arr_49 [i_5] = (!(((/* implicit */_Bool) arr_18 [(unsigned char)5])));
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
    {
        arr_54 [15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((5840421614895771236LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_3 [i_14] [i_14])) != (var_0))))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)22215))))) ? (arr_15 [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))))));
        var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-53)))))) : (arr_53 [i_14] [i_14])))) && (((((/* implicit */_Bool) 10984034205655619542ULL)) && (((/* implicit */_Bool) arr_53 [i_14] [i_14]))))));
    }
    /* vectorizable */
    for (long long int i_15 = 2; i_15 < 21; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 2; i_17 < 21; i_17 += 3) 
            {
                {
                    arr_62 [i_16] [i_15] = (-(((arr_0 [i_15 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [4] [i_17]))))));
                    var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) 2864521815U)) ? (((/* implicit */int) arr_8 [(signed char)20])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_2))))))));
                    arr_63 [12] [i_16] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_15] [(_Bool)1]))));
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (~(((/* implicit */int) arr_56 [(short)20])))))));
    }
    var_37 = ((/* implicit */unsigned long long int) (+(min(((~(((/* implicit */int) (signed char)82)))), (((((/* implicit */int) var_4)) >> (((var_6) - (12004484407955673554ULL)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190916
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4216273227U))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((unsigned short) var_9))))) <= (((/* implicit */int) ((unsigned char) arr_3 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (max((max((((/* implicit */int) ((signed char) arr_2 [i_1] [i_1]))), ((-(((/* implicit */int) arr_0 [(signed char)8])))))), (((/* implicit */int) (short)-3))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47893)) ? (((/* implicit */long long int) 78694055U)) : (-2419211002595934876LL)));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) var_0);
        var_19 = var_2;
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((max((max((arr_9 [(signed char)8] [i_2]), (arr_6 [i_2]))), (arr_9 [(short)0] [i_2]))), ((-(((/* implicit */int) arr_0 [(unsigned short)10])))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [(signed char)2] [i_2] [i_2] = max((((/* implicit */int) min((arr_3 [i_5 - 1]), (var_8)))), (((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) arr_3 [i_5 - 2])) : (((/* implicit */int) arr_3 [i_5 + 1])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 2; i_6 < 7; i_6 += 3) 
                        {
                            var_21 = max((min((((/* implicit */unsigned long long int) arr_16 [i_2] [i_5 - 2] [i_5 - 3] [i_5 + 2] [i_6 + 3])), (arr_19 [i_3] [i_5 - 1] [i_5 + 2] [i_5 - 3] [i_2]))), (((/* implicit */unsigned long long int) arr_16 [(signed char)8] [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_6 - 1])));
                            arr_20 [i_2] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6])) ? (-965345093) : (((/* implicit */int) (signed char)44))))), (min((((/* implicit */unsigned long long int) var_8)), (arr_14 [2] [i_3])))))));
                            arr_21 [(unsigned short)6] [i_3] [8] [i_2] = ((/* implicit */int) var_13);
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5 - 2]))) - (arr_5 [i_5 - 2]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_3] [(unsigned short)6] [i_5] [i_2])) ? (((/* implicit */unsigned int) arr_11 [i_4])) : (arr_15 [i_2] [i_2] [(unsigned char)2] [i_2] [(unsigned char)2])))) ? (((/* implicit */long long int) arr_16 [i_2] [i_6 + 2] [i_4] [i_2] [i_5 - 2])) : (((long long int) arr_1 [i_2])))))));
                            var_23 = ((/* implicit */unsigned long long int) arr_11 [i_5 + 2]);
                        }
                        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */int) max(((unsigned short)1699), ((unsigned short)17614)));
                            arr_24 [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 0))) != (-117329314)));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (unsigned short)57646))))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_2]))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (arr_14 [i_4] [0]) : (((/* implicit */unsigned long long int) var_10))))))));
                            arr_25 [i_5] [(unsigned short)0] [i_2] [i_5] [i_7 + 2] = ((/* implicit */signed char) max((4216273227U), (((/* implicit */unsigned int) (signed char)-45))));
                        }
                        arr_26 [i_2] [i_2] = ((/* implicit */signed char) arr_18 [(unsigned short)5] [i_3] [i_3] [i_3] [i_3] [i_3] [10ULL]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_26 += ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_11 [i_3]), (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) arr_12 [8ULL])) : (((/* implicit */int) (signed char)39))))))), (78694068U)));
                        var_27 &= ((/* implicit */_Bool) (~(max((arr_19 [i_3] [i_8] [i_2] [i_3] [i_3]), (arr_19 [i_2] [(unsigned char)4] [i_2] [i_2] [i_3])))));
                        var_28 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) (unsigned short)47891)) ? (((/* implicit */int) (short)-25282)) : (((/* implicit */int) arr_3 [i_3]))))))));
                    }
                    for (short i_9 = 1; i_9 < 8; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_6))))) && (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)17642))))) && (((/* implicit */_Bool) arr_9 [i_2] [(signed char)3]))))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_27 [i_9 - 1] [i_3] [i_3] [i_2]))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_11))));
                        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2])) <= (((((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_2] [i_9 + 1])) ? (((/* implicit */int) arr_1 [i_4])) : (var_6))))) ? ((((!(((/* implicit */_Bool) arr_14 [i_2] [(unsigned short)0])))) ? (var_1) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (0)))))) : (((((/* implicit */_Bool) arr_11 [i_9 + 3])) ? (((/* implicit */unsigned int) arr_11 [i_9 + 1])) : (4216273224U)))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((max((arr_14 [i_10 + 2] [(unsigned short)7]), (((/* implicit */unsigned long long int) var_11)))) | (max((arr_14 [i_10 - 1] [i_3]), (arr_14 [i_10 + 2] [i_2])))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((((/* implicit */int) arr_27 [i_10 - 1] [i_3] [i_3] [i_10 + 2])) + (2147483647))) >> (((arr_30 [i_2] [i_3] [i_4] [i_10 + 2]) - (3294041015U))))))));
                    }
                    arr_34 [i_2] [i_2] [i_4] = max((((((/* implicit */_Bool) arr_29 [i_4] [i_3] [i_2] [i_2])) ? (arr_30 [i_4] [i_4] [5ULL] [i_4]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_4])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-67)), (var_9)))) : ((-(((/* implicit */int) var_14))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 2; i_11 < 8; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_27 [i_2] [i_3] [i_2] [i_11])) : (((/* implicit */int) var_11)))), (max((-1314103685), (((/* implicit */int) (unsigned short)3))))))), (min((max((arr_14 [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned char)131)))), (arr_14 [i_11 + 3] [i_11 - 2])))));
                        arr_37 [i_2] [(unsigned short)8] [i_3] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_8 [i_4] [i_11 + 1]), (arr_8 [i_2] [i_11 + 3]))))));
                    }
                    for (signed char i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((arr_19 [i_2] [(_Bool)1] [i_4] [8ULL] [i_2]), (((/* implicit */unsigned long long int) ((arr_35 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]) ^ (((/* implicit */int) max((arr_0 [i_2]), ((unsigned short)42943)))))))));
                        arr_41 [i_2] [(unsigned short)2] [i_2] [10LL] [(short)9] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)240)), ((unsigned short)42959)));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_12 - 1] [i_3] [i_12 - 1] [i_12 - 1] [i_12 + 1])) * (((/* implicit */int) arr_32 [(_Bool)1] [i_3] [i_12 - 1] [i_12 - 1] [i_12 + 1]))))) ? ((+(1213239453))) : ((-(((/* implicit */int) arr_32 [i_12] [i_4] [i_12 - 1] [i_12 - 1] [i_12 + 1])))))))));
                        var_38 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_30 [i_12 - 1] [i_12] [0] [i_12 + 1])))) ? (min((((/* implicit */unsigned long long int) (-(var_12)))), (min((arr_5 [i_4]), (((/* implicit */unsigned long long int) arr_40 [i_2] [i_3] [(unsigned short)3] [i_12] [i_3] [i_3])))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)38)))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            {
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_2 [3LL] [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14]))) : (arr_45 [i_13]))))))))));
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max((arr_46 [i_13] [(unsigned short)5] [(unsigned short)5] [i_13]), (arr_46 [i_13] [i_13] [i_13] [i_13]))))));
                    var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (+(arr_42 [i_13] [i_14]))))));
                    var_42 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_15])), ((+(((/* implicit */int) arr_3 [i_15]))))));
                    arr_49 [0ULL] [i_14] [i_15] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_45 [i_13])) ? (((((/* implicit */_Bool) var_5)) ? (4216273227U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_43 [i_13]))))))))));
                    arr_50 [i_15] [14] [i_14] [i_13] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_44 [i_13] [13ULL])) ? (((/* implicit */int) var_7)) : (arr_43 [10LL]))), (((/* implicit */int) ((signed char) arr_43 [i_14])))));
                }
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    arr_53 [i_13] = ((/* implicit */unsigned long long int) arr_48 [i_13] [i_14] [i_16]);
                    arr_54 [i_13] [i_13] = ((/* implicit */signed char) max((((/* implicit */long long int) (+(arr_48 [i_13] [i_13] [i_13])))), (min((((/* implicit */long long int) arr_2 [i_13] [i_14])), (var_10)))));
                    var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)118)), (2603868559U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19937)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-45))))) ? (((((/* implicit */_Bool) (unsigned short)20098)) ? (1772396612) : (((/* implicit */int) (unsigned char)156)))) : (arr_43 [i_13]))))));
                                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_5))))))));
                                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) var_3))));
                                var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) (unsigned char)71))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (4216273224U)));
}

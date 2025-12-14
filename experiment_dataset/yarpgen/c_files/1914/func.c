/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1914
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_4)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)4037))))) ? (max((((/* implicit */long long int) var_3)), (-4412720105790750604LL))) : (var_2)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(min((17592177655808LL), (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4880302967750302723LL))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 17592177655808LL))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_2] [(unsigned char)13] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [i_4] [i_1] [i_4])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_12 [i_4] [i_2] [i_3] [8] [i_1] [i_3])))));
                        arr_14 [i_4] |= ((/* implicit */_Bool) arr_7 [2] [i_2] [i_3]);
                        arr_15 [i_1] [i_1] [i_2] [(unsigned short)14] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) ((17592177655807LL) % (arr_7 [i_1] [i_2] [i_3])))) ? (((/* implicit */int) ((8436310298838538421ULL) >= (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_3] [i_4]))))) : (332366104))) : (((/* implicit */int) min((((short) arr_4 [i_3])), (min(((short)15), (((/* implicit */short) (signed char)-92)))))))));
                        var_13 += ((/* implicit */long long int) (((-(((/* implicit */int) arr_11 [i_4])))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) min((-8111490470071836311LL), (((/* implicit */long long int) (unsigned char)95))))))))));
                        arr_16 [i_1] = ((/* implicit */unsigned short) ((arr_7 [i_1] [i_2] [i_2]) - (-2251647146968995775LL)));
                    }
                } 
            } 
        } 
        var_14 -= ((/* implicit */_Bool) 4692677165494143873LL);
        var_15 = ((/* implicit */unsigned int) var_10);
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) < (((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_6 [i_5]) : (17592177655822LL)))));
        arr_21 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((int) arr_18 [i_5] [(signed char)14]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(_Bool)1])) ? (-2251647146968995775LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [0LL]))) : (8436310298838538391ULL)));
        arr_22 [0ULL] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11))))) * (((/* implicit */int) arr_5 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_16 = -4706814172189648893LL;
        /* LoopSeq 3 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_29 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_7])) ? (1847101595849877096LL) : (arr_17 [i_7]))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-92)) + (2147483647))) >> (((arr_10 [i_6] [i_6] [i_6] [i_7]) - (273163356))))))))) || (((/* implicit */_Bool) arr_17 [i_6]))));
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((unsigned long long int) arr_4 [i_6])) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6]))))))));
            var_18 = ((/* implicit */unsigned long long int) 17592177655807LL);
        }
        for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        {
                            arr_40 [(short)13] [i_8] [9ULL] [4] [4] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1182052337)), (6673181511375056040ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -8009142236597263198LL))))) : (min((arr_26 [i_10]), (((/* implicit */int) (short)-17610)))))) << (((((long long int) arr_5 [i_8 + 3])) - (18LL)))));
                            arr_41 [i_6] [2ULL] [i_8 + 1] [7U] [i_10] [i_11] |= ((((/* implicit */_Bool) min((arr_25 [i_8 + 2] [i_8 + 2]), (arr_25 [i_8 + 2] [(unsigned char)8])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_8 + 2] [i_8 + 2])) | (((/* implicit */int) arr_25 [i_8 + 2] [i_8 + 2]))))) : (min((((/* implicit */long long int) arr_25 [i_8 + 2] [9])), (-8009142236597263198LL))));
                            var_19 = arr_37 [i_6] [i_6] [11] [i_9] [i_9] [i_10] [i_11];
                        }
                    } 
                } 
            } 
            arr_42 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_6] [i_6]))) ? (((((/* implicit */int) arr_25 [i_6] [i_8 + 2])) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_6] [i_8 + 1])) : (((/* implicit */int) arr_25 [9] [(unsigned short)0])))))) : (((/* implicit */int) ((arr_26 [i_6]) != (((/* implicit */int) arr_35 [i_6] [i_6])))))));
        }
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            arr_45 [i_12] = ((/* implicit */signed char) arr_27 [i_12]);
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        {
                            arr_52 [i_15] [i_15] [9] [i_13] [i_12] [8] [i_6] = (((~(((/* implicit */int) arr_12 [14ULL] [i_12] [14ULL] [i_13] [i_15] [i_15])))) != (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_43 [(_Bool)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (12047320225365428028ULL))))));
                            var_20 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_4 [(short)3]))))));
                            arr_53 [i_12] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_34 [i_13] [i_14] [i_13] [i_6])) < (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6]))))) * (((((/* implicit */_Bool) (short)-314)) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_14] [i_15])) : (((/* implicit */int) (short)-6196))))));
                            var_21 = ((((/* implicit */_Bool) min((arr_37 [i_6] [i_6] [i_12] [i_13] [i_14] [i_14] [i_15]), (arr_49 [2ULL] [(_Bool)1] [i_13] [i_6])))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_18 [i_6] [(unsigned short)12])))) * (((var_3) ? (((/* implicit */int) arr_35 [i_6] [1ULL])) : (((/* implicit */int) var_8))))))) : (((8260224388661121540LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))));
                        }
                    } 
                } 
            } 
            var_22 |= ((/* implicit */long long int) ((var_6) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (((((/* implicit */_Bool) arr_9 [i_6])) ? (261936848380296167LL) : (((/* implicit */long long int) arr_1 [i_6] [i_12])))))))));
        }
    }
    var_23 = 13329534480650474565ULL;
    var_24 = ((/* implicit */unsigned int) var_8);
}

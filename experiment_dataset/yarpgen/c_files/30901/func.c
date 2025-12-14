/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30901
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
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        arr_14 [i_0] [(unsigned short)1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((max((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_6 [i_1] [10ULL])))), (((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)3072)))))) ? (8467092656131055805LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_18 [i_2] [i_1] [7ULL] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4611685468671574016LL)) ? (((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [9U] [i_3] [9U])) && ((_Bool)1))) ? (((((/* implicit */_Bool) 9650291567085126642ULL)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) : (((/* implicit */unsigned long long int) (-(arr_15 [i_0 - 2] [5ULL] [i_0] [(unsigned char)6] [(unsigned char)6]))))));
                            var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (~(((/* implicit */int) (short)405))))) | (arr_15 [i_0 + 3] [i_0 + 2] [i_0 - 4] [i_0] [(unsigned char)0]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [(unsigned short)1])) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) arr_2 [4U])))) * (((/* implicit */int) arr_3 [i_0])))))));
                            arr_19 [i_0] [i_1] [i_0] [i_3] [9ULL] [3ULL] [10ULL] = 12866760114496509773ULL;
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_11 [i_2] [i_3] [i_3] [i_2] [i_1] [i_0 - 2]))));
                        }
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(arr_15 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 4]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (arr_0 [1ULL]) : (((/* implicit */int) (unsigned short)52036))))), (var_14)))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9223372036854775781ULL)))) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_11 [i_0] [i_0 + 4] [i_0 + 1] [i_0] [i_0] [i_0]))))) : (arr_10 [i_0] [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned int) arr_7 [i_0 - 3]);
    }
    for (unsigned int i_5 = 4; i_5 < 7; i_5 += 2) /* same iter space */
    {
        var_21 += ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((min((9223372036854775804ULL), (arr_10 [2ULL] [(_Bool)1] [i_5]))), (9223372036854775808ULL))));
        var_22 = ((/* implicit */unsigned char) ((short) arr_8 [(short)10]));
        arr_24 [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(-1247326911)))) ? (((((/* implicit */int) var_7)) << (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (short)9147))))))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)11056)), (arr_20 [i_5 - 3]))) : (arr_7 [i_5 - 2]))));
    }
    for (unsigned int i_6 = 4; i_6 < 7; i_6 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) (+(arr_22 [5U])));
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) min((min((arr_10 [i_6] [i_7] [i_6]), (((/* implicit */unsigned long long int) arr_32 [i_8 - 2] [10LL] [10LL] [i_6])))), (((/* implicit */unsigned long long int) ((long long int) min((arr_4 [i_6 - 1]), (1956890939U)))))));
                        arr_35 [(short)7] [i_7] [i_8] [i_9] = ((unsigned int) ((((/* implicit */_Bool) ((short) arr_4 [i_7]))) ? (((12086310068677282168ULL) % (9223372036854775789ULL))) : (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6 - 2] [6LL] [i_6])) ? (683477270994204884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(unsigned short)7] [i_6] [i_9] [(unsigned short)7] [i_8] [i_9])))))));
                        var_26 = (+(max(((-(var_14))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            arr_38 [i_6] [i_7 - 1] [i_8] [i_9] = ((/* implicit */long long int) var_5);
                            var_27 = ((/* implicit */unsigned long long int) ((arr_0 [i_6 - 4]) == (((/* implicit */int) ((_Bool) arr_21 [i_6] [i_6])))));
                        }
                        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((_Bool) arr_34 [i_6] [i_6] [i_9] [i_6] [7ULL] [i_6]));
                            arr_42 [i_6] [i_9] [i_8] [(short)10] [(_Bool)0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned short)11056)), (var_12))), (((/* implicit */unsigned int) arr_1 [8LL]))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            var_29 = arr_30 [6U];
                            var_30 = ((/* implicit */unsigned short) min((14591178194808024361ULL), (((/* implicit */unsigned long long int) -6486248845440114722LL))));
                            var_31 = 683477270994204884ULL;
                        }
                    }
                } 
            } 
        } 
        var_32 -= arr_10 [i_6] [i_6] [i_6];
    }
    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        var_33 = ((/* implicit */unsigned int) max((max((17819918680024025027ULL), (9223372036854775823ULL))), (((/* implicit */unsigned long long int) arr_47 [i_13]))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 12; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) <= (((/* implicit */int) (_Bool)1))))), (7011314643760309803LL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 1; i_17 < 13; i_17 += 4) 
                        {
                            {
                                arr_60 [(_Bool)1] [i_15] [i_17 - 1] = ((/* implicit */int) (-(((arr_59 [i_14 + 2] [i_16 - 1] [i_17 - 1] [i_17 + 1] [i_17] [i_17 - 1]) - (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)36841)))))))));
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_3))));
                                var_36 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((max((arr_54 [5ULL] [i_14] [i_14 + 1] [7ULL] [3U] [i_14]), (arr_46 [i_17 - 1]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49008))) <= (var_10)))) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) (unsigned char)0)), ((-(1048572U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_37 = ((/* implicit */short) (-(max((var_14), (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2338076358U))))))));
}

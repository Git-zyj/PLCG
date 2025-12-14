/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38918
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [20LL] &= ((/* implicit */long long int) arr_1 [i_0] [8LL]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) <= ((~(var_5)))));
        arr_4 [12ULL] |= (~(((/* implicit */int) (unsigned short)0)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        arr_9 [i_1] [0ULL] = ((/* implicit */unsigned short) -1252914135);
    }
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            arr_14 [i_3 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_2]))));
            arr_15 [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) ((arr_5 [i_3 - 1] [i_3 + 1]) / (arr_5 [i_3 - 1] [i_3 + 1])));
            arr_16 [i_2] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(-113755238065007011LL)))) || (((/* implicit */_Bool) var_0))));
            arr_17 [i_2] [(unsigned short)2] = ((/* implicit */long long int) (((~(-1252914140))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_25 [i_2] [i_5] [i_6] = ((/* implicit */long long int) ((8478386972489486053ULL) == (arr_6 [i_3 + 1])));
                            arr_26 [i_2] [i_4] [i_2] [13ULL] [i_2] = ((/* implicit */long long int) 4941745533175051473ULL);
                            arr_27 [i_2] [i_3 - 1] [i_4] [i_5] [i_4] = ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) % (var_7));
                            arr_28 [i_2] [i_3] [i_4 + 1] [i_5] [i_6] [2LL] = 6008439120528551075LL;
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            arr_31 [i_7] [i_7] = ((long long int) -1252914135);
            arr_32 [i_2] [i_7] [i_7 - 1] = ((/* implicit */unsigned short) ((1252914145) > (((/* implicit */int) ((((/* implicit */unsigned long long int) -6228795395277082572LL)) == (13658049664502921689ULL))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [10LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_18 [i_7] [i_2] [i_7 - 2] [i_9 + 1])) <= (((((/* implicit */_Bool) 2346398289972496007ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10)))));
                        arr_39 [i_8] [13LL] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_8)))));
                    }
                } 
            } 
            arr_40 [12ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_23 [1ULL] [i_2])) <= (14294932523395820065ULL)));
        }
        arr_41 [i_2] = ((/* implicit */unsigned long long int) -113755238065007018LL);
        arr_42 [i_2] = ((/* implicit */int) 0LL);
        arr_43 [i_2] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_34 [(unsigned short)4] [10ULL] [i_2] [i_2])), (max(((+(var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1)))))))));
    }
    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_50 [i_10] [i_11] = ((/* implicit */long long int) var_4);
            arr_51 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((long long int) ((unsigned short) 16100345783737055608ULL))) >= (var_13)));
            arr_52 [i_10] = ((/* implicit */int) ((long long int) min((((/* implicit */unsigned long long int) arr_0 [i_10] [i_11])), (1165758122155753262ULL))));
            arr_53 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_5)) ^ (113755238065007001LL)));
        }
        arr_54 [i_10] [i_10] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (+(-3209429589291673126LL)))), ((~(arr_49 [i_10] [i_10] [i_10])))))));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    {
                        arr_63 [i_10] [(unsigned short)9] [14ULL] [i_14] = ((/* implicit */unsigned short) ((long long int) (!((!(((/* implicit */_Bool) 2185548336564554496ULL)))))));
                        arr_64 [8LL] [i_12] [i_13] [18LL] [15] = var_6;
                        arr_65 [i_10] [i_12] [i_13] [3] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_0)) <= ((((+(955316806117826426ULL))) - (2185548336564554503ULL)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            arr_68 [i_10] [i_10] = ((/* implicit */unsigned short) min((-113755238065006982LL), (((/* implicit */long long int) ((int) arr_47 [i_10] [i_10])))));
            arr_69 [i_10] [i_10] [i_15] &= ((/* implicit */unsigned long long int) min(((~(((long long int) 16261195737144997110ULL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_10] [i_15])))))));
        }
    }
    var_17 = var_10;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47284
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
    var_19 = ((/* implicit */int) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (11403670501063237168ULL))), (max((7043073572646314431ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_3 + 1] [i_2] [i_2])), (11403670501063237169ULL)));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) 11403670501063237165ULL)) ? (7043073572646314454ULL) : (11403670501063237170ULL))) % (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_4])))));
                                var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2] [i_2]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_11 [(unsigned char)6] [i_0] [i_0] [i_3 + 2]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 694331538);
                                var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 11403670501063237180ULL)))) ? (arr_10 [i_0] [i_1 + 2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53293)))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) arr_1 [i_0 + 2]);
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_0 [4ULL]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 694331547))))), (arr_8 [i_0] [(unsigned char)12] [i_1 + 1] [i_1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned char) (+(((int) var_5))));
                                var_27 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47461))) < (11403670501063237152ULL))));
                                var_28 = ((/* implicit */long long int) var_0);
                                arr_30 [i_0] [(_Bool)1] [i_8] [3U] [4U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8250474864212953534LL)) ? (-1LL) : (8704164435874622334LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 12; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) arr_3 [i_12 + 1] [i_0 + 1]);
                                var_30 = ((/* implicit */int) arr_21 [i_8] [i_1 - 2] [i_8] [i_8 - 1] [i_12]);
                                var_31 += ((/* implicit */unsigned short) ((unsigned char) arr_23 [i_11] [i_1 + 1] [i_1 - 3] [i_1 + 2]));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 12; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_14 + 1] [i_14 - 1] [i_14 + 2] [i_14 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [1LL] [1LL] [i_13] [i_14 - 2] [1LL])) >= (2147483647))))) : (((((/* implicit */_Bool) arr_31 [i_1 - 2] [i_13] [i_14] [i_0])) ? (arr_37 [12ULL] [i_1 - 3] [(unsigned short)6] [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                                arr_46 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) var_6));
                                var_33 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_37 [i_0 - 1] [i_0] [i_0] [i_0])) : (7043073572646314433ULL))));
                            }
                        } 
                    } 
                    arr_47 [(short)12] [i_1 + 2] [(unsigned short)12] [i_0] = ((/* implicit */unsigned short) arr_22 [i_0 + 1] [(_Bool)1] [(_Bool)1]);
                    var_34 += ((/* implicit */unsigned int) ((unsigned long long int) var_11));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((11403670501063237197ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18)))))))) ? (7043073572646314436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)36589), (((/* implicit */unsigned short) var_2))))))));
}

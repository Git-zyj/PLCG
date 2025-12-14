/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198241
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
    var_17 -= (signed char)-3;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_1 + 2] [i_1 + 3]))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2] [(signed char)0])) ? (arr_5 [i_1] [i_1 + 4] [i_1]) : (arr_5 [i_0] [i_1 + 4] [7ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))));
                var_18 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) -782278687)) ^ (((unsigned long long int) (_Bool)1)))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) -3457888062603590387LL);
                /* LoopSeq 3 */
                for (long long int i_2 = 4; i_2 < 9; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_0] = ((/* implicit */signed char) 583239383643770549ULL);
                        arr_15 [i_0] [0ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) != (17863504690065781080ULL)));
                        arr_16 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3457888062603590396LL)) ? (((/* implicit */int) ((arr_11 [i_0] [5LL] [9LL] [i_0]) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_0 [i_1 - 1]))));
                        var_19 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 13911858355681163694ULL))));
                        var_21 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                        var_22 = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((((/* implicit */_Bool) 583239383643770526ULL)) ? (17863504690065781088ULL) : (arr_2 [i_1]))) >= (arr_5 [i_0] [i_2 - 4] [i_4])))));
                        var_23 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) != (((/* implicit */int) (signed char)-32))))) < (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (583239383643770549ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((var_15) ? (var_16) : (var_10))) : (((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_25 -= ((((/* implicit */int) (unsigned short)23335)) * (((/* implicit */int) (signed char)-9)));
                                var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (arr_18 [i_0] [(short)5] [(short)5] [i_5 - 1])));
                                var_27 = (signed char)32;
                                var_28 = ((/* implicit */short) arr_8 [i_1] [(signed char)5] [i_6]);
                                var_29 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    arr_25 [8] [i_1] [8] &= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1]);
                    arr_26 [i_0] [i_0] [i_2] = arr_2 [i_2 + 1];
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_30 = ((/* implicit */short) 583239383643770543ULL);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_7]))) != (arr_24 [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2] [i_7])));
                    var_32 = ((/* implicit */unsigned short) arr_27 [i_1 + 2] [i_1 + 4] [i_1 + 1]);
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 2) 
                {
                    arr_33 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)109))));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) + (9059902858201914662ULL)));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((unsigned short) 8029508212756401673ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) 3868775282U))));
                                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_31 [i_0] [8LL] [(signed char)10] [(signed char)10]))));
                                var_37 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (16433755720082899513ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_0] [i_1])) && (((/* implicit */_Bool) var_13))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

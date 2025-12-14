/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200709
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (-3756228198666479694LL))))) : (((long long int) arr_0 [i_0])))), (((/* implicit */long long int) (short)19786))));
                var_19 -= ((/* implicit */unsigned int) ((unsigned long long int) var_0));
                var_20 = arr_0 [i_1];
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 133169152U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0]))) : (5921782832619570973ULL))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 133169131U);
                        var_22 *= ((/* implicit */unsigned short) 19U);
                    }
                    arr_11 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))) : (133169152U))));
                    arr_12 [i_2] = ((/* implicit */unsigned long long int) 133169161U);
                }
                var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1LL)), (90461425584571778ULL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_24 = ((/* implicit */long long int) -1626265179);
                        arr_26 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((short) 133169161U));
                        var_25 = ((/* implicit */int) 133169152U);
                        arr_27 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) ((unsigned long long int) var_13))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned long long int) 3916840515U)) : (((((/* implicit */_Bool) 9615123424730197030ULL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))))))))));
                            arr_30 [i_8] [i_7] [i_6] [i_4] [i_4] = ((((/* implicit */_Bool) -13965911)) ? (arr_16 [i_4]) : (((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_16 [i_4]))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            arr_33 [1LL] [1LL] [i_6] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) arr_0 [i_4])) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_2 [i_4] [i_5] [i_6]))));
                            arr_34 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_31 [i_4] [i_9] [i_6] [i_9] [(signed char)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned long long int) 670514105))))));
                        }
                    }
                } 
            } 
            arr_35 [(_Bool)1] = ((/* implicit */signed char) arr_8 [i_4] [i_4] [i_5]);
            arr_36 [i_4] [i_5] = ((/* implicit */long long int) arr_6 [i_4] [i_4] [i_5]);
            arr_37 [(short)1] = ((/* implicit */unsigned long long int) var_1);
        }
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 9; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                {
                    arr_42 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1872198460)) ? (((int) -1872198460)) : (((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))));
                    arr_43 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) var_1));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */int) arr_1 [i_4]);
                                var_28 = ((/* implicit */unsigned short) (signed char)-64);
                            }
                        } 
                    } 
                    arr_50 [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) (short)-9782)), (((((/* implicit */_Bool) -3681566932706175277LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))), (var_11)));
                    var_29 = ((/* implicit */int) min((arr_29 [i_4] [i_4] [i_10] [i_11] [i_10] [i_11] [(short)5]), (((/* implicit */long long int) ((int) ((long long int) arr_39 [i_4]))))));
                }
            } 
        } 
        arr_51 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_49 [i_4])) ? (arr_47 [i_4]) : (((/* implicit */long long int) var_6))))));
        var_30 = ((/* implicit */unsigned long long int) 2033106108);
        arr_52 [i_4] = ((/* implicit */signed char) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((unsigned char) (short)-22087)))));
    }
    var_31 = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) min(((signed char)-58), ((signed char)117)))))));
    var_32 = ((((/* implicit */_Bool) max((((int) var_4)), (var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (12740198753230297479ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) var_8)));
}

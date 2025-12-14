/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195913
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_4 [(signed char)10] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [8])) >> (((/* implicit */int) arr_3 [i_0 + 2]))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 2]))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((long long int) arr_0 [i_0]));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((short) var_11));
            var_16 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)154));
            var_17 = ((/* implicit */signed char) 137438953472LL);
        }
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 10ULL)))) ? (((/* implicit */unsigned long long int) -4455759475110991289LL)) : (max((9ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */int) ((long long int) arr_7 [i_2 - 1] [i_2] [i_2]));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_8 [(short)16] [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_14)))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 4; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */long long int) arr_16 [i_3 - 1] [i_4] [i_4]);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), ((-(((((/* implicit */_Bool) 2784202677868652779ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_3] [i_6] [i_6])))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((arr_21 [i_3 + 2] [i_4]) != (arr_21 [i_4] [i_4]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) (-(arr_28 [i_3] [i_3] [i_5] [i_5] [i_6 - 2] [i_6] [i_7])));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(8ULL))))));
                            arr_29 [i_7] [i_3] = ((/* implicit */_Bool) ((int) 6821524599243386009ULL));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */int) 2004319567898683149LL);
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_1 [i_8]))))))));
        var_28 = ((/* implicit */_Bool) min(((-(var_12))), (((/* implicit */unsigned long long int) var_9))));
        arr_32 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_8])) == (((/* implicit */int) arr_3 [i_8]))));
        arr_33 [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_1 [i_8])), (251658240U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_13)))))))), (10ULL)));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (unsigned char)248))))))) ? (arr_7 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_2))))))));
                        var_30 |= ((/* implicit */int) arr_0 [(signed char)23]);
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_0))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_8] [i_11] [i_11]), (var_2))))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 20; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                            arr_46 [i_8] [i_9] [i_10] [i_11] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 3558558002U)))));
                            arr_47 [i_8] [i_9] = ((/* implicit */short) arr_36 [i_8]);
                            var_33 += ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)0)))))), (arr_9 [i_11])));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((arr_38 [i_11] [i_11]) ? (((/* implicit */unsigned int) ((int) var_13))) : (((((/* implicit */_Bool) arr_39 [i_9] [i_12 + 1] [i_10] [i_12])) ? (arr_39 [i_8] [i_10] [i_10] [i_10]) : (arr_39 [i_9] [i_11] [i_11] [i_12]))))))));
                        }
                    }
                } 
            } 
        } 
    }
}

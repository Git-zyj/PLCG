/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207273
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = 0ULL;
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((-4476001905474327608LL) > (1150197383164936178LL)));
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (arr_6 [i_3] [i_2] [i_1] [i_0]))) < (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_4 = 4; i_4 < 12; i_4 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_4 - 4] [i_4 - 4]))))) ^ (-1150197383164936159LL))))));
            var_17 = ((arr_9 [i_0] [i_0] [i_4]) - (((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0] [i_0] [i_4])) ? (arr_1 [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_4 - 1]))))));
            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_0])))) * (((/* implicit */int) arr_0 [11LL]))));
        }
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) var_4);
                        arr_23 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) 288230238712758272LL)) : (arr_19 [i_0] [i_0])))));
                        var_20 ^= ((/* implicit */unsigned short) ((arr_0 [i_6]) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_6]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_5] [(_Bool)1] [i_7] [i_0] [i_5] [i_0]) ? (var_4) : (arr_17 [11LL])))) ? (((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_6] [i_5] [i_6])) ? (-1LL) : (var_4))))));
                            arr_26 [i_0] [i_5] [i_5] [i_7] [i_8] = (~((-(var_11))));
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) (_Bool)0);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 3; i_9 < 10; i_9 += 2) 
    {
        arr_30 [i_9] = ((/* implicit */_Bool) arr_1 [i_9 - 3] [i_9 - 1]);
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (10ULL) : (((/* implicit */unsigned long long int) 4476001905474327607LL))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (1150197383164936159LL) : (arr_17 [i_9])))))))));
    }
    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((arr_41 [i_10 + 1] [i_10] [i_10] [i_11 - 1] [i_11]) / (arr_45 [i_10] [i_10] [i_14] [i_12 - 1] [i_14] [i_14]))) + (9223372036854775807LL))) >> (((max((max((var_12), (arr_34 [i_11] [2ULL] [i_11]))), (((/* implicit */unsigned long long int) arr_40 [(unsigned short)8] [i_14] [i_14] [i_13])))) - (11575114708344650604ULL))))))));
                                var_24 = ((/* implicit */unsigned short) max((arr_34 [i_10] [i_10] [i_14]), (((((/* implicit */_Bool) max((arr_32 [i_13]), (1150197383164936133LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : ((+(arr_35 [i_10] [i_11] [i_12])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31428)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65509))) : (-1150197383164936178LL))))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) var_12);
        var_27 = ((/* implicit */_Bool) (-(var_2)));
    }
    var_28 = ((/* implicit */unsigned short) var_8);
    var_29 *= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -2LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 288230238712758270LL)) : (var_3)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -2465685376410531466LL)) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17450))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43558
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        arr_10 [i_3] = ((/* implicit */unsigned int) (-((-(max((1190310185), (arr_4 [i_0])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_3 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [(short)2] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_8 [i_5] [i_1] [i_1] [i_0])))) - (((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)1] [i_0]))))));
                                var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (short)30462)), (arr_14 [(_Bool)1] [i_5] [5U] [i_5] [i_5 - 1] [i_4]))), (((/* implicit */unsigned long long int) ((short) arr_15 [i_5] [7U] [i_5] [i_5 - 1] [i_1])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) 0);
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)149)) && (((_Bool) (+(arr_6 [i_0])))));
        arr_18 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned int) -2086485918)), (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) > (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)16362)))) ? (((/* implicit */int) max((var_13), (var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [22] [i_0] [i_0] [(_Bool)1])))))))));
    }
    for (int i_6 = 3; i_6 < 14; i_6 += 3) 
    {
        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) arr_6 [i_6])) : (4032U)))) ? (min((arr_21 [i_6]), (((/* implicit */unsigned long long int) arr_20 [i_6])))) : (((/* implicit */unsigned long long int) 2147483647)))), (((((/* implicit */_Bool) 16081652171473245282ULL)) ? (2365091902236306334ULL) : (((/* implicit */unsigned long long int) ((int) -258167906)))))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_22 += ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-32011)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_27 [10U] [i_7] [0U] |= min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [(short)2] [i_6] [i_6]))) : (var_10))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) (signed char)87)))));
            arr_28 [i_7] [i_7] [(_Bool)0] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_0 [(_Bool)1])))), (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) || (min((arr_22 [i_6]), ((_Bool)1)))))));
        }
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_23 *= ((/* implicit */short) 2097148);
            /* LoopNest 3 */
            for (unsigned int i_9 = 2; i_9 < 13; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 2; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(16081652171473245282ULL))))));
                            var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) & ((+((-(2365091902236306334ULL))))));
                            arr_42 [i_10] [i_8] [10] [(_Bool)1] [(short)9] [i_10] [i_11 - 2] = ((/* implicit */int) arr_24 [i_6]);
                        }
                    } 
                } 
            } 
        }
    }
    var_26 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        for (signed char i_13 = 1; i_13 < 12; i_13 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 13; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (int i_16 = 3; i_16 < 10; i_16 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((5430941735521752574ULL), (((/* implicit */unsigned long long int) 2743227480U)))))))), (((var_14) | (2147483647)))));
                                var_28 = ((/* implicit */short) (-(((unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                arr_56 [i_13] = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}

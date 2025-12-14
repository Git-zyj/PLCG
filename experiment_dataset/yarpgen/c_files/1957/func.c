/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1957
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */signed char) var_10);
                        var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)49051)));
                        var_13 = ((/* implicit */int) (+(arr_11 [i_1])));
                    }
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) ((int) max((var_7), (((/* implicit */int) (unsigned short)49078)))));
                        arr_16 [i_4] [i_2] = ((/* implicit */int) arr_3 [(unsigned short)5] [i_2]);
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (((~(min((12ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) != (arr_7 [i_0] [i_0]))))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_1))));
                        var_17 *= (-(((/* implicit */int) var_3)));
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)88))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65509))))) ? (((int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)100)))) : (min((((((/* implicit */int) var_10)) >> (((2663559321U) - (2663559301U))))), ((~(((/* implicit */int) arr_5 [i_0] [i_1])))))));
                        arr_21 [i_0] [12ULL] [(_Bool)1] [i_5] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                        var_19 = ((/* implicit */unsigned char) ((((int) (_Bool)1)) + (((/* implicit */int) ((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_5]))) : (2932754285U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))))));
                    }
                    arr_22 [i_2] [i_1] = ((/* implicit */_Bool) (-(max((((var_0) ? (3758837877474865212ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_2])) << (((var_4) - (2475519029078521111ULL))))))))));
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_0);
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46462)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_1] [i_1]))))))));
                                var_21 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_6]))) >= (arr_11 [i_7 + 1])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((long long int) var_7));
    /* LoopNest 2 */
    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 24; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            {
                                arr_41 [i_8 + 3] [i_11] [i_8] [i_8] [i_9] [i_8 + 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_40 [i_8] [i_9] [i_9] [i_11 - 1] [i_10] [i_9] [i_11 - 2]), (((/* implicit */unsigned char) var_8))))) * ((+(((/* implicit */int) arr_30 [i_9] [i_9]))))))) == (((unsigned int) arr_34 [i_8 + 1]))));
                                arr_42 [i_11] [i_9] [(unsigned char)8] [i_9] [i_11] [i_9] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_40 [i_8] [i_8] [i_9] [i_10] [i_11] [i_12] [i_12])))), (((/* implicit */int) ((signed char) var_0)))))) & (((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1])) ^ (((/* implicit */int) var_6))))) : (((var_4) - (((/* implicit */unsigned long long int) -1319088116004443262LL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 4; i_15 < 21; i_15 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2663559322U)) ? (arr_46 [i_8] [i_8]) : (((/* implicit */int) arr_37 [i_8 - 1] [i_9] [i_13] [i_14] [i_15]))))) ? (2333281426U) : (((/* implicit */unsigned int) min((var_7), (arr_35 [i_8] [i_13] [i_8])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (-5613390267063579801LL)))) ? (min((arr_38 [i_8]), (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_40 [i_8] [i_8] [i_13] [i_13] [i_15] [i_14] [i_13])))))));
                                var_25 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) ((int) var_6)))), (3198083340U)));
                                var_26 -= (+(((/* implicit */int) var_3)));
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (var_4)));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_9)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

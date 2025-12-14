/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196641
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
    var_15 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)233))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 4421817792710628288ULL))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) (unsigned char)221);
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_18 -= ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(signed char)12] [i_2 - 2] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_2 - 3] [i_1])) : (((/* implicit */int) (unsigned char)221))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) 2147483641)) != ((+(arr_8 [i_0] [i_1] [i_2 + 3] [i_4]))))))));
                        arr_12 [14ULL] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_6 [i_0]);
                        var_22 = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)0))))));
                    }
                    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5 + 3] [i_1] [i_5])) ? (arr_8 [i_6] [i_6] [i_6] [i_5 - 3]) : (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6])))))));
                            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))) ? ((-(((/* implicit */int) var_4)))) : ((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_5 + 2]))))))));
                            var_25 = ((/* implicit */short) (unsigned char)7);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [12LL] [(unsigned char)17] [i_2 - 3] [i_5 + 2] [i_6])) ? ((+(((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [(short)9] [i_1] [11LL] [9] [20LL])) <= (((/* implicit */int) arr_4 [i_0])))))));
                            arr_21 [17LL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10991046136874138213ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0])))))));
                        }
                        for (int i_7 = 2; i_7 < 19; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) arr_23 [i_0] [i_2 + 2] [i_2] [i_5 + 4] [i_7 - 2] [i_2])) ? (((/* implicit */int) arr_17 [i_1])) : ((+(((/* implicit */int) (unsigned char)219))))))));
                            arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (arr_14 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [15LL] [i_0] [(unsigned char)19]))))) : (arr_13 [i_5 + 4] [i_5 + 4] [i_0] [i_5 - 1])));
                        }
                        var_28 = ((/* implicit */_Bool) (short)32752);
                        arr_25 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])))) ? (arr_11 [i_2 - 3] [i_2 + 3] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (arr_14 [i_0] [i_1]) : (((/* implicit */int) (_Bool)1)))))));
                        var_29 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-196))))));
                    }
                    for (short i_8 = 2; i_8 < 21; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_1] [i_2 + 3] [i_2] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(5761070216632486026ULL)))) ? (18446744073709551602ULL) : (24ULL)));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])))))));
                        var_31 += ((/* implicit */_Bool) 9223372036854775807LL);
                        var_32 = ((/* implicit */unsigned char) arr_20 [i_8] [i_1] [i_2] [i_8] [i_0] [(_Bool)1]);
                    }
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        var_33 = (_Bool)1;
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) 5833754450468841627LL))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13648)) ? (13567515130716755810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
    }
    var_36 *= var_3;
}

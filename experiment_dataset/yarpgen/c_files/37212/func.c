/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37212
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
    var_13 = ((/* implicit */signed char) ((short) (short)-19914));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [3ULL])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_8) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [6LL] [6LL]))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) & (((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */long long int) -1)) : (-8LL))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_1])))) && (((/* implicit */_Bool) ((arr_3 [i_4] [i_3]) ? (((/* implicit */int) arr_0 [(short)13])) : (((/* implicit */int) arr_8 [i_1] [i_3] [i_4]))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */long long int) ((_Bool) arr_11 [i_3] [i_2] [i_1]));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_25 [i_1] |= ((/* implicit */signed char) var_12);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) (unsigned short)16659)) : (((/* implicit */int) (signed char)-127)))) | (((/* implicit */int) arr_22 [i_1] [i_1]))));
                                var_21 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_5 [i_9])))));
                            }
                        } 
                    } 
                    arr_32 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_27 [i_1] [i_6] [i_7] [i_6]))));
                }
            } 
        } 
        arr_33 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_29 [i_1])))) : (((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (var_10) : (((/* implicit */unsigned int) arr_14 [i_1] [(signed char)18] [i_1] [i_1] [(signed char)18]))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206269
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_0] [(signed char)8])))) ? (((/* implicit */int) arr_1 [3U])) : (((/* implicit */int) (unsigned char)225))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 -= ((/* implicit */unsigned long long int) ((_Bool) ((arr_0 [i_0] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-29933))))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3]))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (short)-1135)) - (((/* implicit */int) (signed char)-118))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (min(((-(arr_19 [i_5] [i_5] [i_5]))), (((/* implicit */long long int) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                    arr_20 [i_4] = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_3)))));
                }
            } 
        } 
    }
    var_14 = var_2;
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_5)))) : (max((var_7), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (min((var_1), (((/* implicit */unsigned int) (unsigned char)42)))) : (min((((/* implicit */unsigned int) var_2)), (var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 4; i_7 < 14; i_7 += 1) 
    {
        for (int i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            {
                var_16 |= ((/* implicit */_Bool) var_5);
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 4; i_10 < 13; i_10 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)30)), (var_7))))));
                            /* LoopSeq 1 */
                            for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                            {
                                arr_35 [i_7] [i_8] [14ULL] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */int) var_4)) ^ (arr_28 [i_7] [i_8 - 1]))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_3))));
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9419351364279063715ULL)) ? (((((/* implicit */_Bool) arr_33 [(signed char)6] [i_8] [(short)9] [i_8] [(short)9])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47346))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(unsigned char)9] [(unsigned short)5])))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((!(arr_30 [i_7] [i_7 - 1]))) && ((!((_Bool)1))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_34 [i_8] [i_8 + 1] [i_8]) : (arr_34 [5] [i_8 + 1] [i_7])))) && (((/* implicit */_Bool) arr_34 [i_8 + 1] [i_8 + 1] [i_7 - 4]))));
            }
        } 
    } 
}

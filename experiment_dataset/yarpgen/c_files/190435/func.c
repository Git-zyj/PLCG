/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190435
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        arr_8 [i_0] [i_1] [i_2] [9] [1U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [15ULL] [i_2] [i_1])) ? (((/* implicit */long long int) arr_1 [i_1] [12ULL])) : (arr_7 [i_0] [i_1] [i_1] [i_1])));
                        var_14 = ((/* implicit */int) (~(var_3)));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) -246964370);
                        var_16 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 += ((/* implicit */unsigned int) arr_3 [9] [9]);
                            var_18 = ((/* implicit */unsigned int) ((unsigned char) 246964368));
                        }
                        var_19 = ((/* implicit */int) max((var_19), (((var_8) ? (((((arr_2 [(unsigned char)12] [14U]) + (2147483647))) << (((((var_3) + (2528017857380387430LL))) - (26LL))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_4) : (arr_2 [(short)5] [8LL])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_0] [(_Bool)1] [i_0] [i_5]) : (arr_7 [(_Bool)1] [(unsigned char)2] [0LL] [i_2])))) ? (arr_7 [i_0] [i_0] [(_Bool)1] [i_5]) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5] [i_5])) ? (arr_7 [i_0] [i_0] [10U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                            arr_17 [i_1] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_5] [i_7])))) + (((((/* implicit */_Bool) var_4)) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2])))) : (((/* implicit */unsigned long long int) ((var_8) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                            var_21 = ((/* implicit */int) max((var_21), (var_4)));
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */short) arr_19 [i_0] [i_1] [23] [i_1] [i_8]);
                            var_23 = ((/* implicit */short) var_11);
                        }
                    }
                    var_24 = ((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [(unsigned char)21] [i_1]) + (((/* implicit */long long int) (+(246964368))))));
                    var_25 += ((/* implicit */_Bool) arr_12 [18] [i_2] [(_Bool)1] [i_0]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            {
                var_27 = ((/* implicit */int) arr_6 [i_9]);
                var_28 += ((/* implicit */int) ((((/* implicit */_Bool) 246964368)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) : (0LL)));
                var_29 = ((/* implicit */unsigned char) -12179299);
            }
        } 
    } 
}

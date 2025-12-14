/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205459
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) ^ (max((2514555029U), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((int) var_9)) ^ (((/* implicit */int) min(((unsigned char)67), ((unsigned char)176)))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 2; i_4 < 17; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0] [i_4 - 1] [2] [i_3 + 2]));
                                arr_13 [i_0] [(unsigned short)0] [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */int) arr_8 [i_0] [i_1] [i_3 + 4] [i_4 - 2]);
                                arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = (+(((/* implicit */int) min((arr_10 [i_1] [i_2 - 1] [i_3] [i_4 - 1] [i_4]), (arr_10 [i_1] [i_2 - 1] [i_2] [i_4 - 1] [i_1])))));
                                arr_15 [i_1] [1ULL] = ((/* implicit */unsigned char) var_14);
                            }
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(2147483647)))))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_2 - 1] [i_1])))) : (((/* implicit */int) arr_4 [i_0]))));
                            arr_16 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            arr_23 [i_6] [i_5 + 1] = ((/* implicit */int) arr_21 [i_5] [i_6]);
            arr_24 [5] [i_5 + 1] = ((/* implicit */unsigned short) (+(arr_20 [i_5 - 1])));
        }
        var_21 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (3422140185U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 2])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))));
    }
}

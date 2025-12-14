/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199061
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */_Bool) (short)-9200);
                    arr_9 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (+((+(arr_0 [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)45439)) : (((/* implicit */int) (signed char)20)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) 1372552173U))) && (((/* implicit */_Bool) ((short) 251658240U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                arr_17 [i_3] [i_4] [(short)6] = ((/* implicit */short) (signed char)-88);
                arr_18 [i_3 - 1] [i_3] [i_4] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_3 + 1])) : (((/* implicit */int) arr_4 [i_5 + 1] [i_3 - 2]))));
            }
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                arr_21 [i_6] [i_4] [i_6] = ((/* implicit */unsigned char) var_10);
                arr_22 [i_6] [i_6] = ((/* implicit */_Bool) 10577804624676726189ULL);
            }
            arr_23 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_5 [i_3] [(_Bool)1] [i_4])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            arr_24 [i_4] [20ULL] [20ULL] = ((/* implicit */short) (-(((/* implicit */int) arr_16 [(unsigned short)0] [i_4] [i_3 + 1]))));
        }
        arr_25 [i_3 + 1] = (+(arr_0 [i_3 - 2] [(short)11]));
        arr_26 [i_3] = ((/* implicit */signed char) 3ULL);
        arr_27 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */int) arr_20 [i_3 + 1] [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_3 + 1] [i_3 - 2] [i_3]))));
    }
}

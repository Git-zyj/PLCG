/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221250
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
    for (int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) ((signed char) (short)-9131))) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) (-(arr_7 [i_0] [i_1] [i_2])));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [15U])) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0))))), (arr_7 [i_0] [(_Bool)0] [i_0 - 1])));
                }
                var_20 ^= var_3;
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) arr_4 [i_3]);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (var_5)));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (!((_Bool)1)));
            arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [(unsigned short)4] [(unsigned short)4]))))) ^ (((/* implicit */int) arr_10 [(_Bool)1]))));
        }
        var_24 = ((/* implicit */signed char) ((unsigned char) arr_12 [i_3] [i_3] [i_3] [i_3]));
        var_25 = ((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3]);
    }
    var_26 = ((/* implicit */unsigned long long int) (unsigned short)65532);
    var_27 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (arr_18 [i_7] [i_7])));
        var_29 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) (short)12057))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), ((unsigned short)23976))))) : (((arr_2 [i_7] [i_7]) ^ (arr_2 [i_7] [i_7])))))));
        arr_19 [i_7] = ((/* implicit */_Bool) ((unsigned int) var_11));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229174
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
        var_11 += ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [2]) / (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((long long int) 1672761802455088132ULL))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [14U]))) : (min((arr_0 [i_0] [(short)20]), (((/* implicit */unsigned long long int) var_2))))))));
        var_12 = ((/* implicit */long long int) var_1);
        var_13 = ((/* implicit */int) min((((/* implicit */long long int) var_6)), (((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) var_2)) - (8621)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)51444)) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (4257728492295912604ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_1 + 3] [i_2] [i_1])), (arr_6 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-3)) ^ (arr_5 [i_1] [i_1])))) : (1672761802455088152ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_10)))))))))));
                    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_1 + 1])) + (2147483647))) >> (((/* implicit */int) var_8))))), (arr_6 [i_1])));
                    arr_13 [i_1] [i_2] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -2870319187531659392LL)) ? (1810262149) : (309850295)));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4 - 1])) < (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [3U] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))));
                        arr_26 [i_7] [i_7] |= ((arr_22 [i_4] [i_4 - 1] [i_4] [i_4]) >> (((((/* implicit */int) arr_14 [i_4])) - (15491))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 4257728492295912604ULL)) || (((/* implicit */_Bool) arr_15 [i_4])))))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_3))));
    }
}

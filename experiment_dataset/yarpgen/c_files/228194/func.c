/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228194
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_17 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) & (143122243))) ^ (((/* implicit */int) var_6))));
        var_18 &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)12364))));
    }
    var_19 |= ((/* implicit */int) ((10634899101104952835ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115)))));
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)6251)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15359))) : (17708717341011715658ULL)));
        arr_5 [8] [i_1] = ((/* implicit */short) var_7);
    }
    for (short i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            arr_14 [i_2 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_3)) : (var_0))))));
            arr_15 [i_2] [i_2] [(unsigned char)9] |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_14))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) (short)425)) : (var_0)));
        }
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (3251040548115931737ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7141))) >= (7677898071783064533ULL)))) : (((var_11) | (((/* implicit */int) (unsigned char)220))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_2]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) arr_8 [i_2 - 1] [i_2 + 1])))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_1))), (((int) -69195206918582454LL))))))))));
    }
    var_24 = ((((/* implicit */int) (unsigned short)36970)) ^ (((/* implicit */int) (unsigned char)170)));
}

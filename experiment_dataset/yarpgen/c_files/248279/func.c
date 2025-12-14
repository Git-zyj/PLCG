/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248279
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
    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) 499088936)) & (var_10))) >= (var_6))) ? (((var_8) * (((/* implicit */unsigned long long int) ((623366525U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))))) : (((/* implicit */unsigned long long int) var_3))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) + (max((((/* implicit */unsigned long long int) (unsigned char)234)), (0ULL)))))));
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 1953833295)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] |= ((/* implicit */unsigned int) (-(max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((3458764513820540928LL) != (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) ? (8734340211790433384ULL) : (0ULL)));
            arr_8 [i_0 - 1] = ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        for (int i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            arr_12 [i_2] [(unsigned short)4] [i_2 + 2] = ((/* implicit */unsigned char) min((5785044682444179137ULL), (((/* implicit */unsigned long long int) (signed char)0))));
            var_19 = ((/* implicit */short) (unsigned char)126);
            var_20 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)21)), (9712403861919118231ULL)));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            var_21 &= ((/* implicit */unsigned char) ((int) arr_10 [i_3 - 1] [6LL] [i_3 + 2]));
            var_22 += ((/* implicit */_Bool) arr_6 [i_0 - 1]);
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 8; i_4 += 1) 
    {
        arr_17 [i_4 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_15 [i_4 + 2])) : (((/* implicit */int) arr_15 [i_4 + 1]))));
        arr_18 [i_4 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1701178077)) ? (((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) (short)20585))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */short) arr_19 [i_5]);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 795789125)) && (((/* implicit */_Bool) (short)-1))))) / (((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [i_5]) : (arr_19 [i_5])))));
        var_24 -= ((/* implicit */short) ((((((/* implicit */int) (signed char)-39)) <= (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_19 [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551615ULL))))) : (max((arr_19 [i_5]), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (short)-21345))))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((signed char) ((((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_12)) - (196))))) & (((/* implicit */int) min((arr_20 [i_5]), (((/* implicit */unsigned short) (unsigned char)0)))))))))));
    }
    var_26 = ((/* implicit */unsigned char) ((max((var_6), (((/* implicit */unsigned int) (unsigned char)0)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((int) (signed char)-77)))))));
}

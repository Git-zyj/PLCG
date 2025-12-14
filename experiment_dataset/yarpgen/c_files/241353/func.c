/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241353
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
    var_15 = ((((((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)110)))) : (((/* implicit */int) var_9)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-14)) : (var_6)))) ? ((-(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (short)-10684)))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_1)), (var_4))))) && (((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0ULL) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 1])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_0] [i_0 + 1])));
            var_19 ^= ((/* implicit */long long int) (signed char)84);
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    arr_15 [i_0] [i_3] [i_0] [(signed char)14] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0 + 1] [i_0]);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)107))))) ? ((+(((/* implicit */int) (unsigned short)1792)))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (short)-21751)))))))));
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3232293309U)))))));
                }
                arr_16 [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_0 + 2] [i_2] [i_2] [(signed char)0])))) ? (arr_9 [i_0 - 1] [i_2] [i_3]) : (((((/* implicit */int) (signed char)104)) | (((/* implicit */int) (signed char)104))))));
                arr_17 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0 - 1]))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_7))));
            }
            var_23 = ((/* implicit */unsigned char) arr_3 [i_2] [i_0 + 1] [i_2]);
            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(short)0] [i_0 + 2] [i_0 - 1] [(short)0]))) : (var_4)));
            arr_18 [i_0 + 2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-61)))))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            arr_21 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)118)) << (((/* implicit */int) (_Bool)1))));
            arr_22 [i_5] = ((/* implicit */_Bool) (unsigned char)255);
            arr_23 [i_5] [i_5] = ((unsigned long long int) (signed char)120);
        }
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                {
                    var_26 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (arr_20 [i_6] [i_6] [i_6])))));
                    var_27 = ((/* implicit */short) ((_Bool) (short)-13260));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (short)25071))));
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)2))))) ? (((((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [i_6])) & (var_13))) : (0ULL))))));
        var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6]))) ^ (arr_3 [(_Bool)1] [i_6] [i_6])));
        arr_33 [i_6] = (_Bool)0;
    }
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        var_31 = ((/* implicit */short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_9] [i_9])) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_4 [i_9] [i_9]))))))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-(((((var_5) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_11 [i_9] [(short)2])) + (164))) - (37))))))))));
        var_33 = ((/* implicit */unsigned short) (signed char)79);
    }
}

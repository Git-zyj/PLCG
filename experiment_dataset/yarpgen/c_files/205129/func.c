/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205129
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_13 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32754)) ? (15467371272482793773ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 15467371272482793753ULL)))) : (2096640U)))), ((+((+(2979372801226757856ULL))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2979372801226757879ULL)) ? (2509011961968502094ULL) : (((((/* implicit */_Bool) 2979372801226757843ULL)) ? (15467371272482793772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */unsigned short) 2004855183U);
                    var_16 |= ((/* implicit */unsigned char) arr_13 [2U] [i_1] [i_1] [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_18 [i_1] = ((/* implicit */short) (((+(2979372801226757842ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 15467371272482793743ULL))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (_Bool)1))))), ((~(2979372801226757879ULL))))) : (((((/* implicit */_Bool) (short)-11578)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_5] [i_0] [i_1] [i_0])) >> (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2979372801226757844ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_23 [i_1] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (63U)))));
                            arr_24 [i_0 + 1] [i_1] [i_2] [i_7] [(_Bool)1] = ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_6 - 1])) ? (15467371272482793737ULL) : (var_4));
                        }
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */short) ((long long int) ((3919229220U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [12LL] [i_2] [i_6] [i_8]))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_14 [i_0] [i_0 + 1] [5ULL] [i_6 + 2] [i_8] [i_6 + 2]) : (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6 + 1] [i_8] [i_8])));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2979372801226757836ULL)) ? (var_4) : (var_5)));
                        }
                    }
                }
            } 
        } 
    } 
    var_21 = min((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-20129)))) : (((/* implicit */int) ((((/* implicit */int) (short)-8)) > (((/* implicit */int) var_0)))))))), (min((min((var_1), (((/* implicit */unsigned long long int) 2290112113U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))))));
    var_22 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_2)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29790
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1704762480) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_12)) ? (576460752303423488LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25770)) ? (((/* implicit */int) var_14)) : (1704762467))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4] [(unsigned short)5] [i_3] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1704762487)) ? (((/* implicit */int) (unsigned short)34464)) : (1704762458)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (1704762485)))) : (((((/* implicit */_Bool) (short)-22076)) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])) : (arr_4 [i_0])))));
                                var_20 = ((((/* implicit */_Bool) ((arr_1 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22076))) : (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) 162722845)))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (var_8) : (arr_13 [(_Bool)1] [i_1] [0U] [(short)6] [i_3] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) -1704762467)) : (var_4)))) ? (((((/* implicit */_Bool) 8448591115846708505LL)) ? (((/* implicit */int) (short)-22076)) : (1704762464))) : (((((/* implicit */_Bool) (unsigned short)59298)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (signed char)62)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_5 - 2]) : (arr_3 [i_5 - 4])))) ? (((((/* implicit */_Bool) var_17)) ? (var_18) : (-1535222829))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (63)))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4240778438U)) ? (18204752410623969979ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((arr_11 [i_5 + 1] [i_5] [i_5 - 2] [11]) ? (((/* implicit */int) (short)6364)) : (((/* implicit */int) arr_11 [i_5 - 2] [i_5] [i_5 + 1] [i_5 + 1]))))) : (((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */long long int) 2633983570U))))));
                                var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31732)) ? (((/* implicit */int) (short)-5996)) : (((/* implicit */int) (short)29900))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16168)) ? (((((/* implicit */_Bool) (signed char)-41)) ? (-734670242) : (((/* implicit */int) (unsigned short)43873)))) : (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (short)-6364)) : (((/* implicit */int) (unsigned short)12))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (8114951960960331547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (unsigned short)44306))))) : (((((/* implicit */_Bool) -8448591115846708487LL)) ? (var_11) : (var_1))))))));
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_9))));
    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 925569293U)) ? (((((/* implicit */_Bool) 18204752410623969979ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2043395249U)) ? (-1704762467) : (((/* implicit */int) (unsigned short)45306)))))))) ? (((/* implicit */int) (unsigned short)19490)) : (((/* implicit */int) var_16)));
}

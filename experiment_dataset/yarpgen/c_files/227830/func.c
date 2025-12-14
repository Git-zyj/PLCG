/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227830
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
    var_12 = min((((/* implicit */unsigned long long int) var_6)), (min((min((var_3), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (1805661418)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)1)) ? (((int) arr_2 [4U] [i_1])) : (1302046913)));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) var_10));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) ((short) var_4));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (var_8)));
                var_16 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)55788)) : (2134960990)));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_2] [i_3 + 1] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12406473528632435831ULL)) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_2])) : (((/* implicit */int) arr_11 [i_2] [11LL] [i_3])))))));
                arr_13 [0ULL] [i_2] [i_2] [i_0] = ((/* implicit */short) ((var_9) ? (((long long int) arr_11 [i_2] [9LL] [9LL])) : (((long long int) var_6))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 += ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [13] [i_2]));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    var_19 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_5 + 1] [6ULL]));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32196)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [4] [i_5 + 1] [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_24 [i_0] [(_Bool)1] [i_4] [i_2] [i_6] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((/* implicit */long long int) -1675771838)) : (var_5))));
                        arr_25 [i_2] = ((/* implicit */unsigned int) ((short) ((short) 17LL)));
                        var_21 *= ((long long int) (_Bool)1);
                    }
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) -879415810))) ? (((((/* implicit */_Bool) -879415807)) ? (-3002726286934508892LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2582))))) : (((/* implicit */long long int) ((unsigned int) arr_8 [i_0])))));
                }
                var_23 = ((/* implicit */int) ((unsigned long long int) 1675771838));
                var_24 = ((/* implicit */short) ((var_6) ? (((/* implicit */int) var_9)) : (var_7)));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_25 -= ((/* implicit */_Bool) ((int) var_3));
                    var_26 = ((/* implicit */short) ((arr_11 [i_2] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) ((((_Bool) 0ULL)) ? (1675771859) : (arr_21 [i_0] [i_2] [i_7] [i_2])));
                        arr_30 [i_7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1721098802)) ? (((/* implicit */unsigned long long int) var_7)) : (5098595666112107955ULL)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)28703))))));
                        var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)1])) ? (((/* implicit */unsigned long long int) arr_23 [i_0] [i_2] [i_4] [i_7] [(unsigned short)14])) : (arr_16 [(short)8] [i_0] [i_0] [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3U)) ? (var_7) : (((/* implicit */int) var_0))))) : (6622127767070332084ULL)));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8] [i_4])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_4 [i_2] [i_0])));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned long long int) arr_9 [i_2] [i_2] [i_0])))));
                    }
                }
            }
            var_31 = ((/* implicit */short) ((unsigned int) arr_23 [i_2] [i_2] [i_2] [12LL] [i_2]));
        }
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_21 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_0])) : (3002726286934508897LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22047))) : (var_11))))));
    }
    var_33 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12))) : (0ULL))), (((/* implicit */unsigned long long int) var_11))));
}

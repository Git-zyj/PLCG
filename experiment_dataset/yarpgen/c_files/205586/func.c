/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205586
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
    var_11 = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) var_3)) ? (2305807824841605120LL) : (var_1))))), (var_1)));
    var_12 = (-(((((/* implicit */_Bool) (unsigned short)40824)) ? (-4584076885253557521LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-13))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = (+(2147483630));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_14 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_3])) ? (1044480) : (((/* implicit */int) arr_5 [i_0 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (3026305078080555637LL))) : (((((/* implicit */_Bool) (short)-21301)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-5015101754115129930LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) (+((+(max((arr_11 [i_0] [i_0]), (342632417)))))));
                            var_16 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned short)20)))))), ((-((-(((/* implicit */int) (signed char)127))))))));
                            var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(-7394368215236712668LL)))) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)9])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)215)), ((short)0)))))))));
                        }
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */long long int) max((arr_0 [i_0 - 1]), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -3736478486335997815LL)) ? (arr_3 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))))))))))));
                        var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (-6LL) : (((/* implicit */long long int) (~(1))))))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)105)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [0ULL]) : (((/* implicit */long long int) arr_0 [i_2])))))))))))));
                    }
                    for (short i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) * (min((max((4186966605719444233LL), (arr_1 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))))))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))) ? (-1849339214) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */int) (short)26099)) == (((/* implicit */int) arr_5 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_6] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [(short)7]))) : (-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_7))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0 - 1]))));
                        var_24 = ((/* implicit */short) ((arr_4 [i_0 - 1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_25 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0])) ? (4146377884763765879LL) : (arr_1 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                    }
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77)))))) ? (((((/* implicit */_Bool) 1193257833631403529ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (arr_18 [i_1] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6282161104214331098LL)))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (0ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) | (arr_15 [i_0] [i_0] [i_1] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
}

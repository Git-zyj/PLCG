/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29992
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_10), (var_6))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))))))) : (max((((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) var_9))))), (var_8)))));
    var_14 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7965529248997503325LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : ((-(var_2))))), ((((!(((/* implicit */_Bool) 4158852732759459485ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) : (var_2))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((((arr_0 [i_2] [i_0]) != (arr_6 [i_0] [13ULL] [13ULL]))) ? ((~(arr_1 [i_0] [16ULL]))) : (max((((/* implicit */long long int) 1484710504U)), (-5965995064463857858LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [14ULL]))) : (arr_5 [i_2])))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_1] [i_0])))) : (arr_5 [i_2]))));
                    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 7300293009345234489LL)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [(unsigned short)2]) : (arr_5 [18LL]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2])) ? (arr_5 [(short)18]) : (arr_5 [16ULL])))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)17] [3U])) ? (((/* implicit */unsigned long long int) arr_1 [18LL] [18LL])) : (arr_4 [i_0] [7U] [i_2])))) ? (((/* implicit */unsigned long long int) max((3343415620U), (2235859099U)))) : (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_0 [8ULL] [i_0])) : (arr_5 [14LL])))))));
                    var_17 &= arr_5 [(unsigned char)12];
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (min((((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_4] [(unsigned short)14]))))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_3]))) + (arr_0 [i_0] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_3] [(unsigned char)6] [i_4])) | (((/* implicit */int) arr_9 [i_3] [i_3] [i_1] [i_2] [(short)14] [i_4] [i_4])))))))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12108915658039415948ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20984))) : (-9213116862211919641LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2] [i_3] [i_1] [i_3] [(short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [8U] [i_3] [i_1]))) : (arr_5 [i_2])))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [9ULL] [i_2 - 1] [i_1] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_4 + 2])) ? (arr_0 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_4]))) : (arr_6 [i_0] [i_2] [20U])))) : (arr_4 [i_0] [i_2] [i_2])))));
                                arr_12 [i_4 + 3] [17LL] [i_1] [i_1] [i_2] [17U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_2] [i_3] [i_4 + 1] [i_4 + 1] [i_2])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_3 [(unsigned char)21])) ? (((/* implicit */long long int) arr_0 [i_0] [i_4])) : (arr_1 [i_4] [i_1]))) - (1549336580LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_4 [i_0] [i_1] [i_2 - 1])))) ? (((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */unsigned short) arr_2 [i_1] [i_1]))))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_2]))))) : (((((/* implicit */_Bool) (~(7448190172731698253LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [17LL] [i_3])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) : (arr_5 [i_2])))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] [22LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) % (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_4 - 1] [i_3] [i_2] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_2 [i_0] [14ULL]))))) : (((((/* implicit */_Bool) arr_10 [i_4] [i_2] [i_2] [i_0])) ? (arr_6 [i_0] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))) ? (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (13827590245285951273ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_0 [11U] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [6ULL] [i_2] [i_2] [i_1])))))) ? (((((/* implicit */_Bool) 13468834841973531840ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)29701)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_3] [i_2] [i_3] [i_4] [3U] [19ULL])))))))));
                                var_20 = ((/* implicit */long long int) ((max((max((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (arr_4 [i_0] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_3] [i_4]))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (2732390807U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32716)))))) ? (min((12767894810034248093ULL), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20129))) ^ (-7206431023388351372LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

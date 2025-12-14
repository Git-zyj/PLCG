/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200326
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-30984))))))) ? (arr_2 [i_1] [i_1]) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((18446744073709551596ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29952))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10852)))))));
                    var_12 = ((((/* implicit */_Bool) (-(max((arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25934)) ? (arr_2 [i_0] [(short)6]) : (arr_2 [20ULL] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31797))) : (arr_0 [i_0] [i_1]))) : ((+(max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)-20)))))));
                    arr_7 [i_1] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25937))) * (3458764513820540928ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)19074)))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21))) ^ (arr_6 [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)2] [15ULL] [8ULL])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [12ULL]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31803))) : (12276665865476416701ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (((/* implicit */int) (short)27852)) : (((/* implicit */int) (short)-6)))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((arr_1 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)63)) <= (((/* implicit */int) (short)-7855))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [11ULL] [i_0])) ? (((/* implicit */int) min(((short)-3154), ((short)-31815)))) : (((/* implicit */int) arr_4 [i_0 - 2]))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (6170078208233134918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7858))));
        arr_10 [i_0] = var_4;
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), ((+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)31803))))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_13 [i_3]))))) ? (((/* implicit */int) (short)-31804)) : ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) 4971666974158780124ULL)))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max(((short)34), ((short)-14))))));
}

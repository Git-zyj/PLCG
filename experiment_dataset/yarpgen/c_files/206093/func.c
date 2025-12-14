/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206093
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((3967748729U) + (3967748735U))))))) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_2 [i_0 - 1]))))));
                var_16 = ((((/* implicit */_Bool) (-(((arr_3 [i_0] [2LL]) & (((/* implicit */unsigned long long int) 327218560U))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8866925098489950868LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 4]))) : (var_3)))))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) 327218583U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))) : ((~((((_Bool)1) ? (3967748712U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12)))))))));
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65528)), (((((/* implicit */_Bool) 80145683)) ? (((/* implicit */unsigned long long int) 3967748711U)) : (((((/* implicit */unsigned long long int) var_6)) - (16208969973006938492ULL)))))));
                arr_5 [7ULL] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) != (var_14))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : ((~(((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (var_9)));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 1669401723U)) ? (((/* implicit */unsigned long long int) 3967748709U)) : (var_14))) : (((/* implicit */unsigned long long int) var_2))));
    var_22 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((4611404543450677248LL) & (((/* implicit */long long int) -1675266851)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13347741710922331095ULL))))))))) ? (((/* implicit */int) ((var_2) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))))) : (var_1));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197413
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) arr_2 [i_0] [10U])))) : (((/* implicit */int) var_10))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned short)32078))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))) : (4261412864U))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_2 [i_0 - 1] [(signed char)3]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_15 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (-121643192814635609LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))))) ? (((/* implicit */unsigned long long int) max((-7660957689282353455LL), (((/* implicit */long long int) (unsigned short)33435))))) : (arr_6 [i_1] [i_1]));
        arr_10 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (unsigned short)33463)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((7660957689282353437LL) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((5842031616139629901LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2])))));
        var_17 = ((/* implicit */signed char) var_1);
        var_18 = ((/* implicit */unsigned long long int) ((arr_13 [i_2]) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned short)33453))))) : (((/* implicit */int) arr_13 [i_2]))));
    }
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) var_9))))))), (max((16337540781487632488ULL), (((/* implicit */unsigned long long int) 16U))))));
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    var_21 = ((/* implicit */long long int) ((((2513726436U) <= (max((var_5), (((/* implicit */unsigned int) var_11)))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (1695824543U)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)93))))))))));
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_1)))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (16U))))))) ? (3U) : ((+(max((((/* implicit */unsigned int) var_0)), (var_6))))));
}

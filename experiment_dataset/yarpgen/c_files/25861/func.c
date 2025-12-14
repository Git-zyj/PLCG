/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25861
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
    var_14 = ((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) 0LL)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (8182223647756762880ULL)))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (arr_1 [i_0])))))) / (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) != (5034177311242168819LL)))), ((signed char)-101))))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            arr_6 [(unsigned char)4] [14ULL] [i_0] = ((/* implicit */short) min((768320640461462776ULL), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((35888059530608640ULL) * (14951111325346003047ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59443)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_3] [i_1 - 3] = ((/* implicit */long long int) (signed char)105);
                        arr_13 [i_0] [i_2] [i_2] = ((((/* implicit */int) ((((((/* implicit */_Bool) 3445899953581434805LL)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (signed char)-1)))) != ((~(((/* implicit */int) (short)-22082))))))) != (((/* implicit */int) ((unsigned short) var_4))));
                    }
                } 
            } 
            var_17 -= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned char)184)), (arr_4 [i_1]))) - (min((arr_10 [0U]), (((/* implicit */long long int) ((arr_3 [14LL]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))))))));
            arr_14 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned short)9116)), (arr_8 [i_0] [i_1]))), (arr_8 [i_0] [i_0])));
        }
        var_18 ^= ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_5)))) * (((/* implicit */int) (short)32767))))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7485))) * (17886400097487676306ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-101)) - (((/* implicit */int) (short)31172))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205582
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((13851304490380031069ULL) & (4595439583329520545ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (signed char)-87)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */int) (unsigned char)15)) - (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) 13945708373061201971ULL))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1736635122)) ? (((((/* implicit */int) (short)32111)) + (((/* implicit */int) (short)27454)))) : (((/* implicit */int) ((13851304490380031069ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))))))));
        var_12 = ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_3 + 1] [i_1] [i_3] [i_3])) : (((13498791767682175466ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2839)))))));
                        var_14 = ((15151064648511809973ULL) - (13498791767682175466ULL));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((int) max((16182825734960425138ULL), (((/* implicit */unsigned long long int) arr_13 [i_4 + 3])))));
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((int) -1070590137)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -436803580)) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (arr_12 [i_4 + 1] [i_4])))) == (((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (3605027096273545059LL) : (((/* implicit */long long int) -1070590137))))))) : (((/* implicit */int) ((signed char) arr_1 [i_4 + 2] [i_4])))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16758107068931764126ULL)) ? (3207796077334632461ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 2124782742672667913ULL)) ? (((/* implicit */int) (unsigned char)102)) : (1070590137))) : ((~(((/* implicit */int) arr_11 [i_4] [i_4]))))))) ? (((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4] [i_4 + 3])) ? (1693192827761761711ULL) : (arr_7 [i_4 + 2] [i_4] [i_4 + 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4])) : (((/* implicit */int) arr_11 [i_4 + 2] [i_4])))))));
        var_18 = ((((/* implicit */int) ((arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32112)))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4]))))) * (((/* implicit */int) arr_0 [i_4])))));
    }
    for (int i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)21911)) ? (arr_4 [i_5] [i_5 - 1] [i_5]) : (11233219526941594496ULL))) & (((/* implicit */unsigned long long int) -1070590137))))) ? (((((/* implicit */_Bool) -15)) ? (((((/* implicit */int) arr_9 [10ULL])) | (((/* implicit */int) (short)-32108)))) : (((((/* implicit */int) (short)1298)) << (((arr_10 [i_5] [i_5] [(unsigned char)24] [i_5 + 2]) + (2326737700882481386LL))))))) : (arr_1 [i_5] [i_5 + 4])));
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2404))));
    }
    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (max((((/* implicit */int) (short)-13079)), (((((/* implicit */int) (unsigned char)153)) * (((/* implicit */int) (unsigned short)0))))))));
}

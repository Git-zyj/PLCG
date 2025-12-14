/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246173
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((18220924381120192455ULL) * (((/* implicit */unsigned long long int) 0U))))))) ? (((/* implicit */long long int) ((((unsigned int) var_9)) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_9))) / (-7778905079435172732LL)))))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_7))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) -7778905079435172751LL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(-322795368)))) <= (225819692589359161ULL))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) / (arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((arr_0 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)11707)) && (((/* implicit */_Bool) var_18)))))) : (((unsigned long long int) -2038744115))))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-7778905079435172732LL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (225819692589359160ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) << ((((~((+(((/* implicit */int) var_4)))))) + (148)))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)64867))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6456)) << (((/* implicit */int) var_1))))) : (((arr_0 [i_0]) >> (((((/* implicit */int) var_16)) - (35944))))))))))));
            arr_8 [(unsigned char)4] [i_0] = ((/* implicit */unsigned short) min((16482294158592034261ULL), (((10941649626988241563ULL) / (((((/* implicit */_Bool) 4581128032052921996ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42012))) : (18220924381120192455ULL)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) -2038744117))));
            arr_12 [i_0] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7778905079435172731LL)) && (((_Bool) var_13))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (~(arr_0 [i_2]))));
            arr_14 [i_0] [i_2] [8] = ((/* implicit */_Bool) (~(3560204877U)));
            arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) && (((/* implicit */_Bool) arr_3 [i_2 + 1]))));
        }
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_5 [i_0] [i_0]))));
        arr_16 [i_0] = (((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) != ((~(((/* implicit */int) ((3017726489U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)10] [i_0])))))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 1020007124U)))));
        var_28 = ((/* implicit */short) arr_18 [i_3 + 2]);
    }
    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        arr_21 [i_4] [(unsigned char)17] = ((/* implicit */unsigned int) var_2);
        var_29 = ((/* implicit */_Bool) min((var_29), ((!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)8891)) ? (1964449915117517349ULL) : (1964449915117517355ULL)))))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        var_30 &= ((/* implicit */long long int) ((unsigned int) ((arr_5 [i_5] [i_5 - 1]) && (arr_5 [i_5 - 1] [i_5 + 1]))));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)2856))) && (((((/* implicit */_Bool) (~(16482294158592034261ULL)))) || ((!(((/* implicit */_Bool) arr_19 [i_5] [10LL])))))))))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((0ULL) << (((1964449915117517360ULL) - (1964449915117517320ULL))))))));
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (!(((((/* implicit */_Bool) arr_20 [14])) || (((/* implicit */_Bool) var_17))))))))))));
        var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1500833812)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)52894))));
    }
}

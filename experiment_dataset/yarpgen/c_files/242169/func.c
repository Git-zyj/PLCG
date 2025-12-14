/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242169
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
    var_15 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((var_0) - (2559804695U)))))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) * (((/* implicit */unsigned long long int) (~(3129880272472977615LL)))));
    var_16 = ((/* implicit */long long int) (~(67108863ULL)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : (arr_0 [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)86), ((unsigned char)86)))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] |= ((/* implicit */_Bool) (~(((unsigned long long int) ((((/* implicit */_Bool) 9287596738157521134ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [11ULL] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_4 [i_2] [i_1]))) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1]))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)170))))) ? (((1568400680543033826ULL) | (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            arr_11 [i_2] [i_2] = ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) | (var_4))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
        }
        for (short i_3 = 1; i_3 < 12; i_3 += 1) /* same iter space */
        {
            arr_15 [2LL] [2LL] [i_3 + 1] |= (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_7))))))));
            arr_16 [i_1] [i_3] [i_1] = ((/* implicit */short) (_Bool)0);
            arr_17 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((1568400680543033809ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8432))))))) / (((/* implicit */int) (_Bool)1))));
            arr_18 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((max((arr_9 [i_3 + 1] [i_3 + 1]), (arr_9 [i_3 + 1] [i_3 - 1]))) ? (((/* implicit */int) ((unsigned char) 18446744073642442753ULL))) : (((/* implicit */int) max((arr_9 [i_3 + 1] [i_3 + 1]), (arr_9 [i_3 + 1] [i_3 + 1]))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (short)-8778))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_4] [i_4] [i_4])) <= (((/* implicit */int) ((_Bool) (unsigned char)169)))));
            arr_23 [i_4] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)255))))));
        }
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_27 [i_5] = 1568400680543033809ULL;
        arr_28 [i_5] = ((/* implicit */short) max((2357275411914738234LL), (((/* implicit */long long int) (_Bool)1))));
        arr_29 [i_5] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_5] [i_5])))) >= (((/* implicit */int) var_13))));
        arr_30 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-7265)) ? (18446744073642442753ULL) : (16420400005535665425ULL))));
    }
}

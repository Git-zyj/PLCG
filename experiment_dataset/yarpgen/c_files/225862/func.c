/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225862
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
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 = ((/* implicit */unsigned int) 575986358);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -6316325679040277521LL)) ? (var_5) : (((/* implicit */unsigned long long int) 7917517241400411257LL))))))) ? (((max((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_7 [i_0] [i_1] [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0 + 2]), (arr_6 [i_0 - 1] [(unsigned char)1] [i_0 + 2])))))));
                    arr_10 [18U] [18U] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */int) (short)5167)) : (((/* implicit */int) (short)(-32767 - 1)))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7597219695540593459LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (8630322255831853883LL)));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (int i_5 = 4; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_18 [i_5 - 3] [i_4] [i_3] = ((/* implicit */long long int) max((((unsigned int) -6412747393985448670LL)), (((/* implicit */unsigned int) arr_0 [i_3] [i_3]))));
                    arr_19 [i_3] [i_3] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 5628726093125383823LL)) ? (((arr_17 [i_3] [i_3] [i_5]) - (-221044128490867817LL))) : (var_11))));
                }
            } 
        } 
    } 
}

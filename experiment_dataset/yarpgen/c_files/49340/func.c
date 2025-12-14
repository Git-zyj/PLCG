/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49340
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6130318212139335317LL)) ? (-456239211011900293LL) : (-1866411884674810553LL)));
                var_19 *= ((/* implicit */unsigned short) max((max((-1866411884674810553LL), (((/* implicit */long long int) (unsigned char)134)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) min((var_6), ((unsigned short)37225)))))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? ((+(((/* implicit */int) (unsigned char)134)))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */int) (unsigned char)141)), (arr_1 [i_0] [i_1]))) : (max((((/* implicit */int) arr_0 [i_0])), (536862720)))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -536862721)) ? (((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (2087056186221567841LL)))) : (((((/* implicit */_Bool) (+(arr_1 [i_1] [i_0])))) ? (((/* implicit */long long int) 1071644672)) : (((long long int) 764487339))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) (unsigned short)28324)), (-623493171393987522LL))) : (((/* implicit */long long int) -764487335))))) || (((/* implicit */_Bool) (unsigned short)28310))));
    var_22 = var_2;
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_23 = ((/* implicit */int) (-((~(((((/* implicit */_Bool) var_12)) ? (arr_6 [2LL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))))));
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_3]))))), (((((((/* implicit */_Bool) var_11)) ? (-2058665332267153299LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))))) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))));
            var_25 = ((/* implicit */int) arr_7 [i_3]);
        }
        var_26 += (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_4] [i_4]))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) ((unsigned char) arr_16 [i_4] [(_Bool)1] [i_6] [i_4]))) ? ((-(1866411884674810554LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28310)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) arr_12 [18LL])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) ((int) var_10));
                        var_30 ^= ((/* implicit */int) (unsigned char)120);
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) -2058665332267153299LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37226))) : (2058665332267153308LL)))));
    }
}

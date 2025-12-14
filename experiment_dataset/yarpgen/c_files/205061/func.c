/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205061
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
    var_11 = ((/* implicit */signed char) var_6);
    var_12 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) (_Bool)1))))))));
    var_13 += ((/* implicit */unsigned int) (((-(min((((/* implicit */int) (unsigned short)34596)), (var_6))))) - (((/* implicit */int) ((signed char) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_14 = ((unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)128)))))));
                arr_6 [i_0] [i_0] = ((min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(_Bool)0])) / (((/* implicit */int) (unsigned char)37))))))) > (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1 + 3] [i_1 + 4] [i_1 + 2])), (arr_2 [i_0] [i_0])))), (((((/* implicit */int) arr_4 [4LL] [i_1 + 4] [(unsigned char)7])) - (((/* implicit */int) (short)25742))))))));
                var_15 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)4])) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)10])) : (((/* implicit */int) (short)25742))))) ? (((0U) >> (((((/* implicit */int) (short)25742)) - (25731))))) : (((/* implicit */unsigned int) 1959288045)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */int) (_Bool)1)), (var_6))))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((3313222668U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) >= (1254826034U)))) / (((/* implicit */int) arr_5 [i_1] [i_1 + 3] [i_1 + 2]))))) : (((((/* implicit */unsigned long long int) (~(-9157035808413537642LL)))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0])))))));
                arr_7 [8ULL] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_0])))))))));
            }
        } 
    } 
    var_17 = var_8;
}

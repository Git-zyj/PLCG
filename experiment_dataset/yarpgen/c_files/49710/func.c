/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49710
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
    var_12 = ((/* implicit */signed char) (((_Bool)1) ? (12850429395735973579ULL) : (8227571328044746850ULL)));
    var_13 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26011)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)2260)) : (((/* implicit */int) (short)2156))))) : (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)5])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)26021)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)3])) ? (((/* implicit */int) (short)-26014)) : (((/* implicit */int) var_8))))) : (min((arr_0 [i_0]), (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0]))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26022)))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-56)))));
            }
        } 
    } 
}

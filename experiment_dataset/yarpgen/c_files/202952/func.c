/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202952
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
    var_15 = ((((unsigned int) (-(((/* implicit */int) (unsigned char)172))))) < (var_12));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (arr_0 [i_0] [i_0]))))) >= (((((/* implicit */_Bool) (unsigned char)246)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (2147483647)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (132852501))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134))))))) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_17 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 6929272643789925972LL)) ? (6929272643789925989LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_3]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)17663))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_5)))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned char) var_9);
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */long long int) 4294967295U);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_26 [i_4 + 3] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_22 [i_4])) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned short)52717)) : (arr_16 [i_6])))))));
                    var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_22 [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))) : (var_8)))) ? (max((1U), (((/* implicit */unsigned int) 8160)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)130))))))) : ((-(arr_18 [i_4 + 3])))));
                    arr_27 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)161)) & (var_14)))))) ? (((/* implicit */int) arr_23 [i_4] [i_5] [i_6])) : (((((/* implicit */_Bool) -6125281025261086703LL)) ? (((((/* implicit */_Bool) (unsigned short)65522)) ? (var_9) : (((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) arr_22 [i_4]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_21 [i_4 + 1] [i_4 + 1])), (var_4)))) : (((((/* implicit */unsigned int) var_9)) / (var_6)))));
    }
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) var_11)), (var_9)));
}

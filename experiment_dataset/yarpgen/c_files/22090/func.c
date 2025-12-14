/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22090
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11)))) : (((((/* implicit */unsigned long long int) ((long long int) (unsigned char)255))) + (1141047280933086804ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (short)28785)) - (28781)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 109766978U)) ? (var_3) : (((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned int) (-(2147483629))))))));
                                arr_13 [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_0] = (-(((/* implicit */int) ((_Bool) (unsigned short)43854))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (arr_6 [i_3] [i_2 - 1] [i_1]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [(_Bool)0] [i_2] [i_3 + 1] [i_4])))))) ? (((/* implicit */int) min((arr_11 [i_1] [i_1 - 1] [i_2] [i_1 + 1]), (((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)248))))))) : (max((((1569271883) & (((/* implicit */int) (unsigned char)184)))), (((/* implicit */int) ((unsigned short) (signed char)-5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 *= ((/* implicit */short) ((unsigned short) 562675075514368LL));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) -1569271883))), (var_11))))));
    }
    for (short i_6 = 1; i_6 < 8; i_6 += 1) 
    {
        var_23 += ((/* implicit */short) (-(((int) -28LL))));
        var_24 = ((/* implicit */short) (unsigned short)65533);
        arr_21 [i_6] = ((/* implicit */int) arr_6 [i_6] [i_6 + 2] [i_6 - 1]);
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (_Bool)1))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (((((~(max((arr_9 [0U] [i_6] [i_6] [i_6] [0U]), (((/* implicit */int) (unsigned short)4558)))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)7815)) <= (((/* implicit */int) var_2))))))))));
    }
}

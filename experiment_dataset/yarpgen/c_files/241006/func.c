/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241006
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
    var_15 &= ((/* implicit */int) 716590835U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)54838)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2]))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2]))))), (121425256U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8026)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [3U] [i_3] [i_2] [i_2 - 1] [i_3] [i_4] = ((/* implicit */_Bool) min((max((19ULL), (((/* implicit */unsigned long long int) (unsigned short)57496)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_3 - 3] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_3] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_9 [i_1] [i_3] [i_2] [i_4 + 1] [i_4])))))));
                                arr_12 [i_3] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) arr_9 [i_2] [i_3] [(_Bool)1] [i_2] [i_2 - 1]);
                                var_16 = ((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_2 - 1] [i_1 + 1]);
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-9130226659314251079LL))))))) - (((/* implicit */int) (short)-6))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */unsigned short) (short)18)), ((unsigned short)57509))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)-49)), (var_12))))));
                        arr_16 [i_2] [i_2 + 1] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned int) 1417143340U));
                    }
                    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        arr_19 [5U] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_15 [i_1] [i_1 - 2] [i_2 - 1] [i_6 + 1] [i_6 + 1])) * (((/* implicit */int) (short)-15))))));
                        arr_20 [i_6] [6U] [10ULL] [(short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1 - 1] [i_6 - 1] [i_2 + 1])) ? (((/* implicit */int) ((short) arr_0 [i_1 + 1] [i_2 + 1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1 - 2] [i_6 - 1] [i_2 + 1]))) != (arr_0 [i_1 - 1] [i_2 + 1]))))));
                    }
                }
            } 
        } 
    } 
    var_20 = max((((var_11) >> (((max((((/* implicit */long long int) var_12)), (9130226659314251072LL))) - (9130226659314251053LL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) (short)-7)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40904
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
    var_17 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (+(max((4018918408U), (((/* implicit */unsigned int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)23444)), (((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-23455)) : (var_11))))));
                            arr_11 [i_0] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) max((max(((_Bool)1), (arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))), ((!(((/* implicit */_Bool) 1046355019401547016LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((int) var_14));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_13 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : (max((((/* implicit */long long int) (_Bool)1)), (6261182439282697782LL)))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (2302292457304228066LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))))) ? (((((arr_13 [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)48)), ((short)23469))))))) : (((((/* implicit */_Bool) ((int) 4294967287U))) ? (arr_13 [i_4]) : ((~(var_12)))))));
        arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23438)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4])))))) : ((~(((unsigned int) (unsigned short)1984))))));
        var_20 = max((((long long int) 4294967267U)), (((/* implicit */long long int) arr_13 [i_4])));
    }
}

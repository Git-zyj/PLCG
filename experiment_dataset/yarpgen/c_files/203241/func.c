/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203241
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
    var_11 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-32401), ((short)32385)))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) 306408989U))) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-119)), (var_10)))) ? (((((/* implicit */_Bool) (short)-32392)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32391), (arr_7 [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 1970106360U)) ? (275896824U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned long long int) 1970106360U)) : (9580063514417902999ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-32392), (((/* implicit */short) (signed char)-16)))))) : (((unsigned long long int) min((((/* implicit */short) (signed char)16)), (arr_6 [i_3] [i_4])))))))));
                arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (short)32392))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), ((+(((((/* implicit */_Bool) arr_10 [i_4])) ? (var_1) : (8368748011245198603ULL)))))));
                var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (arr_10 [i_3])))) ? (((long long int) arr_16 [(unsigned char)7] [i_4] [i_4])) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_3] [i_3]))))))), (((/* implicit */long long int) max((((/* implicit */short) var_3)), (arr_7 [i_3] [i_3]))))));
            }
        } 
    } 
}

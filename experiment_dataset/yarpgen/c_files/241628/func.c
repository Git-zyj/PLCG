/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241628
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
    var_16 = ((/* implicit */unsigned int) (~((-(-2902043303692913036LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) -2004833371);
                                var_18 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((arr_5 [i_3] [i_1 - 2] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_11 [i_0] [i_1 + 1] [i_3] [6])))) ? (arr_15 [i_3] [i_3] [i_3] [i_2] [(unsigned short)10] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 12536244717954377650ULL))))))))));
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)247)) || ((!(((/* implicit */_Bool) arr_0 [(unsigned char)0])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)47729)), (min((5910499355755173966ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                                arr_17 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((2147483644), (var_12))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_4])) ? (((/* implicit */int) (unsigned char)8)) : (2004833371)))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((((/* implicit */_Bool) 1373895160502514505ULL)) ? ((~(-2004833372))) : (((int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (arr_11 [3] [i_1] [i_1] [1ULL]) : (12U)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))) : (12806907913106884575ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))));
                        var_21 ^= ((/* implicit */int) ((min((max((var_15), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)238))))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) arr_19 [i_0] [i_2] [i_0])) != (var_11))) ? (((((/* implicit */_Bool) -1978246892)) ? (((/* implicit */int) (unsigned short)65531)) : (-2004833361))) : (var_11))))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_23 = ((max((((/* implicit */int) ((((/* implicit */_Bool) -1829087777)) || (((/* implicit */_Bool) var_15))))), ((~(-17))))) != ((~(((/* implicit */int) (unsigned char)121)))));
                }
            } 
        } 
    } 
}

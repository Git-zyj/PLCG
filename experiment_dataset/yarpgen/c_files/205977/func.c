/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205977
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
    var_20 = ((/* implicit */unsigned int) (~(var_0)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))));
                                var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [(unsigned short)7] [i_1] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (min((3410559733U), (884407572U)))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (max((var_16), (((/* implicit */unsigned int) var_18)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_7 [i_4]), (((/* implicit */unsigned char) var_17)))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2]))) : (var_9)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((arr_18 [i_5 - 2] [i_2] [i_1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_5] [i_6])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_6]))) * (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_1])))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 - 2] [i_5] [i_5] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_11 [i_5 - 2] [17ULL] [i_2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_11 [i_5 - 1] [i_0 - 1] [i_2] [i_2] [i_0 - 1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+((~(((/* implicit */int) max((((/* implicit */short) arr_7 [i_2])), (var_7)))))))))));
                                var_27 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_8)), (arr_4 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 &= ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_18) : (var_18)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
}

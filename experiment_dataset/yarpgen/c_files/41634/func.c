/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41634
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(max((min((var_5), (((/* implicit */unsigned int) var_1)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_15))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) ((min(((-(2202733962581111214ULL))), (((/* implicit */unsigned long long int) ((short) 2016235313))))) << (((max((((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((int) var_4))))) - (15484363999746376644ULL)))));
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */long long int) (short)28392);
                            var_18 = ((/* implicit */unsigned int) ((((int) arr_6 [i_0 - 1])) | (((/* implicit */int) ((short) arr_9 [i_0] [(short)4] [i_2 + 2] [i_3 + 1] [i_4])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min((max(((unsigned char)216), (var_1))), (((unsigned char) var_7))))) * (((int) (short)-15465))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) (((~(var_14))) < (((((/* implicit */_Bool) (unsigned short)26)) ? (var_10) : (((/* implicit */unsigned int) var_12))))));
                            arr_17 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_10)));
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5 - 2] [i_5] [i_3 - 1] = ((/* implicit */short) var_15);
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (var_2))))));
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_2 [i_2 + 2] [i_3 + 1] [i_0]));
                        }
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            var_22 = min((((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) var_10)), (-576460752303423488LL))))), (((((/* implicit */long long int) max((3711275072U), (0U)))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 3711275072U)) : (3128305909642623036LL))))));
                            arr_22 [i_0 + 1] [i_1] [i_2] [i_3 + 1] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2118878126503861071LL))));
                            arr_23 [i_0] [i_1] = max((((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 - 1]) : (2147483647))), (arr_0 [i_0 + 1]));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)10720))) < (1284137215U))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_2 - 3] [i_3 + 2]))) < (var_9)))) : (max((2147483647), (((/* implicit */int) arr_7 [i_0] [i_1] [i_0 - 1] [i_2 + 3] [i_3 + 1]))))));
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-18557))));
    }
    var_24 = ((/* implicit */long long int) var_6);
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3183200029U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (var_13)))) ? (min((((/* implicit */unsigned long long int) ((-2118878126503861059LL) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */unsigned long long int) var_7)) * (4146123043060579725ULL))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_3)), (var_7))), (min((var_8), (var_7)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202673
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
    var_14 = var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_1 [i_0] [i_1])))) - ((+((-(arr_4 [i_1])))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) (unsigned char)142))))) : (((/* implicit */int) var_5)))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (533188267U)))) : ((~((-9223372036854775807LL - 1LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((~(var_8)))))) ? (var_2) : (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (var_4)));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 - 1])) ? (((/* implicit */long long int) 3761779029U)) : (-8126508162544284019LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5 - 1])) ? (((/* implicit */long long int) 1536038048)) : (arr_11 [i_5 - 2])))) : (arr_10 [(signed char)8] [i_6 - 1] [i_5 + 2])));
                            arr_19 [(signed char)0] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7)))))) >= (arr_9 [i_5 + 1] [i_5 + 2] [i_5 - 2]))) ? ((~(12893249942948873732ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5])))));
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((min((((/* implicit */long long int) (~(533188267U)))), (((((/* implicit */_Bool) 3761779033U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [18U] [i_3]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_6))))))))))));
                        arr_20 [i_2] [(unsigned short)4] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 270638223189469790LL)) ? (((/* implicit */int) arr_13 [(unsigned char)6] [(unsigned char)6] [i_4] [i_5 - 1])) : (((/* implicit */int) arr_13 [i_2] [0U] [3U] [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_3] [15ULL] [15U] [i_2])) ? (max((533188242U), (398406437U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (533188267U)));
                    }
                    arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((533188278U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4])) ? (arr_9 [i_2] [i_3] [(short)7]) : (arr_9 [i_3] [i_3] [i_2]))) : (min((arr_9 [i_2] [i_3] [i_4]), (arr_9 [i_2] [i_2] [i_2])))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_15 [i_3] [i_3] [i_3] [i_2])))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2])) ? (533188278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_4] [i_4] [i_4])))))));
                }
            } 
        } 
    } 
}

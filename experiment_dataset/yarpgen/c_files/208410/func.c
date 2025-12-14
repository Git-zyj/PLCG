/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208410
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
    var_13 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (short)2313)) != (((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)-81)))))));
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-81), ((signed char)80)))) ^ (((/* implicit */int) (signed char)35)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max(((-((+(((/* implicit */int) (signed char)102)))))), (((arr_5 [i_1] [i_2 - 2]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_8)))) : (((var_7) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_4))))))));
                    arr_8 [i_2 - 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_2 - 1] [i_2 + 3] [i_2 - 1])), (var_3)))) ? (min(((~(((/* implicit */int) arr_0 [i_2 + 1])))), (((/* implicit */int) max((arr_2 [i_2 - 1]), (arr_1 [i_1])))))) : (((/* implicit */int) (signed char)-81))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_3] [i_4] [i_5] [i_6 + 1] [i_3] [i_7 + 4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((arr_6 [(short)0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))) : (0U)))));
                                var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_11)))), ((+(((/* implicit */int) arr_0 [i_4]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_4 - 1] [i_5] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((unsigned long long int) var_12))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_4] = max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)140)))))), (arr_9 [i_5]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_28 [i_9] [(short)0] [i_5] [(unsigned char)9] [i_3] = ((/* implicit */signed char) (((((-(4294967286U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 691029570U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_3)) - (17239)))))) ? (((/* implicit */int) ((_Bool) -34602374841081055LL))) : (((/* implicit */int) arr_12 [i_9] [i_4] [i_4])))))));
                                arr_29 [(signed char)0] [i_8] [i_5] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_4 + 1]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_4 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_4 - 2]))))));
                                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_8 + 1] [i_8 + 2] [(short)1])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))))))));
                                arr_30 [i_3] [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_10 [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))))), (((/* implicit */unsigned int) arr_19 [i_3] [i_4 - 3] [i_4 - 3] [i_8] [(short)4] [i_3] [i_5]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_8] [i_8] [(_Bool)1])), (var_2)))) ? (((arr_13 [i_3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_3])))) : (((((/* implicit */int) arr_13 [i_4 - 3])) * (((/* implicit */int) (signed char)23))))))));
                                arr_31 [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) (((+((((_Bool)1) ? (8064U) : (arr_24 [i_9] [i_8] [i_5] [i_4 + 1] [i_3]))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [(_Bool)1])) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned char) 4294967273U))) : (((/* implicit */int) (signed char)-1)))))));
                            }
                        } 
                    } 
                    arr_32 [i_3] [i_5] = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_4]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) min(((_Bool)1), (var_5)))) * (((/* implicit */int) var_3))))) * (((((((/* implicit */_Bool) (signed char)5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) << (((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4194522868U))) - (4194522845U)))))));
}

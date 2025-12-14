/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243658
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
    var_13 = ((/* implicit */unsigned char) ((var_8) | (var_8)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (4294967295U)))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_24 [i_6] [i_0] [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 227513784))))))) : (((((/* implicit */int) var_4)) >> (((min((var_1), (((/* implicit */long long int) (unsigned char)252)))) + (5624229569579824912LL)))))));
                                arr_25 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */int) (!(max((((((/* implicit */_Bool) arr_9 [i_6] [(short)9] [i_2] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) -2377439022529076261LL)))), ((!(((/* implicit */_Bool) 1079667701871600761LL))))))));
                                var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)94)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0])))))) ? ((-(3361000099U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                                arr_26 [i_0] [i_5] [i_2] [i_0] = ((/* implicit */signed char) ((int) ((arr_13 [i_6] [i_0] [i_5] [i_2] [i_0] [i_0]) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41462))) | (arr_3 [i_5] [(_Bool)1] [(_Bool)1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (-((~(((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                arr_32 [i_8] [i_7 - 3] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((signed char) arr_3 [i_8] [i_7] [i_7]))))) % (((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_8] [i_7])) ? (((/* implicit */int) arr_30 [i_7 - 3] [i_8] [i_8])) : (((/* implicit */int) (signed char)-94))))));
                arr_33 [(short)11] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) == ((-((-(((/* implicit */int) (signed char)-98))))))));
                arr_34 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8] [i_8]))) - ((+(4294967295U)))))));
                arr_35 [i_7] = (+((-(arr_6 [i_7] [i_7 - 2]))));
                var_16 = ((/* implicit */int) arr_8 [i_7 - 3] [i_8] [i_7] [i_7 - 1] [i_7 - 1]);
            }
        } 
    } 
}

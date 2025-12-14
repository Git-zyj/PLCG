/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197364
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((638399900348545107ULL) >= (11418760476640490292ULL)))) >> (((17808344173361006509ULL) - (17808344173361006495ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7027983597069061323ULL)) ? (11418760476640490292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (var_8))) : (((/* implicit */unsigned int) (~(-2050312512))))))));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) 3669875227280297346ULL))), (arr_3 [i_0 - 2])))) || (((/* implicit */_Bool) (~(arr_3 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-2566790931927818461LL), (((/* implicit */long long int) 7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [7] [i_1])) ? (arr_5 [i_1] [i_1] [2ULL]) : (arr_6 [i_1] [i_1] [i_2]))))))) : (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
                    var_17 = ((/* implicit */_Bool) max((((min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (var_5))) * (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)53714)))))), (((/* implicit */unsigned int) (~(arr_6 [i_1] [i_0 - 2] [i_1]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3]))) : (4294967295U))));
        arr_15 [i_3] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_12 [i_3])))));
    }
    var_18 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (signed char)-43)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) max((var_0), (var_7))))));
}

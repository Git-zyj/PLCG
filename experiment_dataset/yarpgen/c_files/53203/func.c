/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53203
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((int) var_3))), (min((((/* implicit */unsigned long long int) var_2)), (var_3))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26064))))) + (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) 2147483647))))))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned int) 400680660)) - (410253057U))), (130023424U))) >= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)26055)) ? (((/* implicit */int) (short)-26064)) : (400680660))) | (2147483628))))));
        var_12 += ((/* implicit */short) (-((-(((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) -695430323)))))))));
    }
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((((int) 8707922250284809223ULL)) | (((/* implicit */int) var_8))))));
}

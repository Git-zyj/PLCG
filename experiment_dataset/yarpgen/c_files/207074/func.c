/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207074
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) 18446744073709551594ULL);
            arr_6 [i_1] [i_1] = ((((var_5) < (((/* implicit */long long int) ((/* implicit */int) (signed char)99))))) ? (23ULL) : (((/* implicit */unsigned long long int) max((931531451U), (((/* implicit */unsigned int) arr_2 [i_1] [i_0 - 1]))))));
        }
        arr_7 [i_0 + 3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2])) * (((/* implicit */int) arr_0 [i_0 - 2])))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0 - 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3])))))) ? (((((/* implicit */_Bool) 4976208262574247341ULL)) ? (arr_12 [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || ((_Bool)1))))))))));
                    arr_14 [i_0 + 3] [i_0] [i_0 + 3] [i_0] = min((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)0)))), (((((unsigned int) (short)16352)) | (((/* implicit */unsigned int) ((/* implicit */int) (short)56))))));
                    arr_15 [1U] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_3] [i_3])), (arr_12 [i_0 - 2] [i_0 - 3])))));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((_Bool) (+(0ULL))));
        var_12 = (~(((/* implicit */int) (unsigned char)119)));
    }
    var_13 = ((/* implicit */unsigned int) (~(1749011319)));
}

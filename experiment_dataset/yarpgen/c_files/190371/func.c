/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190371
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_0 [i_1 - 1] [i_0 + 1]), (arr_0 [i_0 + 1] [(unsigned short)10])))), (((((/* implicit */_Bool) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))) ? (arr_1 [i_0]) : ((~(((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))))))));
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (1099963U) : (((/* implicit */unsigned int) -113032097))))) ? (((long long int) ((arr_5 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)9] [(signed char)9] [i_1])))));
                arr_8 [i_0 - 1] [i_0] [i_0 + 2] = ((/* implicit */int) (short)-21770);
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)3502)), ((+((+(12398723116809258882ULL)))))));
}

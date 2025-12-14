/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42652
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
    var_19 = ((/* implicit */int) (unsigned char)79);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0]));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) >= (((((/* implicit */_Bool) -1535586498)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0]))))))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 0ULL))) >> (((((((/* implicit */_Bool) (unsigned short)17953)) ? (((/* implicit */int) ((unsigned short) arr_0 [6]))) : (((((/* implicit */_Bool) (unsigned short)30287)) ? (((/* implicit */int) (unsigned short)841)) : (((/* implicit */int) (_Bool)1)))))) - (20048)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52897)) * (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) var_18)) ? (17592186044416LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [7LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1])))))));
        arr_7 [7] = ((/* implicit */unsigned char) 2475027085U);
        arr_8 [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_15))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_9 [i_2] [i_1] [i_1]);
            var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) ((signed char) ((signed char) (unsigned char)189))))));
        }
    }
}

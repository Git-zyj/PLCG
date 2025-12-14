/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213834
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 *= ((/* implicit */unsigned short) ((short) var_0));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) <= (arr_1 [i_0] [i_1]))))) / (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))));
            arr_5 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((signed char)104), (((/* implicit */signed char) arr_4 [i_1]))))), (((((/* implicit */long long int) 238755686U)) / (-3106549619825953058LL)))));
            var_14 *= ((/* implicit */unsigned short) (-(((((/* implicit */int) max(((unsigned short)39213), (((/* implicit */unsigned short) (signed char)89))))) - (((/* implicit */int) arr_0 [i_1]))))));
            var_15 = max((max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (((arr_1 [i_0] [i_1]) / (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) max((3U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)132)) + (((/* implicit */int) (_Bool)0)))))))));
            var_16 = ((/* implicit */short) var_2);
        }
        for (int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((short) ((signed char) (+(((/* implicit */int) var_2)))))))));
            var_18 ^= ((/* implicit */_Bool) max((arr_1 [(signed char)2] [i_0]), (((/* implicit */long long int) arr_3 [i_2 - 1] [i_2 - 1]))));
        }
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_19 = arr_7 [i_0];
            var_20 = ((/* implicit */unsigned char) (-(arr_9 [i_0] [i_0] [i_0])));
        }
        var_21 = (~((+(max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_7 [i_0])))))));
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            var_22 ^= ((/* implicit */unsigned char) (unsigned short)65530);
            var_23 -= ((/* implicit */short) (-(((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)14336))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) var_0);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = max((((/* implicit */unsigned int) (signed char)84)), (4294967295U));
        var_24 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) - (((/* implicit */int) ((arr_17 [i_5]) == (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5]))))))))));
    }
}

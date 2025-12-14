/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190491
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (~(648306859))))));
        arr_2 [i_0] [9U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) 2530498450U))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : ((~(((/* implicit */int) var_8))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-9223372036854775792LL))))));
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(var_4)))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (17427047514208236922ULL)))));
            var_13 ^= ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-91));
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_12 [i_3] [i_3] [i_1] &= ((long long int) (+(1241420349057541046ULL)));
            arr_13 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3])) ? (arr_7 [i_1] [i_3] [i_3]) : (arr_7 [i_1] [i_1] [i_1])));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) : (arr_5 [i_1] [i_1])));
        }
        arr_14 [i_1] = ((/* implicit */unsigned int) var_5);
    }
    var_15 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (signed char)99))))))) == (max((((int) var_3)), (((((/* implicit */_Bool) (signed char)3)) ? (var_10) : (((/* implicit */int) (signed char)90))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3842
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) (signed char)0))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_0))))));
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-1))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [2] [i_1] [i_0])) ^ (((/* implicit */int) arr_0 [i_1]))))) ? (arr_1 [i_1]) : (((/* implicit */int) min(((signed char)-38), ((signed char)-1)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (arr_7 [i_0] [i_0]))))));
            var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : ((+((~(arr_2 [i_0] [i_1 + 2])))))));
        }
        for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) ((_Bool) ((signed char) (signed char)-7)));
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-6);
            var_17 += ((/* implicit */unsigned char) arr_1 [i_0]);
        }
        arr_13 [i_0] = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_0]) << (((max((var_0), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) - (1790377800361689631LL)))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (((((((_Bool)0) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(short)11]))))) ^ (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) (signed char)-1)))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)24743)) != (((/* implicit */int) (signed char)1))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_15 [i_3] [i_3]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_19 [i_4] [i_4])))) ? ((~(((/* implicit */int) arr_16 [i_4])))) : (arr_19 [i_4] [i_4])));
        arr_20 [i_4] = ((/* implicit */unsigned int) ((short) (~(14838504407764041994ULL))));
    }
    var_20 &= ((/* implicit */_Bool) var_9);
}

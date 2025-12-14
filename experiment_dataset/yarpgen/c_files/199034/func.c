/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199034
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (arr_2 [i_0] [i_0])));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47199))) != ((+(var_6)))))), (arr_1 [(signed char)6])));
        var_15 = ((/* implicit */_Bool) 15856850999799161272ULL);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)166)))))) * (var_9)));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_2])) ? (var_8) : (arr_4 [i_2]))) <= (((/* implicit */int) ((arr_4 [i_2]) != (arr_4 [i_2]))))));
        var_18 |= ((/* implicit */unsigned char) ((long long int) ((unsigned int) arr_7 [i_2] [i_2])));
        var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((int) var_5))), (var_2))) << (((/* implicit */int) (((-(arr_6 [11U] [i_2]))) != (((/* implicit */unsigned long long int) ((arr_2 [i_2] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned char) arr_1 [i_2]))), ((~(((/* implicit */int) arr_8 [i_2] [i_2])))))) != (((/* implicit */int) arr_0 [i_2]))));
    }
    var_20 |= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((var_2) << (((1407183003400296327ULL) - (1407183003400296311ULL)))))))));
    var_21 |= ((/* implicit */int) max((min((-7599573244044318128LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_0)))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_6))) : (((/* implicit */long long int) var_0))))));
}

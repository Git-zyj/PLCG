/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209550
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
    var_10 -= ((/* implicit */_Bool) var_9);
    var_11 |= ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))))), (var_9)))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_12 -= ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) >> (((/* implicit */int) arr_1 [i_0 + 2] [i_0])))) | (((/* implicit */int) ((short) arr_1 [i_0 + 1] [i_0 + 2])))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(short)1] [(short)1])) >> (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))), ((-(2546815012215645162ULL))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 -= ((/* implicit */short) arr_0 [(_Bool)1]);
    }
    for (unsigned short i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        arr_5 [i_1 - 2] [i_1] = arr_0 [i_1];
        var_15 -= ((/* implicit */int) arr_3 [i_1]);
        var_16 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_1 [i_1 + 3] [i_1 + 2]) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2]))))) >= (max((var_4), (((/* implicit */long long int) arr_4 [i_1 + 2]))))));
    }
    for (int i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (long long int i_4 = 4; i_4 < 17; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_17 &= max((((((/* implicit */int) arr_13 [i_4] [i_4 - 4] [i_4])) ^ (((((/* implicit */int) arr_10 [i_2] [i_2])) & (var_2))))), (((((/* implicit */int) arr_16 [i_5] [10U] [i_3 - 1] [i_2] [10U] [i_2 - 2])) / ((~(((/* implicit */int) arr_8 [i_4])))))));
                        arr_19 [i_4 - 4] [i_3 + 1] [i_4 - 1] [i_3] [(_Bool)1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -2029883219098805465LL)) <= (15899929061493906471ULL)));
                        var_18 -= ((unsigned char) arr_12 [16U] [i_3] [i_3] [i_3]);
                    }
                } 
            } 
        } 
        var_19 -= min((arr_13 [i_2] [i_2 - 3] [i_2 - 3]), (arr_13 [i_2 + 1] [i_2] [i_2 + 1]));
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (min((var_4), (((/* implicit */long long int) var_8)))))))));
    var_21 = ((/* implicit */unsigned char) var_7);
}

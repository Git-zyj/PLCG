/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36463
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [(short)4] [i_0] |= ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)(-32767 - 1))))), (arr_3 [i_0] [i_0])))) ? (((arr_3 [i_0] [i_0]) / (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) -3645245019910224355LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((((/* implicit */_Bool) -5089031933523470687LL)) ? (((/* implicit */int) (unsigned char)255)) : (arr_0 [i_0]))))));
        var_15 = (-(((((arr_2 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (min((arr_2 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_15 [i_1] [8LL] [i_2] = ((_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (0LL) : (arr_2 [i_1 + 1])));
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) (((+(((unsigned long long int) 5089031933523470679LL)))) - (((/* implicit */unsigned long long int) 1050048092))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_3);
}

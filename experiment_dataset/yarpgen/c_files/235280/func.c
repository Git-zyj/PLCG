/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235280
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (((/* implicit */int) (unsigned char)224))))) ? (2042269416U) : (((/* implicit */unsigned int) var_9)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
                    arr_9 [i_0] [i_1] [6] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)31))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */int) (unsigned char)17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [14ULL] [14ULL] [14ULL] [i_1]))) : (arr_7 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_3))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)44848)) : (var_9)))));
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [2] [i_4] [(unsigned short)18] [i_4]))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) 8378156240173883528LL))))))) : ((-(((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */signed char) var_1);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24918
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)19144));
                arr_6 [5ULL] [5ULL] = ((/* implicit */unsigned short) var_12);
                arr_7 [i_0 - 1] [(unsigned char)7] [i_1] = ((/* implicit */_Bool) ((int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (10392487689055253228ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            {
                var_17 = min((((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1]))), ((~(((/* implicit */int) arr_11 [i_3 + 1])))));
                arr_14 [i_2] [i_2] = (((+(((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) arr_13 [i_3 + 3])) ? (arr_12 [i_3 + 1] [i_3 + 2] [i_3 + 2]) : (arr_12 [i_3 - 1] [i_3 + 3] [i_3 - 1]))) - (13939301477343548788ULL))));
                arr_15 [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)247);
                var_18 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(33554431)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 - 1])) || (((/* implicit */_Bool) arr_12 [9U] [i_2] [i_3]))))) : ((-(((/* implicit */int) var_1)))))) * (((/* implicit */int) arr_10 [i_2] [i_3]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_9)))))));
    var_20 = ((/* implicit */unsigned short) ((var_8) & (((/* implicit */int) var_12))));
}

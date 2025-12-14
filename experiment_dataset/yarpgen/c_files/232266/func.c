/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232266
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_5 [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) max(((-(0U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_19 *= ((/* implicit */long long int) (+(((/* implicit */int) (((+(((/* implicit */int) var_15)))) != (((/* implicit */int) (short)-32755)))))));
        var_20 += ((/* implicit */short) (((~(((arr_9 [i_2]) << (((((/* implicit */int) (unsigned short)40340)) - (40321))))))) == (((/* implicit */unsigned long long int) -2908504606552123552LL))));
        arr_10 [i_2] = ((/* implicit */long long int) ((max((max((16169129679462662935ULL), (((/* implicit */unsigned long long int) arr_1 [i_2])))), (((/* implicit */unsigned long long int) ((-2908504606552123552LL) ^ (((/* implicit */long long int) arr_4 [i_2] [i_2] [0LL]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))));
        var_21 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21516))) : (arr_9 [i_2])))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_2 [i_2]))))));
    }
}

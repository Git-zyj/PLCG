/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230790
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
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 &= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1540814182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))) : (776648054U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-30177)))))));
                arr_4 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)53404))))));
                arr_5 [(signed char)4] [i_0] [i_0] = ((/* implicit */unsigned short) min((((arr_2 [i_1] [i_1 + 2]) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-4481)) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) arr_3 [i_0] [5LL] [1LL])) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))), (((((/* implicit */_Bool) ((6292331656114944843ULL) ^ (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) (short)-19086)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) var_9);
                arr_13 [i_2] = ((/* implicit */_Bool) ((127009641U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)63)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) 1088821232);
}

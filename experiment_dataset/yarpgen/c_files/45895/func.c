/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45895
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
    var_16 = ((unsigned short) ((signed char) ((signed char) var_0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_3))) - ((-(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))));
                var_18 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((3434683119U) >> (((((/* implicit */int) (unsigned char)201)) - (190))))));
                var_20 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) ((_Bool) var_13))));
            }
        } 
    } 
}

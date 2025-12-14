/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2983
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26299)) << (((((/* implicit */int) (unsigned short)65530)) - (65516)))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)-32760))) & (var_0))), (max((281474976706560LL), (((/* implicit */long long int) (unsigned short)3))))))) ? (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0))) >> (((((/* implicit */int) arr_3 [i_0])) - (18279))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)63)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            {
                arr_12 [i_2] [8] [i_2] &= ((/* implicit */short) var_15);
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -569223087)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)339))), ((unsigned short)26299))))));
            }
        } 
    } 
}

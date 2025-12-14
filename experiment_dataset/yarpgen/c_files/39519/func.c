/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39519
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
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) arr_2 [i_0] [i_0] [i_1]))), ((~(3937403240U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) << (((/* implicit */int) var_1))))) : ((~(arr_0 [i_0])))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((int) (~(((((/* implicit */long long int) 3937403240U)) / (-2306972065754454965LL))))));
            }
        } 
    } 
    var_15 *= var_3;
    var_16 = ((/* implicit */signed char) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    arr_15 [i_4] [4ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(7864320U)))) || ((_Bool)1)))) >> ((((~(((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (3937403240U))))) - (4294967213U)))));
                    var_17 = max((((/* implicit */int) var_1)), ((-(((/* implicit */int) arr_2 [i_3] [i_3 - 1] [i_3])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
}

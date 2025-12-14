/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248988
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
    var_19 += ((/* implicit */unsigned short) 3869985302626210031LL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [2] [9ULL] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [(short)11] [i_0])) | (((/* implicit */int) (unsigned char)19))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) (short)6)) : ((-2147483647 - 1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (short)6))))) ? (2147483647) : (((/* implicit */int) var_0)))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65533)), (var_18))))))) != (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned char)38)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_5))));
}

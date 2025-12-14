/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201529
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
    var_19 = ((/* implicit */long long int) 937143713);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0] [i_1]))) ? (((1838296058122930266LL) & (((/* implicit */long long int) ((/* implicit */int) (short)28604))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46835))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((((/* implicit */int) (unsigned short)18685)) * (((/* implicit */int) (signed char)7))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_2])))) != (((arr_6 [i_2] [i_3]) | (((/* implicit */unsigned long long int) 1555918439U))))))));
                var_23 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_8 [i_2])))));
                var_24 = ((/* implicit */unsigned int) arr_9 [i_2]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((short) (-((+(((/* implicit */int) var_12)))))));
}

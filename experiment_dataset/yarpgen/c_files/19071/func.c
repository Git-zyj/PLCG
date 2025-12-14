/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19071
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) var_8);
                    var_12 = ((/* implicit */_Bool) ((var_0) ^ (var_0)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_13 [i_4] [i_3])))))) == (min((((4U) % (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)244)) == (750578763))))))));
                arr_14 [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4294967283U)))) ? (var_6) : (((/* implicit */int) arr_2 [i_3]))));
                arr_15 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12U)) ? (var_4) : (((/* implicit */int) (unsigned short)4580))))) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) == (((/* implicit */int) var_3)))))))))));
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (((-(var_4))) * ((-(((/* implicit */int) var_8))))));
            }
        } 
    } 
}

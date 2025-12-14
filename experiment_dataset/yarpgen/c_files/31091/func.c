/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31091
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) var_6)), ((short)18393))))) ? ((~(((unsigned int) (unsigned char)57)))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)44)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)56)))) : (((/* implicit */int) ((unsigned char) var_10)))))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned char)32))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_1))))) ? ((-(arr_13 [i_3] [i_3] [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))))));
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) arr_8 [i_2 - 2] [i_3] [i_4])), (((short) arr_8 [i_2 - 1] [i_4] [i_4]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((unsigned char)198), ((unsigned char)52))))));
}

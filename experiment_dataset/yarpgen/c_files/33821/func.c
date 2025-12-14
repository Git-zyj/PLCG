/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33821
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
    var_20 |= var_5;
    var_21 = ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (signed char)-34)))) : (((/* implicit */int) (signed char)20))));
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */int) (signed char)1)) != (((/* implicit */int) var_10)))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)59)), (var_5)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_3] [i_3] [i_1 - 2] [(short)15] = ((/* implicit */unsigned char) 1526035409527749154LL);
                                arr_15 [i_3] [i_1] [(signed char)0] [i_1 - 1] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (short)-30330)) ? (((/* implicit */int) (unsigned short)18093)) : (((/* implicit */int) (signed char)88)))) << (((/* implicit */int) arr_1 [i_1 - 1])))), ((+(((/* implicit */int) arr_7 [i_3 - 2] [i_3 + 4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

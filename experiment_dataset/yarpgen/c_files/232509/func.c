/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232509
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-114)), (var_3)))) : (((/* implicit */int) var_11))));
    var_13 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [(signed char)7] = ((/* implicit */signed char) (short)-26365);
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) (unsigned short)30904)) ? (((/* implicit */int) (short)26366)) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_0 - 1])))) : (((/* implicit */int) var_9))))) : ((+(16451976776995559346ULL)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) var_3);
                var_16 = (~((~(((/* implicit */int) ((unsigned char) (unsigned char)47))))));
                var_17 = ((/* implicit */signed char) 1994767296713992270ULL);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223057
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
    var_19 ^= ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_20 = ((/* implicit */signed char) var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_4])))))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)-20857)) && (((/* implicit */_Bool) (signed char)23)))))));
                                var_22 = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) (short)1427);
                }
                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_11))))))));
            }
        } 
    } 
}

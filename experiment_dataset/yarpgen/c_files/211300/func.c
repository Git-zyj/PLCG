/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211300
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
    var_14 &= (+(9223372036854775807LL));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (unsigned char)231))))))));
                    var_16 = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)61256))))))));
                    var_17 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)231))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (unsigned char)231)))))));
                                var_19 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) 2701584014U)) ? ((+(((/* implicit */int) (unsigned short)2408)))) : (((/* implicit */int) (unsigned short)16595))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

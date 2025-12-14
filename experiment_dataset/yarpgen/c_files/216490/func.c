/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216490
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
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) 1584681862));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3448860370U)) ? (((/* implicit */unsigned int) var_17)) : (846106912U)))) ? (var_17) : (((/* implicit */int) (unsigned char)179))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)88)))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = max((((int) ((_Bool) var_12))), (((((/* implicit */_Bool) 7U)) ? ((~(-1584681857))) : (((/* implicit */int) ((unsigned short) -1584681872))))));
                            var_20 -= var_10;
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)10206)) < (((/* implicit */int) var_14)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

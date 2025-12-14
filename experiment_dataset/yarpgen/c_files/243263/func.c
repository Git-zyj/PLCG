/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243263
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8))))) : (((((/* implicit */_Bool) 11U)) ? (((/* implicit */long long int) 3281295522U)) : (-6907517877923199675LL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) min((15900033650561894627ULL), (((/* implicit */unsigned long long int) 2069968757))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? ((-2147483647 - 1)) : ((-2147483647 - 1))))))) || (((/* implicit */_Bool) ((short) var_7))))))));
                var_15 += ((/* implicit */unsigned short) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (unsigned char)63))));
            }
        } 
    } 
}

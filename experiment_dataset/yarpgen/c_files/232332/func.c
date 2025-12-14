/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232332
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
    var_11 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((max((6390980424514233488LL), (((/* implicit */long long int) var_8)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (arr_0 [i_0])))) : ((+(arr_0 [i_0]))))))));
                arr_4 [2ULL] [i_1] [i_0] &= ((/* implicit */short) var_3);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)32))))));
                            var_13 += ((/* implicit */unsigned int) (+((~(((6390980424514233488LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                            var_14 = arr_8 [i_0 - 1] [i_1] [i_0] [i_3];
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 += ((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((unsigned int) (short)442))) : ((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)22))) % (-8149008705019023488LL)))))));
    var_16 = ((/* implicit */_Bool) var_4);
}

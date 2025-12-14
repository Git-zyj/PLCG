/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45439
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) max((var_5), (((/* implicit */long long int) (signed char)-99))));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (((~(var_8))) << (((((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1]))))) - (3246541715U))))))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    var_12 = (signed char)-77;
                    var_13 = var_9;
                }
            }
        } 
    } 
    var_14 = (unsigned short)39245;
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)109))))))) || (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30)))))) < (((((/* implicit */_Bool) 2096896)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_3) : (max((((/* implicit */unsigned int) (unsigned short)2602)), (716336457U)))));
    var_17 = ((/* implicit */unsigned short) 353375578U);
}

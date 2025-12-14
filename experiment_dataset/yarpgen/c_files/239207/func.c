/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239207
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) > ((+(((/* implicit */int) (unsigned char)160))))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) max((arr_12 [i_0 + 1] [i_0 + 1] [(signed char)10] [i_3 - 1]), (var_1)));
                        var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) ^ (4294967292U)))));
                        arr_15 [i_0 + 1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [i_3 - 1] [i_1] [i_0 - 1])))), (((/* implicit */int) (((-(-6845450613773854483LL))) < (((long long int) arr_9 [i_0] [i_0])))))));
                    }
                    for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_8 [i_0 + 2] [i_0 + 2] [4LL])))) : (((/* implicit */int) ((_Bool) var_10)))))));
                        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 3]), (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 3]))))));
                    }
                }
            } 
        } 
    } 
    var_17 = var_8;
}

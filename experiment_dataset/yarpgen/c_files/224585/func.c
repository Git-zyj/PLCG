/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224585
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (short)-30120)) : (((((/* implicit */_Bool) (short)-28320)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) ? (max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_0)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */int) (short)30090)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_17 = ((/* implicit */_Bool) var_4);
        arr_3 [3] [i_0] = ((/* implicit */long long int) (short)26243);
    }
    var_18 *= ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_19 = var_13;
                        var_20 *= ((/* implicit */short) var_15);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) ((max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (4LL))), (((/* implicit */long long int) ((int) arr_0 [i_1]))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)18446))))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [(unsigned short)12] [i_1] [i_1]))))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))))))));
    }
    var_23 &= ((/* implicit */short) ((long long int) ((signed char) (((_Bool)1) ? (((/* implicit */int) var_5)) : (var_7)))));
}

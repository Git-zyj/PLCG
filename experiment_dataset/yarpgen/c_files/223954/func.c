/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223954
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
    var_15 = ((/* implicit */unsigned short) 2757340210211734241LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_16 += ((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (short)-17887))))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -2757340210211734241LL)) && ((_Bool)1)));
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) (~(1270252885)));
            var_20 = ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_1 [i_0])));
        }
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)7168))));
            var_22 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)-79))))));
        }
    }
}

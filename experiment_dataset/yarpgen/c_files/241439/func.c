/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241439
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
    var_20 = ((/* implicit */unsigned int) min((13830556037947849477ULL), (((/* implicit */unsigned long long int) var_9))));
    var_21 = ((/* implicit */_Bool) max((var_15), (((/* implicit */signed char) (_Bool)0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((3963503219U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_7))))))));
        }
        arr_6 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_4 [i_0] [i_0])))) != ((~(((/* implicit */int) min(((short)6), (((/* implicit */short) arr_1 [i_0] [i_0])))))))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_8)), ((~(min((((/* implicit */unsigned int) var_16)), (3963503195U)))))));
                        var_23 = ((/* implicit */unsigned char) arr_10 [i_0]);
                        arr_16 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [6U]))));
                        arr_17 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0])), (max((3963503219U), (((/* implicit */unsigned int) (short)19777))))));
                    }
                } 
            } 
        } 
    }
}

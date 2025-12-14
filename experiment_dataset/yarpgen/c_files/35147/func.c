/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35147
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) < ((((_Bool)0) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_1))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_8))))), (max(((-(var_12))), (((/* implicit */unsigned long long int) min(((short)22012), (((/* implicit */short) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_10 [i_0] [i_4] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32604))) : (2147483648U)));
                            arr_11 [i_0] [(short)5] [i_2] [i_3] [i_4] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_0 - 2] [i_0 - 1] [i_0])))) ^ (((3191894449U) << (((arr_8 [4LL] [i_0 - 1] [i_0]) - (4015320128U)))))))) : (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_0 - 2] [i_0 - 1] [i_0])))) ^ (((3191894449U) << (((((arr_8 [4LL] [i_0 - 1] [i_0]) - (4015320128U))) - (3884041245U))))))));
                        }
                        var_18 = ((/* implicit */short) (~(((var_0) | (((/* implicit */int) max((arr_1 [i_3]), (((/* implicit */unsigned char) (signed char)62)))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) max((((short) (_Bool)0)), (((/* implicit */short) (signed char)-25))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_7);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(0U))))));
    }
}

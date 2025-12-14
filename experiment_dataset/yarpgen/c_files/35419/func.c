/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35419
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] [8ULL] [10U] [i_3 + 1] = ((/* implicit */short) ((((_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 + 2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2 + 2] [i_2] [i_1] [(unsigned short)9])), (5480957279981295202ULL)))))) : ((~(((/* implicit */int) ((arr_3 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_5))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((unsigned short)8), (((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_2 + 2] [i_4 - 2])))))));
                        }
                        var_20 += ((/* implicit */short) arr_0 [i_0 - 1]);
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)8] [i_0 - 2])) : (((/* implicit */int) (unsigned short)49386))))))) || (((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)8), (((/* implicit */unsigned short) var_7))))) + (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0 + 2] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) min(((unsigned short)8), (((/* implicit */unsigned short) var_14)))))))));
    }
    var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) ((short) (short)-13122))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))))), (((/* implicit */unsigned int) (short)-13117))));
    var_23 = ((/* implicit */signed char) var_3);
}

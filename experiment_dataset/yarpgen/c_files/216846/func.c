/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216846
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (12575084563292588511ULL)))) ? (((/* implicit */int) max((var_15), (((/* implicit */signed char) var_11))))) : (((/* implicit */int) min((var_2), (((/* implicit */signed char) var_5)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) -8323771965965686647LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        arr_8 [i_0] [i_1] [i_1] [i_1] [i_2 + 1] [i_3 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) | ((((_Bool)0) ? (((/* implicit */int) (short)7006)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)25327))))))));
                        var_19 -= ((/* implicit */unsigned short) (-(arr_3 [i_0] [i_1] [i_3 - 1])));
                        arr_9 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) arr_0 [i_2]);
                    }
                    var_20 *= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_1)))))) < (max((((/* implicit */long long int) var_1)), (arr_3 [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
}

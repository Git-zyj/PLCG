/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27327
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))) - (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)252)), ((short)-14394)))) == (((/* implicit */int) (short)-14394)))))));
    var_19 = ((/* implicit */unsigned char) max(((+((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (0U))))), (((/* implicit */unsigned int) (short)-14394))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_20 += ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_0] [i_1]));
                    var_21 = ((/* implicit */unsigned short) arr_6 [i_0]);
                    var_22 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [5ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)59638)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-14394))) | (3234938993U))))))));
                }
                var_23 += ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))))))));
                var_25 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (3234938993U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))))), (arr_1 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((arr_5 [i_1] [i_0] [i_1]), (((/* implicit */unsigned short) arr_8 [i_1] [i_0] [i_0])))))))));
            }
        } 
    } 
}

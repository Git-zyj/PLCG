/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33757
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_12)))) ? (((/* implicit */int) max((var_11), (var_6)))) : ((~(((/* implicit */int) min((var_13), (((/* implicit */short) (_Bool)1)))))))));
    var_18 &= ((/* implicit */int) var_16);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((+((+(((/* implicit */int) var_1)))))) : (((((((/* implicit */_Bool) var_8)) && ((_Bool)1))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [(short)9] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) <= (((unsigned int) arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)256)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [(unsigned char)7] [(unsigned char)7] [i_0])))), (((/* implicit */int) (short)-17518))))) : (((unsigned long long int) var_4))));
                            arr_12 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_6 [i_3] [i_2] [i_1])), (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0]))))));
                            var_20 = ((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (arr_10 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (min((((/* implicit */unsigned int) var_8)), (arr_5 [i_0])))))));
                var_22 = ((/* implicit */int) ((unsigned long long int) arr_7 [8U] [i_0] [i_1] [i_1]));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34598
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
    var_18 = ((/* implicit */signed char) var_17);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_12)))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_7)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned long long int) ((int) (~(6U))));
                    var_21 *= ((/* implicit */unsigned long long int) var_16);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((unsigned int) min((arr_1 [i_0] [(unsigned char)3]), (arr_13 [(unsigned short)11] [i_0])))))));
                                var_22 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_3] [i_2]))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [15]))) : (4294967279U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)1)))))))) || (((((/* implicit */int) ((short) (short)9094))) > (min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0])))))))))));
    }
}

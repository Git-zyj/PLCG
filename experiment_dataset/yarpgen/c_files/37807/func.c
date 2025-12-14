/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37807
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_18 += (_Bool)0;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (((_Bool)1) ? ((~(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) arr_9 [i_1] [i_3] [i_3] [i_3] [i_1] [i_0]))))));
                                var_20 = var_4;
                                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_20 [i_1] = ((/* implicit */unsigned long long int) (-(arr_5 [i_1 - 1] [i_5] [i_5])));
                            /* LoopSeq 1 */
                            for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                                arr_23 [(signed char)14] [(signed char)5] [i_1] [i_6] [i_6] = ((/* implicit */int) max((min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), ((((_Bool)0) ? (var_14) : (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) max((arr_19 [(short)7] [i_1 + 1] [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                                arr_24 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_12 [i_1] [(signed char)7] [i_1]), ((_Bool)1)));
                            }
                            var_23 = ((/* implicit */int) min((var_23), (min((((((/* implicit */_Bool) ((short) arr_4 [i_6] [i_6]))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) : (var_9))), (((/* implicit */int) arr_15 [i_5]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) (_Bool)1);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_7)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_1 [i_1 - 1])))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) var_14))))) ? (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (var_7))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) var_17))) - (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */long long int) var_0)))))))))));
    var_28 = ((/* implicit */int) var_5);
    var_29 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((int) var_3))))));
}

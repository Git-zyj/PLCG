/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4545
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4 + 1] [i_1] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (min((var_4), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) var_7))));
                                var_11 = ((/* implicit */unsigned char) ((signed char) (!(((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)-123)))))));
                                arr_16 [i_4] [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) (short)6))))), ((-(((/* implicit */int) var_3)))))), (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_4] [i_0]))))))));
                                arr_17 [i_0] [i_3] [i_2] [i_3] [i_3] [i_4] [i_4 - 4] = ((/* implicit */signed char) (short)-22904);
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) ((unsigned char) var_3))) : ((~(((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        {
                            arr_25 [i_5] = ((/* implicit */short) min((var_9), (((1838886536U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60288)))))));
                            arr_26 [i_0] [i_1] [i_5] [i_5] [i_6 + 3] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) var_3)), (var_2))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)33583), ((unsigned short)16817))))))))))));
}

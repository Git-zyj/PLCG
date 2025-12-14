/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30410
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
    var_14 = ((/* implicit */short) (-(((/* implicit */int) ((1643230141U) <= (3669688739U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((short) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9))));
                var_15 = (-(((((_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) : ((-(var_6))))));
                var_16 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (_Bool)0)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_12 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)44905)) || (((/* implicit */_Bool) (short)-15137)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))) : (((long long int) var_2))));
                                arr_20 [i_2] [i_3] [i_3] [i_4] [(signed char)0] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1858))));
                                arr_21 [i_2] [i_3] [i_3] [i_4] [i_3] [i_6] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((-((+(((/* implicit */int) (short)15136)))))) / ((-((-(((/* implicit */int) var_7)))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_3))))));
                    arr_25 [i_7] [(short)1] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) ((unsigned char) var_3))) : ((-(((/* implicit */int) (unsigned char)91))))))) ? (((((/* implicit */_Bool) (short)15136)) ? (2066495228U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((long long int) var_12)))))));
                }
                arr_26 [i_3] = ((/* implicit */unsigned long long int) (-(((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                arr_27 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) 2228472068U)))))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) (-(var_4))))));
                arr_28 [i_3] [i_2] [i_2] &= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_1)))));
            }
        } 
    } 
}

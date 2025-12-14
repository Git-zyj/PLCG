/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207377
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)44577)), (max((((int) (short)0)), (((/* implicit */int) (signed char)25))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max(((short)-1), ((short)-17)));
                    var_21 -= ((/* implicit */unsigned long long int) ((short) max((arr_2 [i_0 + 1]), (((/* implicit */unsigned char) arr_5 [4] [2ULL] [i_0 + 1])))));
                    var_22 = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (short)22);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((int) arr_14 [i_6] [i_4] [i_4] [i_3]));
                            arr_19 [i_3] [i_4] [i_4] [i_4] = ((arr_15 [i_4 - 1]) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_10 [i_6])))));
                            arr_20 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-65))))) ? (var_2) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_6] [i_4] [i_4] [i_3]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-21)), (-6117747539547411571LL))))));
                            arr_21 [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)21))))) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_5] [i_3])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_4] [i_3])), ((unsigned char)254)))))), (((/* implicit */int) max(((signed char)3), (arr_17 [i_3] [i_3] [i_5] [i_4]))))));
                            var_25 = ((/* implicit */unsigned int) ((long long int) (!((!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_3])))))));
                        }
                    } 
                } 
                arr_22 [i_3] [i_4] [i_4 - 1] = (_Bool)1;
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-64)), ((unsigned char)0)))), (4096239037U))))));
}

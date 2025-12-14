/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39356
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)151))));
                    arr_7 [(short)8] [(short)8] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            {
                arr_14 [i_3 - 1] [i_3 - 1] [i_3] &= ((unsigned int) max((((/* implicit */unsigned int) ((signed char) 4294967295U))), ((+(var_0)))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_3 - 1] [i_4 + 1]), (((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))))))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3 - 1])) + (((/* implicit */int) (unsigned char)255)))))));
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (0LL)))) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_10 [i_4]))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_26 [i_5] [i_6 + 1] [i_7] = var_4;
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) 23LL))));
                                arr_27 [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_22 [i_3] [i_4] [(unsigned short)17] [(short)10])) ? (arr_24 [(_Bool)1] [i_4] [i_4] [i_6] [i_7] [(unsigned short)15]) : (((/* implicit */long long int) ((/* implicit */int) (short)26808)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) (signed char)-49);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (short)26818);
    var_16 = ((/* implicit */long long int) var_3);
}

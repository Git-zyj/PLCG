/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212218
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
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(max((max((var_3), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((short) var_16))))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(6483786524988113482LL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0 - 2] [i_3])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 1] [i_1])))) : ((+(((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_0 + 1] [i_3]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [(unsigned char)13])), (arr_4 [i_0 - 2] [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_5 + 1] [i_1] [i_0 + 1])))) ? (min((arr_8 [i_1] [i_2] [i_6] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) != (arr_15 [(unsigned short)18] [i_5] [i_0 + 1] [i_0 + 1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                                var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2292723815U))), (min((arr_16 [(unsigned short)5] [(unsigned short)12] [i_2] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                arr_25 [i_7] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_24 [i_7 - 2] [i_7 + 1] [(_Bool)1])))), ((~(((/* implicit */int) (signed char)33))))));
                var_24 = ((/* implicit */_Bool) (-((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_7 - 1] [i_8])), ((unsigned short)29835))))))));
            }
        } 
    } 
}

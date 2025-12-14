/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48554
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
    var_15 = ((/* implicit */signed char) (unsigned char)13);
    var_16 = 30720;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) -1284244563)) >= (var_4))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (((+(((/* implicit */int) (short)13429)))) + (((/* implicit */int) ((unsigned char) var_3))))));
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 3458820592U))) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_3] [i_0]))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_2] = ((/* implicit */unsigned char) 3458820592U);
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -132922414);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((unsigned int) max((1529524963U), (((/* implicit */unsigned int) var_7)))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                {
                    arr_31 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (22565556U))))))), ((-(((/* implicit */int) arr_3 [i_6]))))));
                    arr_32 [(signed char)0] [i_6] [i_6] = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((-2123410077) - (((/* implicit */int) arr_25 [i_5] [i_6] [i_7]))))) + (((var_11) + (var_4)))))));
                    arr_33 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) (unsigned char)3);
                    arr_34 [i_5] [i_6] [i_6] = min((((/* implicit */unsigned int) (short)17485)), (var_1));
                }
            } 
        } 
    } 
}

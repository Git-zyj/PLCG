/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208321
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
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(var_10)))) : ((~(((/* implicit */int) (!(var_10))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (_Bool)1))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_0 [i_2 + 2] [i_0 + 2])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_10 [i_4])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_7 [16U] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (1843446659U)))) : ((((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) var_8))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
                    var_23 &= ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_3 [i_2 + 4])))));
                }
            } 
        } 
    } 
    var_24 = ((unsigned long long int) var_11);
    var_25 *= ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned short)13321))))) | (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52188))))))), (((/* implicit */unsigned int) var_17))));
}

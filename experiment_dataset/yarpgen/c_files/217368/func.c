/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217368
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
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(signed char)18] [i_1] = ((/* implicit */unsigned short) 32767);
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 = ((int) (!(((/* implicit */_Bool) var_17))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 4; i_4 < 19; i_4 += 4) /* same iter space */
                            {
                                arr_18 [i_2] [2] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_17 [i_4] [i_3] [i_2] [i_1] [i_0]);
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)42)))))));
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)32768))));
                            }
                            for (signed char i_5 = 4; i_5 < 19; i_5 += 4) /* same iter space */
                            {
                                arr_22 [i_0] [i_0 + 1] [i_0] [i_2] [20ULL] [i_0] = ((/* implicit */unsigned int) arr_4 [20U] [i_2] [i_2]);
                                arr_23 [i_5] [i_5] [i_5 + 1] [i_2] = ((/* implicit */unsigned char) (-((-(arr_19 [i_5] [i_5 - 4] [i_5] [(signed char)8] [i_5 - 2])))));
                                var_21 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)32752)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)32778)) : (((/* implicit */int) var_6))))) != (min((((/* implicit */long long int) arr_9 [i_3] [(unsigned char)20] [i_3])), (var_14))))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (unsigned char)241)))) ? (max((575274380U), (((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 1] [i_0] [i_2 + 1] [i_2 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0] [i_2 - 4] [i_0])))))))))));
                                arr_24 [15LL] [i_2] [(unsigned short)4] [i_2 - 2] [i_2] [i_2 + 1] [14] = var_0;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned char) arr_1 [i_1]);
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((6324029269533695778LL) > (((/* implicit */long long int) 922193301)))))));
                            }
                            var_25 = ((unsigned int) ((((/* implicit */_Bool) 3042255888U)) && (((/* implicit */_Bool) (short)-23098))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((int) arr_4 [i_0 + 3] [i_1] [i_2 + 3])) : ((-(((/* implicit */int) arr_9 [i_3] [(short)14] [i_3])))))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((long long int) var_1)) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [0] [i_0])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_0))));
    var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))));
}

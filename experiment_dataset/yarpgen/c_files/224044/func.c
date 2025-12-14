/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224044
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 &= ((/* implicit */_Bool) ((short) ((var_6) ? (1637115727U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                                var_12 = ((/* implicit */int) var_9);
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)135)) || (((/* implicit */_Bool) 417586688U)))) ? (12U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5748493983232346806LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned short)45265)))))))));
                                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)62356))) <= (((/* implicit */int) (_Bool)1)))))));
                                var_14 = min((((long long int) 1450156921U)), (((/* implicit */long long int) var_8)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((-5748493983232346807LL) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2709914938U)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)36))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)4644)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))))))));
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-9480)) ? ((~((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_6))));
}

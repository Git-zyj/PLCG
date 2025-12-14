/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24350
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
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) 1817845950U))))) ? ((~(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_11)))))) >= (((/* implicit */int) ((_Bool) ((unsigned int) (short)-28878))))));
    var_14 = ((/* implicit */unsigned short) (((~(var_0))) / (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_4))) ^ (((/* implicit */int) ((unsigned char) var_8))))))));
    var_15 = ((/* implicit */_Bool) 2477121345U);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)14004)))), (((/* implicit */int) (short)27572)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_4] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)98))))), ((+(1817845964U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) var_10));
                        arr_20 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)47298))))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)49428)))))));
                        arr_21 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (arr_17 [i_0] [i_1 - 2] [i_2] [i_2] [i_2] [i_2])))) != (var_4)));
                        arr_22 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) -9223372036854775796LL)) : (var_10))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_26 [i_0] [i_2 - 1] [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) (signed char)-28))))));
                        arr_27 [i_1] [i_2 - 1] &= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((short) arr_10 [i_0] [i_0] [i_2] [i_6]))), (var_8))), (((/* implicit */unsigned long long int) (+(((var_5) | (((/* implicit */long long int) ((/* implicit */int) (short)28891))))))))));
                    }
                }
            } 
        } 
    } 
}

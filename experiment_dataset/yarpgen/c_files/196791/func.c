/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196791
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 -= ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))))));
        var_18 = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), ((+(((/* implicit */int) arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) max((((unsigned short) (unsigned short)56313)), (((/* implicit */unsigned short) (unsigned char)6)))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) -1903844629))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-21612)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : ((-((-(4294967295U)))))));
                                var_21 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) (~(var_8)))) ? ((~(((/* implicit */int) (unsigned char)2)))) : ((+(((/* implicit */int) (unsigned char)0))))))));
                                var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (short)-11096)) : (((/* implicit */int) arr_5 [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((int) ((signed char) ((unsigned int) (signed char)-1))));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_14))));
}

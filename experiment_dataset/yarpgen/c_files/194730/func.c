/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194730
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
    var_15 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34682)) | (((/* implicit */int) (short)5232)))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_8 [2U] [i_3 + 1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)7686))))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_6 [i_0] [(short)12] [i_0]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) ((max(((!(((/* implicit */_Bool) var_6)))), (arr_5 [i_0] [i_0] [i_1] [i_2]))) ? (((/* implicit */int) ((short) arr_10 [i_0] [i_0] [(_Bool)1] [i_0 + 1]))) : (((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)60253)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) max(((short)-9697), ((short)-27939))))))));
    var_18 = ((/* implicit */_Bool) var_1);
}

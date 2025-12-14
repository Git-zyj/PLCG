/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201615
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
    var_11 *= ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_2)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) min((max((var_7), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1))))))) % (((/* implicit */int) var_5))));
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-5415))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)5947))) ^ (-1LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((short) (!((!(((/* implicit */_Bool) arr_0 [i_1])))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) arr_3 [i_2] [i_1] [i_0])), (min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)-1)))), ((-(((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_3] [i_2] [(_Bool)1] [(unsigned short)1] [i_2] = ((/* implicit */_Bool) ((long long int) min((arr_12 [i_3] [i_3] [i_3] [(short)6] [i_3] [i_3 + 1] [i_3 + 1]), (arr_12 [i_0] [i_0] [i_0] [(unsigned char)3] [i_2] [i_3] [i_3 + 1]))));
                                var_15 = ((_Bool) min((((/* implicit */unsigned char) ((63) != (((/* implicit */int) (short)-5776))))), (min((((/* implicit */unsigned char) (_Bool)0)), (arr_6 [i_0] [i_2] [i_0] [i_4])))));
                                var_16 *= ((/* implicit */unsigned char) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

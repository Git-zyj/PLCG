/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26994
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_10 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((((/* implicit */int) arr_8 [1] [i_0])) <= (((/* implicit */int) var_8)))))))) >= ((~(((/* implicit */int) arr_9 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_11 -= ((/* implicit */int) min(((unsigned short)8128), ((unsigned short)480)));
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((unsigned char) min((((((/* implicit */int) arr_12 [i_0] [i_2] [(_Bool)1] [i_3] [i_4])) + (arr_6 [i_0]))), (((var_6) - (((/* implicit */int) var_4))))))))));
                                arr_15 [i_0] [i_0] [(short)16] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (int i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            {
                var_13 = (-(((/* implicit */int) (signed char)-124)));
                var_14 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_6 + 4] [i_6 - 2])) ? (((/* implicit */int) arr_11 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 2])) : (arr_6 [i_6 - 1]))) & ((~(((/* implicit */int) min((var_5), (((/* implicit */short) arr_12 [(_Bool)1] [i_5] [i_5] [i_5] [i_6])))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) var_5);
    var_16 = ((/* implicit */short) ((_Bool) ((unsigned short) min((((/* implicit */short) var_1)), (var_9)))));
    var_17 = ((/* implicit */int) var_5);
}

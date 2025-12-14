/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217161
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
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (321356245))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) < ((-(((/* implicit */int) var_1))))))) >= (max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_1))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_1 [i_1] [i_1]))));
        var_14 = ((/* implicit */unsigned short) ((arr_0 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */long long int) 1883664857U);
                        var_16 = ((/* implicit */_Bool) arr_3 [i_1] [i_2]);
                        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)17)) > (arr_13 [i_1] [i_3] [i_4])));
                    }
                } 
            } 
            var_18 = (+(var_6));
        }
    }
}

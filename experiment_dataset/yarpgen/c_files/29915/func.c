/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29915
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (~(((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)179)))))), ((~(1241899529)))));
                    arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_0))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (max((((((/* implicit */_Bool) (short)22275)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) -97151513)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_2] [i_1])))))) : (((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_12 &= ((/* implicit */_Bool) ((long long int) var_8));
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_6);
                    }
                    var_13 = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
}

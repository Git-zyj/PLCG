/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190155
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
    var_12 = (+(((unsigned int) var_11)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)57891)) | (((int) (unsigned short)65535))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_8 [i_0])))));
            var_14 += ((/* implicit */_Bool) var_9);
        }
        for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+(arr_6 [i_3] [i_3]))))));
            arr_14 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_0])))) : (var_4)));
            arr_15 [i_0] [i_3] = ((arr_12 [i_3 - 1] [i_3]) / (((/* implicit */long long int) var_7)));
        }
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_2 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_17 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) ((long long int) var_6));
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != (var_4)))) : (((/* implicit */int) ((signed char) max((var_10), (var_10)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200295
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
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 *= arr_1 [i_0] [i_1];
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) min((arr_0 [i_0]), ((signed char)-54)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_22 += (~(((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-60)) || (((/* implicit */_Bool) 2588719390U))))))));
        arr_9 [i_2] = ((/* implicit */short) 9ULL);
        var_23 = (_Bool)0;
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (var_14)));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_16 [16U]))))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) (signed char)-11)))) + (76))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_12 [i_2])) <= (((/* implicit */int) arr_12 [i_2]))))))))));
    }
}

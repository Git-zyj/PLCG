/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244472
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [(_Bool)1])))))))) / (var_6)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) ^ (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1])) ? (max((var_6), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0 - 1])))) : (arr_8 [i_1] [i_0]))))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (min((((/* implicit */long long int) arr_4 [i_0 - 1])), (var_6))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        arr_12 [i_4] = ((/* implicit */signed char) ((_Bool) arr_11 [i_4]));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [(short)12] [i_4] [i_4] [i_4]))));
                        arr_22 [i_4] [i_5] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])))));
                    }
                } 
            } 
        } 
        arr_23 [4U] [i_4] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_14)))));
    }
    var_19 = ((/* implicit */int) var_12);
}

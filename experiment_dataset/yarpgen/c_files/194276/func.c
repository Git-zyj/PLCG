/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194276
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
    var_10 *= ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) / ((-((+(var_0)))))));
    var_11 |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
    var_12 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_9)))) ? ((+(var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) != (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_13 -= ((/* implicit */int) (+(min(((-(var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (arr_6 [14U] [i_1])))));
                    var_15 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((arr_0 [5]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (max((16809097771380067403ULL), (((/* implicit */unsigned long long int) -1))))))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) -2147483641)) : (3094606702800429405ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1] [i_2]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (arr_6 [i_0] [(signed char)14])));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (min((((/* implicit */int) (!(arr_0 [i_2])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])))))));
                    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [15ULL])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (min((((/* implicit */int) arr_1 [i_2])), (arr_6 [i_1] [i_1]))) : (((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))) ? ((~((+(((/* implicit */int) arr_3 [i_1])))))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
                }
            } 
        } 
    } 
}

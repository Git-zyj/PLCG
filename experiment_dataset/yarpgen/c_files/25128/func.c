/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25128
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
    var_20 = ((/* implicit */signed char) 5754215014136948485LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (+(arr_5 [(_Bool)1] [3U] [11] [8U])))), (((((/* implicit */_Bool) arr_0 [(unsigned char)19])) ? (var_4) : (((/* implicit */long long int) arr_0 [(unsigned char)13])))))), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_14)), (arr_1 [0ULL] [(short)18]))))))));
                    arr_8 [(unsigned short)10] [16U] [(unsigned short)6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_7 [1U] [11ULL] [(_Bool)1] [7]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_6 [(signed char)12] [(short)16] [i_2 - 3]))))), (max((((/* implicit */unsigned long long int) arr_2 [0U])), (((((/* implicit */unsigned long long int) var_17)) + (var_9)))))));
                    var_22 = ((/* implicit */signed char) ((max((arr_0 [i_2 - 2]), (((/* implicit */unsigned int) arr_7 [16ULL] [(unsigned char)8] [15ULL] [i_2 - 1])))) > (arr_0 [(signed char)1])));
                    arr_9 [(short)16] [6U] = ((/* implicit */unsigned char) ((max((((((/* implicit */int) arr_4 [4ULL])) != (((/* implicit */int) (short)0)))), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_2 [(_Bool)1])))))) ? (((/* implicit */int) arr_3 [(unsigned char)5])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_19)) : (-1675451145)))) ? (((/* implicit */int) ((((/* implicit */long long int) 1793382190)) == (var_18)))) : (((/* implicit */int) ((unsigned char) var_15)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_3);
    var_24 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((((/* implicit */int) (short)-26841)), (-1675451145)))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_15))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200476
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
    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((((int) var_13)) - (((int) (signed char)-53))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */int) var_9)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) (short)20790))))) : (497341594U)));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) == (arr_0 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */unsigned long long int) 471581508)) : (arr_6 [i_0] [i_0] [i_2 - 1] [i_0])))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1]))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (31)));
                }
            } 
        } 
    }
    var_18 *= ((/* implicit */unsigned char) var_10);
}

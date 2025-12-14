/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33929
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_8))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) % ((~(arr_1 [i_0])))))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)1] [i_0])) > (((/* implicit */int) (unsigned char)231))))))))), (((unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) var_3);
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_14 [(signed char)11] [i_4 + 1] [i_4 + 1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)110));
                        arr_15 [i_1] [i_2] [(signed char)10] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) arr_8 [i_1]));
                    }
                } 
            } 
        } 
        var_14 *= ((/* implicit */_Bool) ((int) ((signed char) var_11)));
        arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_5))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 8098182945854560952LL)))))));
    }
    var_15 = ((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_10))));
}

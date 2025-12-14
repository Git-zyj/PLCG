/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223615
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
    var_20 -= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) (unsigned short)65535);
            arr_4 [i_1] [5U] [i_0] &= (unsigned char)252;
        }
        arr_5 [(unsigned char)3] = ((/* implicit */short) ((arr_0 [i_0] [i_0 + 1]) != (arr_0 [i_0] [i_0])));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [(signed char)1] [4U]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_0 - 1])))))) ? (((/* implicit */int) ((unsigned char) arr_3 [6ULL] [6ULL] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(short)7] [i_3] [i_2] [6U])) >> (((/* implicit */int) var_15))))) ? (arr_14 [i_3 + 2] [i_0 + 2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_4])))))));
                        var_23 += ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_5] [(_Bool)1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [2ULL]))) - (arr_15 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))))));
        arr_18 [i_5] = ((/* implicit */short) arr_17 [i_5]);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_25 &= ((/* implicit */unsigned char) var_1);
        var_26 = ((/* implicit */_Bool) var_11);
        arr_22 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned short) arr_17 [i_6]));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) arr_21 [i_6])))))));
    }
}

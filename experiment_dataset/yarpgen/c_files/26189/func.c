/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26189
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
    var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((var_13), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 |= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((-(((/* implicit */int) var_14)))) : (((arr_0 [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0]))))))));
        var_19 &= ((/* implicit */unsigned char) arr_2 [(signed char)16]);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) var_6);
        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) max((var_14), (((/* implicit */signed char) arr_5 [i_1]))))) : (((/* implicit */int) var_0))))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [(unsigned char)6] [(unsigned char)6]))) >= (var_13)))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) var_12);
                        var_23 = ((/* implicit */unsigned int) var_12);
                    }
                } 
            } 
            var_24 += min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_3]))))) : (arr_9 [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2]))))));
        }
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [(short)4])) ? (((/* implicit */unsigned long long int) arr_21 [i_2])) : (var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_6])), (arr_20 [i_2] [i_6] [i_6])))) : ((+(arr_7 [i_6] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_2] [(signed char)3] [(short)8])))) : (((((((/* implicit */_Bool) var_10)) ? (arr_7 [i_2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [(short)1])) ? (arr_23 [(signed char)0] [i_6]) : (((/* implicit */long long int) var_10)))))))));
            var_26 = ((/* implicit */_Bool) arr_18 [i_6] [i_6] [14] [i_6]);
        }
        var_27 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (3338456763789438485ULL)));
    }
}

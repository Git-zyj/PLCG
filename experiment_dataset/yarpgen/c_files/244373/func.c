/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244373
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_5 [i_3]) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_3]))))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) var_3);
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [2] [i_0]))))), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(signed char)8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) >= (((((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) - (arr_0 [i_0]))))))) : (((var_8) ? (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)5])) ? (arr_1 [6ULL] [i_0]) : (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (-1758384160234393986LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        arr_15 [14LL] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) % (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_13 [(short)8]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)0]))) : (((((/* implicit */_Bool) arr_14 [i_4] [8LL])) ? (((/* implicit */long long int) arr_14 [i_4] [(signed char)10])) : (var_1)))))));
        var_13 -= ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) min((arr_13 [4]), (((/* implicit */unsigned char) (_Bool)1)))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [6U]))) / (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [(short)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned char)8]))) | (arr_14 [18LL] [18LL])))));
        var_15 = ((/* implicit */_Bool) (-(var_9)));
        var_16 = ((/* implicit */_Bool) arr_14 [i_4] [i_4]);
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))), (max((((/* implicit */int) arr_16 [i_5])), (((((/* implicit */int) arr_16 [i_5])) + (((/* implicit */int) var_4))))))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_5])), (((((/* implicit */_Bool) arr_13 [18LL])) ? (((/* implicit */unsigned long long int) 618073721001112380LL)) : (var_2))))))));
        arr_20 [i_5] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5] [(short)10])) ? (((/* implicit */int) arr_13 [6])) : (((/* implicit */int) var_4))))), (((arr_14 [(unsigned char)14] [(unsigned char)14]) >> (((/* implicit */int) (_Bool)1)))))) / (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0)))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_2)));
            arr_26 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)16383))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_6))))) : (((((/* implicit */_Bool) (short)-1)) ? (4354070427781027348LL) : (((/* implicit */long long int) arr_10 [i_7] [i_6] [i_6] [i_7] [i_7]))))));
            var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_6]))));
        }
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) arr_23 [i_6]);
    }
}

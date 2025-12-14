/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232030
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
    var_17 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 -= min((max((((/* implicit */long long int) max(((short)32767), (((/* implicit */short) (signed char)-113))))), ((-(arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : ((-(((((/* implicit */_Bool) 18165595561089389804ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)62558))))))));
                    arr_9 [(short)5] = ((((/* implicit */_Bool) ((short) ((unsigned int) arr_3 [i_0] [i_1] [(short)3])))) ? (max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (arr_4 [i_0] [i_1]) : (var_7))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_2] [(_Bool)1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)43))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 688792639U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_15)))) ? (var_15) : (arr_5 [i_3] [i_2] [i_1] [i_0]))))))));
                        var_20 = min((((/* implicit */unsigned int) (unsigned char)3)), (((((/* implicit */unsigned int) 1895558217)) / (arr_3 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) var_0)))));
                        var_21 = (+(var_15));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_18 [i_0] [i_1] [(signed char)11]))))));
                        var_22 *= ((/* implicit */short) (unsigned short)18);
                    }
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_2])))) && (((/* implicit */_Bool) min((arr_3 [i_0] [i_0] [i_2]), (arr_6 [i_0] [i_0] [i_2])))))) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65493)) && (((/* implicit */_Bool) var_6)))))))) ? (min((16618034757344953191ULL), (((/* implicit */unsigned long long int) -10LL)))) : (((/* implicit */unsigned long long int) var_1))));
}

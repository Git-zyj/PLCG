/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32833
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((unsigned long long int) max((var_15), ((unsigned char)2)))) + (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2487407236U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(short)11]))) : (var_7))))))));
                arr_6 [(_Bool)1] [10LL] = ((/* implicit */short) arr_1 [i_1] [i_1]);
                var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [(unsigned char)1] [i_1 - 1])))) ? (((long long int) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (short)32767))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26627))) : (1685458074U))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)5438)))))))) ? ((-(((long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9)))) ? (min((((/* implicit */unsigned int) (unsigned char)57)), (arr_5 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            {
                arr_14 [i_3] = ((/* implicit */short) max((((((/* implicit */int) var_16)) << (((((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) var_2)))) - (123))))), (((((/* implicit */_Bool) ((unsigned char) (short)-32755))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) (unsigned short)35786)) : (((/* implicit */int) (unsigned char)254))))))));
                arr_15 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 4254464979U))))), (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned short)35286)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29749)))))) : (arr_10 [i_3])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)62))));
}

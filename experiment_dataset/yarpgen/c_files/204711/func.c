/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204711
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_4 [i_0] [i_0])))))), ((+(-1380677241)))));
                var_13 = ((/* implicit */unsigned int) ((arr_4 [i_0 + 1] [i_1 + 1]) && (((/* implicit */_Bool) ((arr_5 [i_1 - 1] [i_0 + 2] [i_0]) ^ (arr_5 [i_1 + 1] [i_0 - 1] [i_0 - 3]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1]))));
                    var_15 = (-(arr_1 [i_0 - 1]));
                }
                for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [6])) ? (((((/* implicit */_Bool) (unsigned char)210)) ? (arr_7 [i_0 - 2]) : (arr_7 [i_0 - 3]))) : ((-(((/* implicit */int) arr_8 [i_3] [i_0 - 2] [i_1 - 1])))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_8 [i_0] [i_1] [i_0])), (var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (((((/* implicit */_Bool) 123977537U)) ? (1711700647U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)249)) : (var_11))) << (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -9223372036854775800LL))))))) : (((/* implicit */int) var_2)))))));
                }
                arr_12 [22LL] [20] [22LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)249)))) ? (((((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])) & (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])))) : (arr_0 [8U])));
            }
        } 
    } 
    var_19 &= ((/* implicit */int) var_8);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235794
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [13] [(unsigned short)4] = (-((+(((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (arr_1 [14U])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [(_Bool)1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2]))) & (((var_10) * (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((max((-753470947), (((/* implicit */int) var_5)))) << (((((((/* implicit */_Bool) var_2)) ? (arr_1 [(_Bool)1]) : (((/* implicit */int) var_7)))) + (751787546))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_1 + 2]))));
        arr_11 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((var_3), (((/* implicit */unsigned int) arr_1 [i_1]))))))) ? (max((((/* implicit */int) arr_8 [i_1])), (((((/* implicit */int) var_2)) >> (((var_3) - (1630664937U))))))) : ((+(arr_7 [i_1])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 4; i_3 < 13; i_3 += 1) 
        {
            {
                arr_16 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-34)) / (307781266)))) : ((-(var_3)))))), ((~(min((((/* implicit */unsigned long long int) -307781258)), (var_6)))))));
                arr_17 [i_2] [i_2] = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
    var_11 = (!(((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) <= ((+(var_8))))));
    var_12 = max((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_4)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_4)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))));
}

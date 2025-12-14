/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197724
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) || (((/* implicit */_Bool) ((unsigned char) var_1)))));
                arr_6 [i_1] = var_5;
                var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned char) var_10))) * (((/* implicit */int) var_9)))) ^ (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)99)))))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_4 [(signed char)0] [i_0] [(_Bool)1])))), (((((/* implicit */int) var_2)) | (((/* implicit */int) var_5))))))) ? (((((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_1 [i_1])))) : (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) < (((/* implicit */int) var_11))))), ((~(((/* implicit */int) (unsigned short)6059))))))));
            }
        } 
    } 
    var_14 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            {
                arr_12 [i_2] = ((/* implicit */unsigned char) arr_4 [i_2] [i_2] [i_2]);
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_3 - 3])) ? ((~(((/* implicit */int) arr_7 [i_3 - 3] [i_3 - 3])))) : (((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_3 - 3])) ? (((/* implicit */int) arr_7 [i_3 - 3] [i_3 - 3])) : (((/* implicit */int) arr_7 [i_3 - 3] [i_3 - 3]))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (arr_7 [i_2] [i_3])));
            }
        } 
    } 
}

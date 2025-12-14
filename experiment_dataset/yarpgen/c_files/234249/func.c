/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234249
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))));
                var_17 = ((/* implicit */signed char) max((max((((/* implicit */unsigned char) var_8)), ((unsigned char)68))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-100))));
                var_19 &= ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)188)))) <= (((/* implicit */int) (signed char)0))));
            }
        } 
    } 
    var_20 *= (unsigned char)180;
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_22 += ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) arr_0 [(unsigned char)5] [i_2]))))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_2])))), ((~(((/* implicit */int) min((arr_3 [i_2]), (arr_3 [i_2]))))))));
        arr_6 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)15)) << (((((/* implicit */int) (signed char)-121)) + (122)))));
    }
    var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned char)68)))), (((/* implicit */int) var_13))))));
}

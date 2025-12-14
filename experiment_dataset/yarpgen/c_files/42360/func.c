/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42360
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)190), ((unsigned char)153)))) ? (((((/* implicit */_Bool) 2974645795U)) ? (min((((/* implicit */long long int) var_10)), (var_4))) : (((/* implicit */long long int) (~(var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)78)), ((~(((/* implicit */int) ((unsigned char) var_11)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_3 [(signed char)15] [i_1])))) && (((/* implicit */_Bool) arr_2 [i_1] [i_0]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_2])) ? (((/* implicit */int) (short)11701)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)190)))))))));
                                arr_17 [i_0] [i_0] [i_1] [(_Bool)1] [i_2 + 1] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_3] [i_4])))))) == (var_2)));
                                arr_18 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)73));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

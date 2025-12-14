/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28798
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 &= ((/* implicit */signed char) arr_9 [i_3] [i_1] [i_0] [i_1] [i_0]);
                            arr_11 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)7)))))) ? (((/* implicit */int) min((max((arr_0 [i_1]), (((/* implicit */signed char) arr_3 [i_0] [(_Bool)1])))), (((/* implicit */signed char) min((arr_3 [i_0] [i_1]), (var_3))))))) : (((/* implicit */int) min((arr_9 [i_2] [i_0] [i_2] [i_0] [i_0]), (arr_9 [(signed char)0] [(_Bool)1] [i_2] [i_1] [i_2]))))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)-1);
                            var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-12)) <= ((~(((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_9)))) < (((/* implicit */int) max((var_9), (arr_2 [i_2])))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [(signed char)20] = arr_2 [i_0];
            }
        } 
    } 
    var_12 ^= ((/* implicit */_Bool) min((max((((/* implicit */int) var_0)), (((((/* implicit */int) var_1)) + (((/* implicit */int) var_3)))))), (((/* implicit */int) var_2))));
    var_13 &= var_0;
}

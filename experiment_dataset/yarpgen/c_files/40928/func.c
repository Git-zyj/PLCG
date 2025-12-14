/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40928
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
    var_10 ^= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [(signed char)12] [i_1] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) ((signed char) var_0))))));
                var_11 -= ((/* implicit */_Bool) var_0);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [(_Bool)1] [i_0] [i_2] [i_3] = 2826261003U;
                            arr_14 [i_2] = ((/* implicit */_Bool) max((2826261003U), (((((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))) >> (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (1468706292U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned int) var_2));
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_24 [i_4] [i_5] [i_6] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_4]))))));
                    var_13 &= ((/* implicit */signed char) ((unsigned int) -8368891058403248606LL));
                }
                for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_8), (arr_3 [(_Bool)1] [(_Bool)1] [i_4])))), (((((((/* implicit */int) (signed char)-73)) + (2147483647))) >> (13U)))))) ? (((((/* implicit */_Bool) max((arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] [i_7]), (var_7)))) ? ((+(-8368891058403248606LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_4] [i_5])) : (((/* implicit */int) var_3)))))));
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_6)))));
                    var_16 = ((/* implicit */_Bool) var_7);
                    var_17 *= ((((/* implicit */_Bool) ((long long int) -8368891058403248606LL))) ? (max((1468706293U), (((/* implicit */unsigned int) (signed char)-107)))) : (2225555747U));
                    arr_28 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) max((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) / (var_4))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)22))))))), (((unsigned int) var_9))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
}

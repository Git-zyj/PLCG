/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192497
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) ? (((var_11) << (((arr_1 [i_0]) + (3021647025479051986LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_2)))))))))));
        arr_3 [2U] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_10)) >= (var_6))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        var_19 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) var_10);
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1] [i_1 - 3])) != (((/* implicit */int) var_14))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            for (int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_23 [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) var_8);
                                arr_24 [i_1] [i_5] [i_4] [i_3] = ((/* implicit */short) ((((arr_18 [i_3] [i_4] [i_6]) >= (var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_9 [i_4 - 3] [i_4 - 3] [i_5]))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_17)) + (var_3))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_3 - 3]) : (var_17)));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_7))));
}

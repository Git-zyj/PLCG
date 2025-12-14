/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237458
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) max((1142570302U), (((/* implicit */unsigned int) (_Bool)1))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_8)))))));
    }
    var_15 = ((/* implicit */short) (-(max(((-(((/* implicit */int) (signed char)107)))), (((/* implicit */int) var_4))))));
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 7; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31813)))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_5 + 2] [i_3 - 1])) >= (((/* implicit */int) arr_13 [i_5 + 2] [i_3 + 4]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-45))));
                    var_18 = ((/* implicit */int) (short)-12146);
                    arr_17 [(_Bool)1] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_6)) < (((/* implicit */int) max((var_0), ((signed char)-26)))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */signed char) var_11);
}

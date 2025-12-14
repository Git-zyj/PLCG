/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190291
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
    var_11 &= ((/* implicit */long long int) (~(max((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */_Bool) (short)23428)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)4))))))));
    var_12 = ((var_5) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((int) var_10)) : (var_0)))));
    var_13 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [(_Bool)1] [i_2] [i_1] = ((((/* implicit */int) (unsigned char)23)) ^ (((/* implicit */int) var_6)));
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [12])) : (((/* implicit */int) (short)-23441))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */long long int) var_2)) : (1742482089048899625LL))))));
    }
    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [5U] [i_3 - 2] [i_3 - 2] [i_3 - 2])) ? ((-(((/* implicit */int) arr_2 [i_3] [i_3])))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3 - 1] [(signed char)10])) ? (3291931645U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))), (min((((/* implicit */unsigned int) var_8)), (var_5)))))));
        var_17 = ((/* implicit */short) (~((+(arr_3 [i_3 + 1] [i_3 - 1])))));
        var_18 = ((/* implicit */short) (_Bool)1);
        arr_14 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) -1386413238)) ? (((/* implicit */int) arr_1 [i_3 - 2])) : (((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)23440)), (arr_1 [i_3 + 2]))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 24; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)37)))), (((((/* implicit */_Bool) arr_22 [i_3] [20U] [i_3 + 2] [20U])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6] [5U] [i_3])))))))));
                        var_20 = ((/* implicit */unsigned short) (signed char)-8);
                    }
                    var_21 = ((/* implicit */signed char) (unsigned char)253);
                    arr_23 [(unsigned short)23] [(unsigned short)23] [i_4] [(unsigned short)23] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10317))) < (49152U));
                }
            } 
        } 
    }
}

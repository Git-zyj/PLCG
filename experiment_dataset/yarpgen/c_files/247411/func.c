/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247411
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        var_13 &= ((/* implicit */unsigned short) var_4);
                        arr_12 [i_2] [i_1] [i_1 - 2] [i_1] [i_0] = ((/* implicit */signed char) min((arr_3 [i_0 - 3]), (((((/* implicit */_Bool) 874365123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) : (arr_3 [i_0 - 2])))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0]))))) << (((((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0] [i_1 - 2])))) - (13201)))));
                        var_15 = ((/* implicit */unsigned int) var_5);
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */int) (!(((_Bool) (_Bool)1))));
                        var_16 += ((/* implicit */unsigned char) (((+(((/* implicit */int) var_7)))) >= (((/* implicit */int) arr_2 [i_1 - 2]))));
                    }
                    arr_16 [(_Bool)0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_9 [i_0 - 2] [i_0 + 1] [i_1 + 1])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1] [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_25 [i_1] [i_1] [i_2] [i_5] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
                                arr_26 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_8);
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */signed char) ((-874365133) % (((/* implicit */int) var_4))));
}

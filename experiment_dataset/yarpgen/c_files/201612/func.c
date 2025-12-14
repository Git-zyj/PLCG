/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201612
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) - (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((((+(((/* implicit */int) var_7)))) - (((((/* implicit */int) (unsigned short)9840)) / (-1102292299)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(-5305522570056938234LL)))), (min((((unsigned long long int) 578270585)), (((/* implicit */unsigned long long int) ((signed char) arr_8 [i_1] [i_1] [i_3])))))));
                                arr_20 [12] [i_2 + 1] [i_3] [i_4] [i_3] [12] |= ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_1] = min((((/* implicit */int) ((_Bool) (unsigned short)512))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 1])))));
        arr_22 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_4 [i_1 - 1])))) + (((arr_11 [i_1 + 2] [i_1] [i_1 + 1]) / (((/* implicit */int) arr_4 [i_1 + 2]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_2))));
        arr_25 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_0 [i_6]), (arr_0 [i_6]))))));
        arr_26 [i_6] = ((/* implicit */unsigned char) ((unsigned int) -1645633822));
    }
}

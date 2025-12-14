/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27340
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
    var_11 = ((/* implicit */unsigned int) ((signed char) ((max((471601883U), (471601885U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_0 [(unsigned char)12]), (arr_0 [13U])))), (min((3823365413U), (((/* implicit */unsigned int) arr_1 [i_0]))))))), (var_8)));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) min((var_1), (((/* implicit */signed char) arr_2 [i_1 - 2] [i_1 - 2]))))) : (((/* implicit */int) arr_0 [i_1])))))));
            arr_4 [12LL] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)14])) ? (var_7) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((max((5105675877489075629LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [14LL]))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
            var_15 = ((/* implicit */int) var_5);
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_0)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_2]))));
                        arr_19 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */int) var_2);
                        arr_20 [i_5] [i_5] [(short)0] [i_4] &= ((/* implicit */unsigned short) ((((unsigned int) arr_14 [i_2] [i_4 - 2] [i_4])) << ((((+(((/* implicit */int) var_10)))) - (37921)))));
                    }
                } 
            } 
        } 
        arr_21 [(signed char)3] = ((/* implicit */long long int) ((unsigned int) var_2));
        arr_22 [(signed char)7] [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_2] [(short)2] [i_2]);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19136
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
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) % (((/* implicit */int) var_0))));
        arr_4 [i_0] [i_0 - 1] = ((unsigned char) ((long long int) var_1));
        arr_5 [i_0] = arr_1 [i_0] [i_0];
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned char)55))))) ? ((((_Bool)1) ? (var_1) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100)))));
            arr_9 [i_0] [i_1] [8LL] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1 + 1]))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (((-(var_13))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) (unsigned char)19))))))))) ^ (((long long int) ((((/* implicit */long long int) arr_10 [i_2] [(unsigned char)2])) / (var_9))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                {
                    arr_17 [0LL] [i_3] = ((/* implicit */long long int) (_Bool)1);
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_3 + 1] [i_4 - 1]))));
                }
            } 
        } 
        arr_19 [i_2] = (unsigned char)192;
        arr_20 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_16 [11LL] [i_2] [i_2] [i_2]), (arr_11 [i_2]))))));
    }
    var_15 = ((/* implicit */unsigned char) ((var_4) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))))));
    var_16 = ((/* implicit */unsigned char) var_7);
}

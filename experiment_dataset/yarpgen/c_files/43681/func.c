/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43681
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (7243729080817977637LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (((((/* implicit */_Bool) 2040330834U)) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
    var_13 = ((/* implicit */int) ((long long int) min((2040330834U), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */int) (short)-14973)))))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0])))));
        var_14 = ((/* implicit */unsigned char) (+(arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */int) arr_1 [i_1 + 2]);
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((unsigned int) (unsigned char)255)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_12 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) arr_1 [i_0]);
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */short) ((unsigned char) (_Bool)1));
        }
    }
}

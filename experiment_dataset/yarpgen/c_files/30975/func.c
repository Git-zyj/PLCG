/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30975
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
    var_19 = ((/* implicit */unsigned long long int) (+(var_6)));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_0) ? (var_16) : (var_5)))))) ? (max((((((/* implicit */_Bool) var_16)) ? (6141678630270583473ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned short) var_10))))))) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) var_8)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_21 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (43305598779524239LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_15 [i_0] [i_3] &= ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)238))))));
                        }
                        arr_16 [i_2] [i_0] [i_2] [i_2] [i_2] [4LL] = ((/* implicit */long long int) 6141678630270583473ULL);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)80)) * (((/* implicit */int) (unsigned char)189))))))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) arr_17 [i_6] [i_6])) : ((-(6141678630270583473ULL))))))));
                    }
                } 
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) (-(arr_8 [i_0] [i_0] [i_0])));
    }
}

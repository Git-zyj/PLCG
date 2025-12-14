/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25105
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_11 [(unsigned char)5] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) 2147483647);
                        var_15 = ((/* implicit */signed char) (-(min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned short)29625)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))));
                        arr_12 [(unsigned char)12] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) (-(min((((/* implicit */int) ((signed char) var_3))), (((((/* implicit */_Bool) (unsigned char)169)) ? (-2147483647) : (((/* implicit */int) var_4))))))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned char) max((var_3), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)30910)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((7822749893235386974LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)67)))))));
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) <= (((/* implicit */int) (signed char)107)))))));
    }
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    var_19 = var_12;
    var_20 = ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) : (max((var_11), (((/* implicit */long long int) var_13)))))));
}

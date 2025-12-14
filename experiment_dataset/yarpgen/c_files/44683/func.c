/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44683
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
    var_19 = ((/* implicit */short) (signed char)4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_21 = ((/* implicit */int) var_2);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)3805)), (2223814234277560195LL))) == (((/* implicit */long long int) var_16))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)39199)) : (((/* implicit */int) (unsigned short)3808))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((long long int) ((((/* implicit */int) (unsigned short)61730)) << (((((var_5) + (1950402893))) - (15))))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)(-127 - 1));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((int) (_Bool)1)))))));
        arr_16 [9] [i_3] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_13 [i_3] [i_3])))));
    }
}

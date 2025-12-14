/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31198
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
    var_12 ^= var_10;
    var_13 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */signed char) ((2147483647) <= (max((((/* implicit */int) (short)168)), (((arr_1 [i_0] [i_0]) ? (-1717078809) : (((/* implicit */int) (unsigned char)60))))))));
        var_15 = ((/* implicit */int) (unsigned short)3);
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
        var_16 = ((/* implicit */int) var_0);
    }
    for (int i_1 = 3; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (+(max((2593304575U), (((/* implicit */unsigned int) (!((_Bool)0))))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) 2874328022U);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) 742119506U);
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(742119516U)))) ? (((/* implicit */int) arr_7 [i_2 - 3])) : (((/* implicit */int) arr_7 [i_2]))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (+(((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) ((_Bool) arr_4 [i_3] [i_4]))))))));
                var_20 = ((arr_10 [i_3] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))));
                arr_14 [i_4] = ((/* implicit */int) var_0);
            }
        } 
    } 
}

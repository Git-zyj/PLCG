/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2010
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
    var_17 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned short) (+((+((-2147483647 - 1))))))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_4 [(unsigned char)6] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-17))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (-(2147483647)));
        var_19 -= ((/* implicit */unsigned char) arr_6 [(signed char)4]);
    }
    for (short i_2 = 2; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (unsigned char)240);
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (int i_4 = 4; i_4 < 22; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 + 1] [i_4 - 2])) >> ((((((-2147483647 - 1)) - (-2147483624))) + (46)))))) ? ((+(arr_9 [i_5] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_2 - 1] [i_2 + 1]))))));
                        var_22 = ((/* implicit */short) (unsigned char)45);
                        var_23 -= ((/* implicit */signed char) (short)11713);
                        arr_21 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_14);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) (~((-(((/* implicit */int) ((signed char) var_7)))))));
    }
    var_25 = ((/* implicit */short) (-2147483647 - 1));
}

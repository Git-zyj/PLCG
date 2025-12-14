/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234934
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_1 [i_0]))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 - 3])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) max((var_3), (((/* implicit */short) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                {
                    var_15 = ((((/* implicit */int) arr_7 [i_2] [i_1])) <= (((/* implicit */int) arr_7 [i_2] [i_2])));
                    arr_11 [i_3] [i_3] [i_3] [i_2] = arr_3 [i_3];
                    arr_12 [i_3] [i_3 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_8 [i_2] [i_2] [i_1]) || (((/* implicit */_Bool) (unsigned char)7)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((signed char) (unsigned short)49705));
                                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4] [i_6] [i_6])) ? (((/* implicit */int) arr_10 [i_7] [i_5] [i_4])) : (((/* implicit */int) arr_1 [i_5 - 1]))));
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (unsigned char)110)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)205)))) ? (((/* implicit */int) ((arr_5 [i_4] [i_5]) == (((/* implicit */int) (unsigned char)95))))) : (((/* implicit */int) ((short) arr_4 [i_1])))));
                }
            } 
        } 
    }
}

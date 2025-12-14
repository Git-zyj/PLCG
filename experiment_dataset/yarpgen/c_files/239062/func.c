/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239062
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
    var_10 = var_0;
    var_11 = ((/* implicit */unsigned char) 2791419974U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 1503547297U))) == (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0] = arr_3 [i_0] [i_0];
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]);
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_10 [i_0] [i_0]));
                        arr_12 [i_0] [i_2 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2791420017U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_2 + 1]))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 519149465U)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned short)33823)))) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 2] [i_2 - 3]))));
                    }
                } 
            } 
        }
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (-1704421619)))) ? ((~(((/* implicit */int) (short)28174)))) : (((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_18 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((2692117931U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1]))))))));
                    arr_19 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((short) arr_0 [i_4] [i_5 + 1]));
                }
            } 
        } 
    }
}

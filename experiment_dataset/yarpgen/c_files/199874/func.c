/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199874
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((arr_1 [12U]) ^ (var_0)))))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) (unsigned char)249);
                    var_19 = ((/* implicit */signed char) (~(0U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) (unsigned short)20059)))));
                        arr_10 [i_3] [i_2] [i_1] [i_0 + 3] = ((/* implicit */int) (+(((unsigned long long int) (signed char)127))));
                    }
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        var_21 = (+(((/* implicit */int) ((_Bool) var_6))));
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 + 2] [i_4 + 1] [i_4 - 2]))) % (var_10)));
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    {
                        arr_24 [i_4] [i_6] [i_7 + 1] = ((/* implicit */long long int) var_9);
                        arr_25 [i_4] [(unsigned char)0] [i_7] [i_7 + 1] [i_4] [i_5] = ((/* implicit */signed char) arr_12 [i_6]);
                        arr_26 [i_4] [i_5] [i_6] [i_7 + 1] = ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_7 - 1] [i_7] [(_Bool)1] [(_Bool)1] [i_7 + 1] [i_7 - 1]));
                        var_22 = ((/* implicit */short) ((_Bool) arr_5 [(short)0] [i_5 + 2] [i_5 + 1]));
                    }
                } 
            } 
        } 
    }
    var_23 |= ((/* implicit */signed char) var_9);
    var_24 = ((/* implicit */unsigned int) var_4);
    var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))));
}

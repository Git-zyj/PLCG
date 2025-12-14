/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190186
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((var_12) <= (((/* implicit */int) arr_1 [i_0]))));
        var_21 |= ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_5 [(unsigned short)8] [i_1 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)161))));
            var_22 ^= ((/* implicit */long long int) var_7);
        }
        for (unsigned short i_2 = 4; i_2 < 23; i_2 += 2) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_0 [i_0]))) ? (var_1) : (arr_6 [i_0] [i_2])));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_0 [(unsigned short)9])))))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 8; i_3 += 3) 
    {
        arr_11 [i_3 + 2] [i_3] = ((/* implicit */_Bool) var_6);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 3; i_4 < 7; i_4 += 3) 
        {
            arr_16 [i_3] [9U] [(unsigned char)4] = ((/* implicit */short) arr_1 [i_4 + 2]);
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    {
                        arr_21 [i_5] = ((/* implicit */unsigned char) (~(var_6)));
                        arr_22 [i_3] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        }
    }
    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (var_3)));
        arr_26 [i_7] = ((/* implicit */unsigned char) ((((arr_0 [8U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)27503)))))));
        var_25 = ((var_1) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-25))))) && (((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7])))))));
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_15))));
}

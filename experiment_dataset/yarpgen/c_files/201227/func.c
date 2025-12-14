/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201227
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
    var_16 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0 + 2]));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) (_Bool)1);
                        var_19 = ((/* implicit */long long int) ((short) ((signed char) var_3)));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0 - 1]);
            var_21 = ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3758096384U));
            arr_16 [i_4] = ((/* implicit */_Bool) ((short) var_10));
        }
    }
    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                {
                    arr_26 [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                    arr_27 [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) var_14);
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((var_11), (((/* implicit */unsigned long long int) arr_24 [i_5] [i_6])))), (((/* implicit */unsigned long long int) arr_23 [i_5])))))));
                    arr_28 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((short) arr_20 [i_5] [i_6] [i_5]));
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_5] [10LL]);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)27));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_9)) : (min((((/* implicit */unsigned int) var_10)), (min((3758096385U), (((/* implicit */unsigned int) (_Bool)1))))))));
    var_26 = ((/* implicit */unsigned char) ((short) var_5));
}

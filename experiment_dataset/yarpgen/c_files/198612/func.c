/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198612
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) (+(var_7)));
        var_12 = ((/* implicit */signed char) var_7);
        var_13 += ((/* implicit */unsigned short) (((+(var_7))) > ((-(1790833589)))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 ^= ((/* implicit */int) var_5);
        arr_5 [i_1] = ((/* implicit */unsigned char) var_0);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)0))))));
                        var_16 = ((/* implicit */unsigned char) var_10);
                        var_17 -= ((/* implicit */short) (~(-1790833590)));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_18 [(short)6] [i_5] = var_6;
        var_18 -= ((/* implicit */long long int) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [0U] [(_Bool)1] [i_5]))))));
        var_19 = ((/* implicit */unsigned int) 1790833583);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_6);
        arr_23 [(short)1] = ((/* implicit */_Bool) (-(var_5)));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    arr_29 [i_6] [i_7] [i_8] [i_8] = var_9;
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_36 [i_10] [i_9] [i_8] [i_9] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                                var_21 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_10 - 1]))));
                            }
                        } 
                    } 
                    arr_37 [i_8] [i_8] [i_8] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    }
    var_22 = var_8;
    var_23 = ((((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5))))) | ((~(2860957715U))))) & (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)27392))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((14960379397535984579ULL), (((/* implicit */unsigned long long int) (signed char)17))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
    var_25 ^= ((/* implicit */unsigned long long int) var_2);
}

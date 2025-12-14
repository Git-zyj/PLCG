/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38585
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((var_14), (((/* implicit */short) min((((signed char) var_6)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
        var_18 = ((/* implicit */signed char) ((arr_1 [i_0]) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (signed char)-86))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_14)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) var_8));
                        var_20 = ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1 - 1] [i_3 + 2] [i_3 - 1] [i_1]);
                        var_21 = ((/* implicit */int) ((short) arr_8 [i_4] [i_4]));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38038)))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3 - 2])) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3 - 2])))))));
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2420)) ? (((/* implicit */int) (unsigned short)38032)) : (((/* implicit */int) (_Bool)1))));
                        var_25 += (-(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        var_26 |= ((_Bool) ((unsigned int) 3723320410U));
                        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_10 [i_2] [i_2] [i_2]) : (((arr_10 [i_6] [i_2] [5LL]) << (((/* implicit */int) (_Bool)1))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((_Bool)1) ? (((arr_7 [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_2] [i_3 + 2] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) 2333402520U)))))));
                        arr_20 [i_6] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] = ((((/* implicit */unsigned long long int) 629326748U)) == (140187732541440ULL));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (15568270020473383098ULL))) << (((((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned short)35644)))) - (55))))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) || (((/* implicit */_Bool) arr_22 [i_7] [i_7])))))));
        /* LoopNest 3 */
        for (short i_8 = 3; i_8 < 19; i_8 += 1) 
        {
            for (unsigned int i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_24 [i_8] [i_8 + 2] [i_9 - 1]))));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((long long int) var_1)))));
                    }
                } 
            } 
        } 
        var_33 += ((/* implicit */unsigned long long int) (unsigned char)131);
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_7])))))));
    }
    var_35 = (~((-(((/* implicit */int) (_Bool)0)))));
    var_36 |= ((/* implicit */unsigned long long int) ((unsigned short) var_13));
}

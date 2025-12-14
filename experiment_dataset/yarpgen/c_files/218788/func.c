/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218788
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
    var_19 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [18U] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_20 += ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((unsigned char) arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (((~(((1280035976U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_14))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) < (((/* implicit */int) (_Bool)1))))) + (max((((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_4] = (((-(((/* implicit */int) arr_1 [i_1])))) / ((~(((/* implicit */int) var_1)))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_13 [i_4] [i_4] [6LL])) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                        arr_18 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [(unsigned char)10] [(unsigned char)10] [i_3] [i_3]);
                        var_23 -= ((/* implicit */unsigned short) (((~(var_0))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) var_14);
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_24 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_6]))) : (var_2))) <= (((((/* implicit */_Bool) arr_16 [(unsigned short)13] [i_6] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_5] [i_5] [i_5]))))))));
            var_26 = ((/* implicit */short) (((~(1354826081))) | (((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 1]))));
        }
        arr_25 [i_5] = ((/* implicit */_Bool) ((((_Bool) arr_20 [i_5])) ? (((((/* implicit */_Bool) max((arr_15 [i_5] [i_5]), (arr_2 [(_Bool)1])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_15))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_23 [i_5] [(_Bool)1]))))))) : (((/* implicit */int) min((min(((short)1961), (((/* implicit */short) (signed char)-30)))), (((/* implicit */short) (_Bool)1)))))));
    }
}

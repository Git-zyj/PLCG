/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243661
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
    var_15 = ((/* implicit */short) max((var_7), (min((((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_12))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) var_13)) > (var_0)))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) > (((/* implicit */int) var_8)))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_14)))) & (((/* implicit */int) ((((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (max((((/* implicit */long long int) var_5)), (var_14))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) (+(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) >= (((max((var_14), (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))))));
        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) < ((~(var_10))))), (((((/* implicit */int) var_5)) == (((/* implicit */int) var_5))))));
        var_20 *= ((/* implicit */unsigned int) min((((/* implicit */int) max((var_4), (((/* implicit */short) var_2))))), ((-(((/* implicit */int) var_4))))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_21 = ((/* implicit */long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_6)), (var_7))) >> (((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))) - (16311882514084558364ULL)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_12)) & (((/* implicit */int) var_1)))) << (((((((/* implicit */int) var_1)) + (((/* implicit */int) var_11)))) - (19284))))))));
                        var_23 = ((/* implicit */unsigned char) var_2);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (var_13))) != (var_3))))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_6))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) % (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        var_25 = var_7;
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) var_4);
    var_27 &= ((/* implicit */signed char) (+(var_14)));
    var_28 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) < (var_3)))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14)))))));
}

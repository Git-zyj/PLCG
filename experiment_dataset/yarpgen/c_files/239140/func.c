/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239140
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
    var_16 = ((/* implicit */unsigned int) (+(2600763338603558488ULL)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) 1552893332);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2600763338603558517ULL)) ? (((/* implicit */int) arr_1 [(short)7] [i_0 + 1])) : ((~(((/* implicit */int) (unsigned char)30))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (15845980735105993130ULL)));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (min((arr_6 [i_2] [i_2] [i_2] [i_2]), (arr_6 [i_0] [i_0] [i_1] [i_2])))));
                }
            } 
        } 
        var_19 -= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [(signed char)16])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_4 [(unsigned short)4] [(unsigned short)4])));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((arr_10 [i_0 + 1] [i_0] [i_0]), (((/* implicit */long long int) -680970519)))), (((/* implicit */long long int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) (~(2147483647)))) : (min((arr_4 [i_0] [i_3 - 2]), (arr_4 [i_0] [i_3 - 2])))));
                    arr_13 [i_0] [i_3 - 1] [(signed char)19] [i_0] = ((/* implicit */int) var_10);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0 + 1] [i_0] [(unsigned short)17] [i_0 + 1] [i_0 + 1] [i_0] = (((-(min((((/* implicit */long long int) var_0)), (var_8))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_12 [i_0 + 1] [i_5] [3]) : (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [(_Bool)1] [i_5] [i_0] [i_5])) : (((/* implicit */int) arr_21 [i_0 + 1] [i_5] [(signed char)12] [i_7] [i_0]))))) : (arr_6 [i_0] [i_6] [i_6] [(_Bool)1]))));
                            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) % (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            arr_24 [i_0] [i_0] [i_6] [i_7] [i_5 - 1] = ((max((((/* implicit */int) arr_22 [i_0] [i_5 + 1] [i_6])), ((+(-1896955711))))) << ((((~(((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1] [(_Bool)1] [i_7])))) - (18297))));
                            arr_25 [i_5] [i_6 - 2] [i_7] [i_0] = ((/* implicit */unsigned char) (-((-(arr_12 [(unsigned char)16] [(signed char)10] [i_0])))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) (unsigned short)22533);
        }
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-108)), (-680970509)))) : (max((((/* implicit */unsigned int) arr_21 [0U] [12LL] [i_9 + 1] [i_9 + 1] [0U])), (var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65530)) % (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned short)60830)) : (arr_26 [i_9]))))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)3821))))) + (((((/* implicit */_Bool) arr_10 [6ULL] [i_9 + 1] [6ULL])) ? (arr_12 [i_9] [i_9] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9] [i_9]))))))) + (max((((/* implicit */unsigned int) arr_20 [i_9 + 1] [i_9] [i_9] [i_9] [i_9] [i_9 + 1])), (((((/* implicit */_Bool) (unsigned short)22547)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (522846170U))))))))));
    }
    for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_24 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10] [i_10] [19U] [i_10] [i_10] [19U]))) : (arr_31 [i_10]))));
        var_25 = ((/* implicit */unsigned char) (unsigned short)15);
    }
}

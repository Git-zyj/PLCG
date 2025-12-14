/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204452
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
    var_14 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [2] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) min((((short) var_11)), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_5]))) | (arr_0 [i_0]))))))))));
                            var_17 = ((/* implicit */int) ((((arr_4 [i_1 - 1] [i_7] [i_7]) && (((/* implicit */_Bool) var_12)))) ? (((((arr_7 [i_6] [i_5] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_5] [i_6]))))) : (((arr_7 [i_1] [i_1 - 1] [i_1] [i_1 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1 + 1])))))));
                            arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)74)) % (((/* implicit */int) arr_12 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_7]))))) : (((arr_25 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) - (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))));
                        }
                    } 
                } 
            } 
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1 + 1]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-14763))))) : (max((((/* implicit */long long int) arr_5 [i_0])), (arr_0 [i_1 - 1])))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_30 [i_0] [i_8] [i_0] = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_13 [i_0])))) / ((-(((/* implicit */int) (short)14410)))))) / (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (_Bool)1))))));
            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_8])) ? (((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_8] [i_8])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_8])))) : (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_14 [i_0]))))));
            var_20 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_8] [i_8]))))))) | (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-2))))))));
            var_21 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_0] [i_8])))))))) : (((/* implicit */int) min((arr_14 [i_8]), (((/* implicit */unsigned char) var_0)))))));
            arr_31 [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [i_8] [i_8] [i_8] [i_8])))));
        }
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (+((-(((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))))))));
        var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))));
        arr_34 [i_9] = ((/* implicit */signed char) (_Bool)1);
    }
    var_24 = ((/* implicit */unsigned char) var_6);
    var_25 *= ((/* implicit */_Bool) max((min((var_11), (((/* implicit */unsigned char) (signed char)0)))), (var_2)));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) + (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned int) var_9)), ((+(var_10)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222754
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
    var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) <= (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) var_3);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-46)))) & (((/* implicit */int) (short)14785))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_1 [(unsigned short)2] [i_0])) * (((arr_1 [(short)4] [(short)4]) ? (((/* implicit */int) arr_0 [9LL])) : (((/* implicit */int) arr_1 [i_0] [3LL])))))) & (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */short) arr_4 [(_Bool)1]);
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 7; i_2 += 2) /* same iter space */
        {
            arr_12 [i_1] = ((/* implicit */unsigned int) min((arr_6 [i_2]), (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (short)-14785))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14790)) ? (((/* implicit */int) (short)19184)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_2 + 3]))) == (3026575461468117206ULL))))));
                        arr_18 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_11 [i_1]);
                    }
                } 
            } 
            arr_19 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(signed char)2] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (signed char)1))))) ? (((((/* implicit */int) (short)14790)) - (((/* implicit */int) (signed char)4)))) : (((/* implicit */int) arr_5 [i_1])))) : ((((((~(((/* implicit */int) arr_7 [i_1])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_8 [(signed char)1] [(signed char)1])) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (12588928578836836567ULL))) - (1548530788ULL)))))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 7; i_5 += 2) /* same iter space */
        {
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_17 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_1]))));
            arr_23 [i_1] [i_1] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) ((unsigned char) (signed char)1))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [5U] [i_5])) : (((/* implicit */int) var_15))))));
        }
        arr_24 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (_Bool)1);
                        var_21 = ((/* implicit */int) var_3);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_4))));
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - ((+(((/* implicit */int) (short)27703)))))))));
}

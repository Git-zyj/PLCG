/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241086
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_3 [13U] = (-(((unsigned int) arr_2 [i_0 + 1] [2LL])));
        arr_4 [i_0 - 2] = ((/* implicit */int) (~(((arr_1 [i_0 + 2]) | (arr_1 [i_0 + 2])))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_14 [i_0 + 2] [i_0 - 2] [(unsigned char)12] [i_0 + 1] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)8353)))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (arr_2 [i_2] [2ULL]))), (min((((/* implicit */unsigned int) arr_7 [6] [i_1 - 1] [9])), (4294967272U)))))) ? (((/* implicit */int) ((signed char) max((arr_6 [i_2] [i_0]), (((/* implicit */signed char) arr_7 [(short)13] [(short)13] [i_2])))))) : (((/* implicit */int) arr_0 [1LL] [i_2])))))));
                        var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
                        arr_15 [(unsigned short)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1 - 1] [i_2])) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)20))))) ? (609518815) : (((((/* implicit */int) (unsigned char)251)) & (((/* implicit */int) (unsigned char)245))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)65531), (((/* implicit */unsigned short) arr_13 [i_0] [i_1] [(unsigned short)12] [i_2] [(_Bool)1]))))) - (((/* implicit */int) arr_10 [i_2] [i_0]))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) - (24U)))))));
                        var_16 = ((/* implicit */int) (((-(((((/* implicit */_Bool) (unsigned char)7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))))) >> (((/* implicit */int) arr_6 [i_1 - 2] [i_0 - 4]))));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */int) (unsigned short)65515);
    }
    var_18 = ((((/* implicit */_Bool) min(((unsigned short)56753), (((/* implicit */unsigned short) (unsigned char)13))))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) ((2165902881U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4])))));
        var_20 += ((/* implicit */signed char) ((arr_16 [i_4] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_22 = (unsigned char)248;
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned char i_7 = 4; i_7 < 13; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (min((arr_12 [i_5] [i_5]), (((/* implicit */unsigned int) (_Bool)1)))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_7 - 2] [i_7 + 1])))))));
                    var_24 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)5)) << (((((/* implicit */int) var_7)) - (35)))))) >= ((((!(((/* implicit */_Bool) 616178077)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56748)) || (((/* implicit */_Bool) (signed char)-47)))))) : (arr_20 [i_7 - 1] [i_6])))));
                }
            } 
        } 
    }
}

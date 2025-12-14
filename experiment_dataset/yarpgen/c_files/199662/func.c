/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199662
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_2))));
                    var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) var_6)) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1])))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */int) var_2);
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [7LL] [7LL])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) : (var_1)));
        arr_10 [(unsigned char)0] = ((/* implicit */unsigned int) arr_1 [i_3]);
        var_15 = ((/* implicit */unsigned int) arr_2 [i_3]);
        arr_11 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_3])) : (((/* implicit */int) var_0))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) var_11);
            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) var_5))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_1 [i_4]))));
        }
        for (short i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14160)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14178)))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (arr_9 [i_3] [i_3]) : (var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_3])) ? (4035043284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_5])))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_5])) ? (var_9) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [12] [12])) ? (((/* implicit */int) arr_17 [i_3] [7])) : (var_6)))))))))));
            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) 627987602)) ? (((((/* implicit */_Bool) (unsigned short)351)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (short)14173)) : (((/* implicit */int) arr_12 [i_3] [14U])))))) : (627987605)));
        }
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [4LL] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (arr_13 [(signed char)3] [i_6]))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_3] [i_6] [i_3])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_13 [i_6 + 2] [i_3]) : (((/* implicit */int) arr_16 [i_3])))) : (((/* implicit */int) arr_12 [i_3] [i_6 + 2]))));
            var_24 &= ((/* implicit */unsigned short) var_1);
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
    {
        for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_5)))))));
                    arr_29 [i_9] [i_8] [i_7 + 2] = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_7))));
}

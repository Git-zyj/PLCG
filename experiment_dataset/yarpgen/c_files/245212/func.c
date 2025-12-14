/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245212
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) arr_1 [i_0]);
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (-5460114324929223487LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) (unsigned char)55)))) ^ (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) var_3)) + (147))))))));
        var_15 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_3))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18424660)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1]))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) == (arr_3 [i_1] [i_2])));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) arr_0 [i_2] [(unsigned short)11])) : ((+(((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_2]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) && (((/* implicit */_Bool) arr_7 [i_1] [i_1]))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) arr_2 [i_1]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                {
                    arr_18 [9U] [i_4] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) max((arr_15 [i_4]), (arr_15 [i_4])))) : (((/* implicit */int) (signed char)18))));
                    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */int) max(((short)-16384), (((/* implicit */short) (_Bool)1))))) ^ (((/* implicit */int) ((signed char) 5487069539506482032ULL)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((long long int) ((long long int) arr_16 [i_4] [i_4] [i_4] [i_4]))))));
    }
}

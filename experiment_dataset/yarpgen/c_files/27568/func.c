/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27568
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((long long int) ((arr_1 [0LL] [0LL]) >= (((/* implicit */unsigned long long int) arr_3 [i_0])))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (-8012300916324881301LL)))) ? ((~(var_2))) : (((long long int) var_9))));
                arr_4 [i_0] [i_1] = ((/* implicit */int) (+((+(((var_2) | (arr_2 [1LL])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_7 [i_2] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 1278799731)))) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_6] [i_6] = ((/* implicit */short) (_Bool)1);
                                var_13 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-36))))) ? (((var_5) % (((/* implicit */unsigned long long int) 8648729941322034782LL)))) : (((/* implicit */unsigned long long int) (+(-8648729941322034783LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -1823621125397982486LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (+((+(((/* implicit */int) min(((short)-7762), (((/* implicit */short) var_6)))))))));
                                arr_25 [i_3] [i_7] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_7))))));
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_19 [i_3] [i_3] [3LL])))));
                            }
                        } 
                    } 
                    arr_26 [i_3] = ((/* implicit */unsigned char) (((+(3743976531986110835ULL))) >> (((min((arr_3 [i_2]), (max((var_2), (-8648729941322034813LL))))) - (4292138642804106970LL)))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)99)) ? (var_8) : (arr_1 [i_2] [i_2]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -465155479227797620LL)) : (arr_1 [i_2] [6U])))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_2])), (var_6)))) : (((/* implicit */int) var_6))));
        var_18 = ((/* implicit */_Bool) var_2);
    }
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
    {
        var_19 |= ((/* implicit */long long int) (short)32767);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6338777729836363965LL)) && (((/* implicit */_Bool) (short)32767)))))) ^ (8648729941322034782LL))))));
                    arr_35 [i_11] [i_10] [i_9] [i_9] = ((/* implicit */long long int) arr_21 [i_9] [i_9] [(signed char)11] [i_10] [(unsigned char)5] [i_10]);
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_11]))))) ? (max((((/* implicit */unsigned long long int) var_7)), (17538282268914644078ULL))) : (((/* implicit */unsigned long long int) max((1780613388125498205LL), (((/* implicit */long long int) 3440400526U))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                {
                    arr_40 [i_9] [i_9] [8LL] [8LL] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [(_Bool)1] [i_12]))) >= (-8648729941322034816LL)))) == (((/* implicit */int) (signed char)-36)))))));
                    arr_41 [4LL] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) <= ((((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (short)1023))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_3))));
                    arr_42 [i_13] [8LL] [9LL] [i_9] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) 18446744073709551590ULL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) (+(arr_2 [i_14])));
        arr_45 [i_14] [i_14] = -5156570361502358614LL;
    }
}

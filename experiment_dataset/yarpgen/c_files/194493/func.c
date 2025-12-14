/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194493
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [(unsigned char)2] [(unsigned char)2] [i_1] [21ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2276)) ^ (max(((+(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) (short)2271)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_2]))))))));
                    arr_7 [i_2] [i_1] [(signed char)20] [(_Bool)1] = ((/* implicit */signed char) ((((min((arr_1 [i_1]), (((/* implicit */long long int) (unsigned char)0)))) == (((/* implicit */long long int) (+(393216)))))) ? (((/* implicit */int) arr_3 [(unsigned char)2] [18LL] [18LL])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            for (long long int i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21760)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-2276)), (arr_13 [i_3] [i_3])))) ? (((/* implicit */int) (unsigned char)183)) : ((-(((/* implicit */int) (short)-2269)))))) : (((((/* implicit */int) arr_5 [i_4] [i_4 + 2] [i_5 + 1])) * (((/* implicit */int) arr_5 [(unsigned char)9] [i_4 - 3] [i_5 - 3]))))));
                    arr_16 [i_5] [(unsigned char)15] [i_5] [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_5 - 3] [i_5])) : (((/* implicit */int) (unsigned short)8902)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(unsigned char)5] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)18])) ? (var_7) : (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4]))))) ? (((/* implicit */int) max(((unsigned short)7858), (((/* implicit */unsigned short) arr_5 [i_5] [24] [(unsigned short)23]))))) : (((((/* implicit */_Bool) (short)5287)) ? (((/* implicit */int) arr_14 [(short)1] [11LL])) : (var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (var_3)))) ? (((/* implicit */int) max((((/* implicit */short) var_15)), (arr_3 [i_3] [i_3] [6LL])))) : (max((((/* implicit */int) arr_5 [22] [(short)1] [(unsigned short)13])), (var_13)))))));
                    arr_17 [i_5] [i_5] [i_5] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)2269))))) + (((/* implicit */int) arr_11 [(signed char)4])));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) > (var_11)))) * (-692665238)));
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                for (signed char i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2127763553)) ? (((/* implicit */int) arr_11 [i_7])) : (((/* implicit */int) (_Bool)1))))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_7 - 2])) && (arr_19 [i_6 - 1] [i_7 - 2])));
                    }
                } 
            } 
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243961
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), ((short)-1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) != (((var_14) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_2)) - (107))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) -2147483643);
        arr_3 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) -722459288)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))));
    }
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    for (unsigned char i_1 = 3; i_1 < 7; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) arr_0 [i_1 + 2])) & (arr_5 [i_1 - 1])))));
        arr_6 [i_1 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-110))));
        arr_7 [i_1 + 1] = ((/* implicit */unsigned char) min((218034908U), (((/* implicit */unsigned int) (signed char)-118))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_2])) << (((((/* implicit */int) arr_9 [i_2] [i_2])) - (4520)))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((int) var_4)) % (((/* implicit */int) arr_10 [i_2] [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-120)), (10513396636021154650ULL)));
                        arr_21 [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_4] [i_5] [(unsigned char)6] [i_3]))) & (var_9))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-110), ((signed char)119)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5] [i_4] [i_5])) ? (0U) : (arr_17 [i_3] [i_4] [i_5] [i_6])))) ? ((~(((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) max(((signed char)119), ((signed char)-119)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (var_3)))));
                    }
                } 
            } 
        } 
        arr_22 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_14 [i_3]), (arr_14 [i_3]))))));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_7] [i_7] [i_7]);
        var_20 -= ((/* implicit */long long int) max((((/* implicit */int) min((arr_9 [i_7] [i_7]), (((/* implicit */unsigned short) arr_10 [i_7] [i_7]))))), (((((/* implicit */_Bool) arr_10 [i_7] [i_7])) ? (1046315292) : (((/* implicit */int) arr_9 [(unsigned short)16] [i_7]))))));
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */short) (signed char)69)))))))), ((-(arr_17 [i_7] [i_7] [i_7] [i_7])))));
        var_21 = ((/* implicit */short) (-(arr_15 [i_7] [i_7] [(unsigned char)2])));
    }
}

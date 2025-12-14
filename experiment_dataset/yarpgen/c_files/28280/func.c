/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28280
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
    var_16 ^= min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) -1165684559)) : (var_15)))))), (min((((var_4) ^ (var_4))), (((/* implicit */unsigned long long int) var_5)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
        arr_5 [i_0] = ((/* implicit */long long int) ((((unsigned int) (_Bool)1)) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 -= ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_6 [i_0 + 2] [i_1])));
            arr_8 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) >> (((((/* implicit */int) var_7)) - (50919))))) - (((/* implicit */int) var_3))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                var_18 -= ((/* implicit */_Bool) var_4);
                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1905302531)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (short)32767)))) < (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_7)))))));
            }
            var_19 -= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 3334182993U)))));
        }
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_3] [i_4])) * (1955714146303345406ULL))))));
            var_21 ^= ((/* implicit */long long int) ((var_11) >> ((((~(((/* implicit */int) arr_3 [i_4])))) - (38)))));
            arr_19 [i_3] = ((/* implicit */int) (+(((unsigned int) var_13))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */int) arr_9 [i_3])) >> (((((/* implicit */int) var_9)) + (64))))) : (((int) (_Bool)1)))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (short)-31557)) * (((/* implicit */int) (signed char)32))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_26 [8ULL] [i_3] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)147)) / (((((/* implicit */_Bool) (unsigned short)9979)) ? (((/* implicit */int) arr_6 [i_5] [i_3])) : (2060862624)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((signed char) (-(-302315007)))))));
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_7))));
                        }
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned int) ((long long int) arr_21 [i_3] [i_3] [i_3]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))));
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            arr_43 [6ULL] [i_10] [i_12] [i_12] [(_Bool)1] [i_3] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)32767)))))) | (var_0)));
                            arr_44 [(short)1] [20U] [(short)1] [i_10] [i_3] [(short)1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            } 
        }
        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (-(var_2))))))) > (((((/* implicit */int) var_10)) & (((/* implicit */int) var_10))))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
    {
        var_29 &= ((/* implicit */int) (unsigned char)48);
        var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [(signed char)12] [i_13] [i_13] [i_13]))));
    }
    var_31 = ((/* implicit */unsigned int) var_7);
}

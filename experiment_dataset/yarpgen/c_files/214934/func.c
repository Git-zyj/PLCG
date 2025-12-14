/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214934
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((1843853357) + (((/* implicit */int) (_Bool)0))))), (max((1048575LL), (((/* implicit */long long int) (unsigned short)16383))))))) || (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) - (16482765747613273642ULL)))) && (((/* implicit */_Bool) (unsigned short)49141)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] = ((unsigned char) max(((unsigned short)49153), (((/* implicit */unsigned short) (signed char)-1))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 1957626221))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26934)) ? (((((/* implicit */_Bool) -1957626222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16391))) : (9533127153080192327ULL))) : (((/* implicit */unsigned long long int) (~(4095U))))))))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((unsigned short)8191), (((/* implicit */unsigned short) (short)-26934))))) ? (((/* implicit */int) (unsigned short)16385)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) var_10)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((short) 1957626221));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (short)24377)))))));
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [2ULL] [i_5] [i_5] [i_6 + 1] [i_6 + 1]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            for (unsigned short i_8 = 2; i_8 < 7; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    {
                        arr_30 [(signed char)1] [i_7] [i_7] [i_9] = ((/* implicit */int) (+(4294901760ULL)));
                        var_20 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) 3326838206U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-707))) : (var_8)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? ((+(-1957626226))) : (((/* implicit */int) (signed char)82)))))));
        arr_33 [i_10] = ((/* implicit */signed char) arr_31 [i_10]);
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */short) (~(4503530907893760ULL)));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((-206654234209061442LL), (((/* implicit */long long int) 325092036)))), (((/* implicit */long long int) ((((/* implicit */int) (short)21231)) >> (((-1LL) + (8LL))))))))) ? (((((/* implicit */_Bool) (~(1005443339U)))) ? (((/* implicit */int) (unsigned short)38821)) : (((((/* implicit */_Bool) 2324272776U)) ? (((/* implicit */int) (unsigned short)10)) : (16777216))))) : (((/* implicit */int) (signed char)112))));
}

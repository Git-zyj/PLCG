/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44414
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (unsigned char)96)) : (-1181999552)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)106)) || (((/* implicit */_Bool) (unsigned char)103))));
        var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [(signed char)0])) : (arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(-1692825844226870256LL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (arr_0 [(unsigned short)0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) : (arr_0 [i_1])));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((long long int) var_4));
        var_14 -= ((/* implicit */unsigned char) var_8);
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) arr_1 [i_2] [i_2]);
            var_16 -= ((/* implicit */int) ((((((/* implicit */_Bool) 1692825844226870231LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [0]))) : (arr_10 [i_2] [i_2] [i_3]))) & (((/* implicit */long long int) (-(1952084182U))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    var_17 &= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [4U] [i_4] [i_4] [i_4])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) var_3)))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_5 [i_2]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        arr_22 [i_2] [i_3 - 2] [i_4] [i_2] [i_3 - 2] = (signed char)115;
                        var_20 = ((/* implicit */signed char) ((5750254718462005625LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) 7688356489555928951LL)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)65535)))))));
                    }
                }
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(1181999550)))) ? (((((/* implicit */_Bool) (short)16620)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) <= (arr_1 [i_2] [i_2])))))));
            }
            for (short i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 12972364301907843929ULL)) || (((/* implicit */_Bool) 4106342676U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (3290263918U)));
                var_23 = ((/* implicit */signed char) var_5);
                var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)79))))));
            }
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_1))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) -1891489018))));
        }
        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_8 [i_2]))));
            arr_28 [i_2] [i_2] [i_2] = ((long long int) arr_14 [i_9] [i_2] [i_2]);
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [8U] [i_2] [(unsigned char)5] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [10U] [(unsigned short)4]))) : (arr_2 [(signed char)13]))) : (((((/* implicit */_Bool) 2147483647)) ? (-22LL) : (-1028539511928717923LL)))));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) (unsigned char)14)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))));
                    var_30 = ((/* implicit */unsigned int) var_9);
                    var_31 ^= ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 16; i_12 += 1) 
    {
        arr_38 [i_12] = ((/* implicit */int) arr_36 [(_Bool)1] [i_12]);
        var_32 = ((((/* implicit */_Bool) 3853888206U)) ? (7710333760917936054LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))));
        var_33 &= ((/* implicit */_Bool) ((unsigned int) 188624630U));
    }
    var_34 = ((/* implicit */short) max((var_4), (((/* implicit */unsigned long long int) var_2))));
}

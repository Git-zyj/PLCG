/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52989
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [13ULL] [i_0])) + (((/* implicit */int) (unsigned short)62376)))) <= (((/* implicit */int) (unsigned char)82))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */long long int) var_2)) == (473370532120915299LL)))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_2 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_3 - 1] [i_3 - 1]);
                        var_24 = ((/* implicit */unsigned int) arr_2 [i_1] [i_2]);
                        arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_12 [i_2]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((short) arr_20 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 2] [i_6 - 3]));
                            var_26 = ((/* implicit */_Bool) (-(arr_3 [i_1 + 2] [i_1])));
                        }
                    } 
                } 
            } 
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)62376)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) != (((/* implicit */int) arr_22 [i_0] [i_0] [11LL] [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            var_28 = ((((/* implicit */_Bool) ((arr_0 [i_0]) % (((/* implicit */long long int) var_14))))) && (((/* implicit */_Bool) arr_1 [i_7])));
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [4LL] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) arr_3 [i_0] [i_9]);
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_15))));
                            var_32 = ((/* implicit */int) (short)0);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_11 [i_8] [i_7] [i_7] [i_7] [i_0])) == (((((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_0] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20918))) : (arr_0 [(signed char)5])))));
            }
        }
        var_34 = ((/* implicit */unsigned short) -649409454743403310LL);
    }
    for (short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
    {
        var_35 = (-(((arr_32 [i_11] [i_11]) * (((/* implicit */unsigned long long int) ((arr_5 [i_11] [i_11] [i_11] [i_11]) & (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [i_11] [i_11])))))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_11] [6LL] [i_11]), (arr_31 [i_11] [i_11] [i_11] [i_11] [(unsigned char)8] [i_11])))) || (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)24891)))) == (((((/* implicit */int) (unsigned short)2991)) ^ (-1566407115)))))));
        var_37 = ((/* implicit */unsigned long long int) var_14);
        var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11] [i_11]))) : (arr_32 [i_11] [i_11]))) >> (((((((/* implicit */int) arr_22 [i_11] [i_11] [i_11] [i_11] [i_11])) & (((/* implicit */int) arr_22 [i_11] [i_11] [i_11] [i_11] [i_11])))) - (4514)))));
        var_39 *= ((((/* implicit */_Bool) (unsigned char)14)) ? (15121136894457895834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62544))));
    }
    for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) 
    {
        var_40 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) 8637065208377195092LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12 - 1]))) : (10631853313158346648ULL)))));
        arr_39 [i_12] = arr_38 [i_12 - 2] [i_12 - 1];
        var_41 = ((/* implicit */signed char) (short)-14179);
    }
    var_42 = ((/* implicit */unsigned int) var_15);
}

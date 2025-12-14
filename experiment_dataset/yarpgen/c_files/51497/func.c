/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51497
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((var_13), (((/* implicit */short) (unsigned char)192))))) ? (((arr_1 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned char)64), (((/* implicit */unsigned char) var_4))))) + (((/* implicit */int) ((unsigned char) var_16))))))));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)132)), (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)-13565))))))) ? (((/* implicit */int) ((_Bool) (+(var_8))))) : ((+(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned char)64))))), (max((arr_2 [i_1]), (((/* implicit */unsigned int) var_8))))))) ? (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) + (18328802030142344218ULL)))) : (((/* implicit */unsigned int) var_19))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_23 &= ((/* implicit */unsigned char) max((((/* implicit */int) var_13)), (max((var_10), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) (unsigned char)81))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-6906)) < (((/* implicit */int) (short)20389)))))) : (((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */long long int) 2223949957U)) : (9223372036854775797LL)))));
            }
            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) max((((((/* implicit */int) min(((short)-19885), ((short)11923)))) ^ (((int) (signed char)-102)))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned char)81)))))))));
                            var_26 = ((/* implicit */short) var_18);
                            var_27 &= ((/* implicit */signed char) var_16);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    var_28 = ((/* implicit */int) ((((((/* implicit */int) var_16)) < (((/* implicit */int) (short)32767)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)27))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) - (2661728250U)))));
                    var_29 = ((/* implicit */short) var_2);
                }
                var_30 = ((/* implicit */signed char) ((unsigned char) ((short) ((signed char) 9223372036854775798LL))));
            }
            var_31 &= ((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_1]);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 17; i_10 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) 1633239031U))));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-103)) ? (var_2) : (((/* implicit */int) arr_13 [i_1] [i_10 + 2] [i_8]))));
                            var_34 = (+((~(9223372036854775767LL))));
                            var_35 = (!(((/* implicit */_Bool) (unsigned char)110)));
                            var_36 ^= ((/* implicit */unsigned int) (signed char)127);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (var_8)));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_10 - 1] [i_8])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_4 [i_10 - 1] [i_8])));
                        }
                        var_39 = ((/* implicit */unsigned int) ((int) arr_12 [i_1] [i_8] [i_9] [i_10 - 2]));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 3; i_14 < 17; i_14 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [i_8] [i_14 - 1] [i_14] [i_14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((9223372036854775773LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))))));
                    var_41 &= ((/* implicit */unsigned char) arr_11 [i_1] [i_8] [i_13] [i_13]);
                }
                var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_8] [i_8])) <= (((/* implicit */int) arr_24 [i_1] [i_8] [i_13] [i_13] [i_13]))));
                var_43 = ((/* implicit */signed char) var_3);
                var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
            }
            var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_8])) ? (-9223372036854775798LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_1])))))));
        }
        var_46 = ((/* implicit */signed char) 507116043701687513LL);
    }
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
        {
            {
                var_47 |= ((/* implicit */unsigned long long int) min(((short)29000), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_15] [i_16] [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)10))))))))));
                var_48 = ((/* implicit */signed char) arr_3 [i_16]);
            }
        } 
    } 
}

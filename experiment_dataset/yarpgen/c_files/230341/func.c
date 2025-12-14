/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230341
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_13)) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_13)) ? ((-(arr_3 [i_0]))) : (((var_15) >> (((/* implicit */int) var_11)))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) (unsigned char)233))))) : (((((/* implicit */int) (signed char)-65)) % (((/* implicit */int) var_6))))))));
                var_18 = var_15;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)11)))) / (((/* implicit */int) var_10)))) == (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-9348)))) >> (((((/* implicit */int) ((short) var_13))) - (175)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
        var_21 = ((/* implicit */signed char) arr_6 [i_2] [i_2]);
        arr_8 [i_2] = ((unsigned char) ((unsigned char) 11323623561508172742ULL));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_14))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            arr_15 [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_4] [i_4] [i_4]))) ? (((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 1])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
            var_22 ^= ((/* implicit */unsigned long long int) ((short) var_1));
            arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_7 [i_3])));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_4 + 1])) : (((/* implicit */int) arr_13 [i_4 - 1] [i_4 + 2]))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 18446744073709551601ULL))));
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_3])))))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_4] [i_6])) + (2147483647))) << (((((/* implicit */int) (signed char)5)) - (5)))))) ? ((~(((/* implicit */int) arr_26 [i_3] [i_4])))) : (((/* implicit */int) (signed char)-94))));
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 285780930874679206ULL)))));
                            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_6 + 1])) % (((/* implicit */int) var_6))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_3])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) arr_13 [i_4 + 1] [i_3]))));
                        arr_28 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_25 [i_4 + 1] [i_3] [(unsigned char)8] [i_6 + 1])));
                        var_30 = ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(1965435507U))));
                        arr_29 [i_4] [i_4] [15U] [i_5] [i_5] [i_6 - 2] = ((/* implicit */unsigned char) arr_19 [i_6] [i_4] [i_4] [i_4] [i_3]);
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (arr_19 [i_9] [i_9] [i_9] [i_9] [i_3])));
            arr_32 [i_3] [i_9] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (arr_18 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_14) : (var_14))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_10])) ? (((/* implicit */int) arr_33 [i_10])) : (((/* implicit */int) var_2))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_3])))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
        {
            var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((((/* implicit */_Bool) (short)-12799)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11])))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                arr_40 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_12])) & (((/* implicit */int) arr_12 [i_11]))));
                arr_41 [i_3] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (signed char)-72);
            }
            var_35 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_22 [i_3] [i_11] [i_11]))));
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_3] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (2030820558825230979ULL)));
        }
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((~(((((/* implicit */int) (unsigned char)252)) & (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) max(((unsigned char)6), (var_2))))))));
}

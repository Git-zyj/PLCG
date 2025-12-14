/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234802
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [7U] = ((/* implicit */unsigned short) ((short) (+(((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_5))))));
                var_13 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0]))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (short)-1193))));
                var_15 *= ((/* implicit */unsigned char) ((unsigned int) max((min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */short) arr_2 [i_0])))), (((/* implicit */short) var_12)))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) 1598993364044945751ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12)))))))) ^ (((-9223372036854775801LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42073))) : (var_5))))))));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) (!((((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_4] [i_2]))))));
                    var_18 -= ((/* implicit */_Bool) 33553920U);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 8; i_6 += 4) 
            {
                {
                    var_19 = 33553916U;
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */short) (~(var_9)));
                        arr_24 [i_2] = ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)123)))) - (((/* implicit */int) arr_12 [3ULL] [i_2]))));
                        var_22 = ((/* implicit */unsigned short) ((arr_20 [i_8]) << (((var_9) - (1526586078)))));
                    }
                    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
                    {
                        var_23 += ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) (short)-16413)))) ? (((/* implicit */int) min(((short)-29290), (var_0)))) : (((/* implicit */int) (unsigned short)50896))))));
                        var_24 += ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_9 - 2] [i_6] [i_5 - 1] [i_2])) : (((/* implicit */int) (short)-32429))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (33553917U))))) <= (3019629554U)));
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((1184961239536100916LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3018769445U)) == (((((/* implicit */_Bool) arr_20 [i_2])) ? (var_11) : (((/* implicit */unsigned long long int) arr_27 [(signed char)6] [5LL] [i_6] [i_6 - 2] [i_5] [i_2])))))))));
                        var_25 ^= ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33216)) / (((/* implicit */int) (unsigned short)22447))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_6]))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (var_9) : (((/* implicit */int) arr_9 [i_2] [7]))))) ? (((((/* implicit */int) ((unsigned char) (unsigned char)255))) >> (((((/* implicit */_Bool) arr_20 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (short)16384))));
    }
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (unsigned short i_12 = 3; i_12 < 7; i_12 += 1) 
            {
                {
                    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    arr_37 [i_10] [(short)5] [(short)3] = ((/* implicit */unsigned long long int) (((~(var_8))) == (((/* implicit */int) (short)29296))));
                    var_28 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11] [i_11] [i_11] [i_10]))) : (arr_27 [i_12 + 1] [(unsigned char)4] [i_12] [i_12] [i_11] [i_10])))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_20 [i_12]))))) * (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_4)))))));
                    var_29 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_5) % (((/* implicit */unsigned int) var_9))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12 - 3] [i_11] [i_11] [i_10]))) ^ (var_10))))))) <= ((~(((((/* implicit */_Bool) arr_17 [7U])) ? (((/* implicit */unsigned long long int) arr_19 [i_10] [i_10] [i_11] [i_12])) : (var_11)))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((int) var_1));
    }
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            arr_42 [i_14] = ((/* implicit */unsigned long long int) (+(((arr_11 [i_13]) ^ (((/* implicit */unsigned int) var_9))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) var_9)) : (arr_11 [(unsigned char)0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) : (8ULL)));
            var_32 = ((/* implicit */signed char) var_9);
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_33 &= ((/* implicit */short) ((arr_11 [i_13]) + (var_4)));
                        var_34 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_16]))) - (arr_11 [i_13])));
                        var_35 = ((/* implicit */short) 4261413384U);
                        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [5LL] [i_14] [i_14]))))) ? (((((/* implicit */int) var_12)) % (var_8))) : ((~(((/* implicit */int) var_1))))));
                    }
                } 
            } 
            var_37 ^= ((/* implicit */unsigned int) ((arr_5 [i_13] [i_14]) && (((/* implicit */_Bool) ((int) 2902254134U)))));
        }
        var_38 &= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_6)), ((+(8ULL))))), (min((((((/* implicit */_Bool) 33553918U)) ? (arr_15 [(signed char)4] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_13] [i_13]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-18208)) : (((/* implicit */int) var_2)))))))));
    }
}

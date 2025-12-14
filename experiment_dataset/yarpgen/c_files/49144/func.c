/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49144
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) >> (((((/* implicit */int) min((arr_2 [i_0] [i_0]), ((short)-32753)))) + (32774)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) / ((+(3071211832542116297LL)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_17 ^= ((/* implicit */long long int) max((min((var_14), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31709))) : (var_4))) - (18446744073709519884ULL))))))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_1 - 1])) : (((/* implicit */int) (short)-22))))));
            var_19 ^= ((/* implicit */long long int) min((((((((((/* implicit */int) var_11)) + (((/* implicit */int) (short)-1)))) + (2147483647))) >> (((((/* implicit */int) (short)-10)) + (24))))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 1])) == (((/* implicit */int) arr_5 [i_2 - 1] [i_1 + 1])))))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1]));
            arr_10 [i_2 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 266287972352LL))))), (max(((unsigned short)28722), (((/* implicit */unsigned short) (signed char)-95))))))) : (((/* implicit */int) ((unsigned char) ((unsigned int) (short)-25289))))));
        }
        for (short i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            arr_13 [i_3] [i_3 + 1] = ((/* implicit */short) (-(((/* implicit */int) (short)-22))));
            arr_14 [i_1 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6U)) ? (6537923749914605808LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21170)))));
            var_20 ^= ((/* implicit */long long int) (unsigned short)56722);
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_18 [i_1] [i_4] = ((/* implicit */short) max((max((((/* implicit */int) min(((unsigned char)127), (arr_5 [i_1] [i_1])))), ((+(((/* implicit */int) (unsigned short)3)))))), ((-(((((/* implicit */_Bool) (short)17715)) ? (((/* implicit */int) (unsigned short)34883)) : (((/* implicit */int) (short)15584))))))));
            arr_19 [16LL] [i_1] [i_4] = ((/* implicit */long long int) (unsigned char)207);
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            arr_22 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((unsigned short) arr_8 [i_1]))))) ^ (((/* implicit */int) (short)21182))));
            arr_23 [i_5] [i_1] = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) (short)-15578)) && (((/* implicit */_Bool) (short)-22)))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25835))) : (-9223372036854775799LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)20912)))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_21 |= ((/* implicit */unsigned int) ((unsigned char) arr_2 [10LL] [i_6]));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
            {
                arr_30 [i_8 - 1] [i_8 - 1] [8LL] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)32760)) - (((/* implicit */int) var_11))))));
                arr_31 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -7626943376318727506LL)) ? (((/* implicit */int) arr_29 [i_6] [i_6] [i_8])) : (((/* implicit */int) (unsigned char)236))))))));
            }
            var_23 = ((/* implicit */signed char) arr_28 [i_6] [i_6] [i_7] [i_6]);
            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)124))));
            var_25 -= ((/* implicit */signed char) -22LL);
        }
        for (signed char i_9 = 2; i_9 < 19; i_9 += 4) 
        {
            arr_35 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32755))) : (var_14)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((unsigned int) (unsigned short)32785))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((_Bool) (-(var_8))));
                            var_27 = ((/* implicit */short) min((var_27), (((short) (unsigned short)65526))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_6] [i_6]))));
        var_29 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)26635)) ? (2469449790U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21144)))))));
    }
    for (long long int i_13 = 1; i_13 < 9; i_13 += 1) 
    {
        arr_47 [2LL] &= ((/* implicit */unsigned char) (-((-((+(5762965470904619533LL)))))));
        arr_48 [i_13] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)232))));
        var_30 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_24 [i_13 - 1] [i_13 + 1])) + (((/* implicit */int) arr_15 [i_13 - 1])))), ((+(((/* implicit */int) (short)-32746))))));
        arr_49 [i_13] = ((/* implicit */unsigned char) var_11);
    }
    var_31 += ((/* implicit */unsigned int) 70368744177663ULL);
}

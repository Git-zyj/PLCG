/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239886
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0 + 1] = ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)44790))))))) ? (((/* implicit */int) ((unsigned char) var_2))) : ((~((+(var_4))))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-121)) : (-16612733)));
                    var_12 = ((/* implicit */int) var_10);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_13 = ((((/* implicit */_Bool) arr_19 [i_3] [i_4 - 1] [i_6] [i_6] [i_4 - 1] [i_3])) ? (((/* implicit */int) arr_19 [i_4] [i_4 + 2] [i_5] [i_6] [i_6] [i_5])) : (((/* implicit */int) arr_19 [i_3] [i_4 + 3] [i_5] [i_6] [i_6] [i_6])));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 4; i_7 < 19; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) ((signed char) var_9));
                            arr_24 [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) 241328867)) ? (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_22 [i_3] [i_4] [i_5]))));
                            arr_25 [i_3] [i_4] [(signed char)19] [i_5] [i_4] [i_6] [i_7 - 3] = (!(((/* implicit */_Bool) (signed char)123)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (signed char)119))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1499704856)) || (((/* implicit */_Bool) 4611686018427387648LL))))) : (((/* implicit */int) (short)-23186))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4])) ? (arr_17 [i_4 + 1] [(short)9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4 + 1] [i_4 + 1] [i_5])))));
                            var_17 += (signed char)123;
                        }
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            var_18 -= ((/* implicit */unsigned char) ((unsigned long long int) var_8));
                            var_19 *= (!(((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_5])));
                            arr_32 [(_Bool)1] [(_Bool)1] [i_5] [i_6] [i_4] [i_4 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 3])) != (((/* implicit */int) ((var_1) >= (((/* implicit */int) (signed char)127)))))));
                            var_20 = ((/* implicit */int) ((short) 4611686018427387650LL));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) -4611686018427387650LL))));
                        arr_35 [i_3] [i_4] [3] [i_10] |= ((/* implicit */unsigned char) (~(var_1)));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 19; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_22 += ((/* implicit */short) var_2);
                            arr_43 [i_12] [i_11] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_4] [i_4 + 2] [i_11 - 2] [i_12])) ? (((/* implicit */unsigned int) var_6)) : (var_9)));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32743))))))))));
                            arr_44 [(_Bool)1] = ((/* implicit */short) (signed char)106);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_24 -= 4424215941130041685ULL;
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_13] [i_13] [i_11 + 1] [i_5] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_11])) > (-1912914855))))) : (815365500U)));
                            arr_49 [i_3] [i_13] [i_13] [i_3] = ((/* implicit */signed char) arr_10 [i_13] [i_4]);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_54 [i_3] [i_3] [i_5] [12U] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [(signed char)16] [i_11 - 1])) ? (((/* implicit */long long int) var_4)) : ((-(-4611686018427387650LL)))));
                            var_26 = ((/* implicit */unsigned char) var_2);
                            var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_3] [1] [i_5])) ? (4424215941130041685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))))) ? (var_9) : (((/* implicit */unsigned int) arr_50 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_4 + 3] [i_4]))));
                        }
                        var_28 &= ((/* implicit */unsigned char) ((signed char) arr_47 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11]));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32751)) ? (((((/* implicit */_Bool) (signed char)106)) ? (-4611686018427387665LL) : (-4611686018427387666LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))));
                        arr_55 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) var_8);
                        var_30 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 3; i_15 < 19; i_15 += 3) 
                    {
                        arr_59 [i_5] [(unsigned short)5] = ((/* implicit */signed char) ((short) (_Bool)1));
                        var_31 ^= ((/* implicit */long long int) var_0);
                        arr_60 [(unsigned char)17] [(unsigned short)11] [(unsigned short)11] [i_4 + 2] [(unsigned short)11] = ((/* implicit */long long int) (~(2080374784)));
                    }
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (1444649002967011476ULL))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((arr_57 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]) != (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_38 [i_3] [i_3] [i_3] [i_3]), ((signed char)-123)))) ? ((-(((/* implicit */int) (signed char)21)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)0)))))))))))));
                }
            } 
        } 
    } 
}

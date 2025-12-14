/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52843
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
    var_19 += ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [(unsigned char)12] &= ((/* implicit */long long int) var_3);
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_3 [(short)7] [(short)7]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 262143LL))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_8 [i_0] [(short)10] [i_0] [(unsigned char)8] [i_4]))));
                        var_23 &= ((/* implicit */int) ((unsigned int) 3657602659U));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((_Bool) ((((/* implicit */_Bool) ((arr_11 [12LL] [i_2] [0ULL]) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [2] [i_2 - 1] [2] [12LL])))))) ? (-2809446811521921600LL) : (((((/* implicit */long long int) arr_0 [i_6])) + (var_10))))))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) max(((short)448), (((/* implicit */short) arr_12 [i_5])))))))))));
                                var_26 = ((/* implicit */int) arr_4 [(short)10]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3657602653U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((signed char) arr_22 [i_0] [i_2] [i_7] [i_8]));
                                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) 637364637U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (637364650U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 20; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                var_30 += ((/* implicit */_Bool) arr_28 [i_10 - 1] [i_11 - 1] [i_13]);
                                arr_37 [(signed char)10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)35641), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 31598849))))))))) % (((((arr_32 [i_10 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9]))))) + (((/* implicit */unsigned long long int) max((637364654U), (arr_25 [i_9]))))))));
                            }
                        } 
                    } 
                } 
                arr_38 [i_9] [(_Bool)1] [i_9] = ((/* implicit */unsigned long long int) -2147483633);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 1) 
    {
        for (unsigned short i_15 = 1; i_15 < 11; i_15 += 1) 
        {
            {
                var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23758)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_14 + 3] [i_15 - 1] [i_15 - 1]))))) : ((~(((3575480188U) | (((/* implicit */unsigned int) var_5))))))));
                /* LoopSeq 3 */
                for (long long int i_16 = 3; i_16 < 10; i_16 += 1) /* same iter space */
                {
                    arr_48 [(_Bool)1] [i_14 - 1] [i_16 - 2] &= ((/* implicit */int) ((((7802724529906623203ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_15 - 1]))))) <= (((/* implicit */unsigned long long int) (~(1851537758))))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 11; i_17 += 1) 
                    {
                        for (int i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            {
                                var_32 -= ((/* implicit */long long int) var_9);
                                var_33 -= ((/* implicit */int) (+((~(max((((/* implicit */long long int) var_16)), (arr_16 [i_15] [i_17])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_19 = 3; i_19 < 10; i_19 += 1) /* same iter space */
                {
                    arr_57 [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (120) : (((/* implicit */int) arr_35 [i_14] [i_14] [i_15] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_16 [i_14] [(short)4])) ? (4049182726U) : (arr_13 [i_19] [i_14])))));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) 171914306))));
                }
                for (unsigned short i_20 = 4; i_20 < 11; i_20 += 1) 
                {
                    arr_61 [(signed char)2] [10ULL] |= ((/* implicit */int) var_11);
                    var_35 ^= ((/* implicit */unsigned char) ((unsigned long long int) var_17));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_13 [i_14] [(signed char)14]))));
                    arr_62 [i_20] [(short)10] [(unsigned short)6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-8758313118446579491LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 174672827)) ? (((/* implicit */int) arr_21 [i_20 - 2] [i_15] [i_15] [i_15] [i_14 + 2] [i_14 + 2])) : (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_32 [i_20 + 1]) < (arr_32 [i_20 - 4]))))) : ((+(max((8758313118446579490LL), (((/* implicit */long long int) -424778233))))))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((long long int) var_9)))));
                }
            }
        } 
    } 
    var_38 ^= ((/* implicit */unsigned char) ((var_5) * (((/* implicit */int) ((31598863) <= (((/* implicit */int) (unsigned short)3443)))))));
}

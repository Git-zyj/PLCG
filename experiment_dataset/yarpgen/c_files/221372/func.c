/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221372
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    var_12 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2897686341U)) ? ((((!(((/* implicit */_Bool) 4906438538223478056ULL)))) ? (1397280955U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)16540), (((/* implicit */short) var_3)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_15 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) % (9223372036854775792LL)));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_16 *= ((/* implicit */short) (_Bool)1);
                            var_17 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_10)))));
                            var_18 = ((/* implicit */unsigned char) (!(arr_1 [(unsigned char)16] [i_3])));
                        }
                        for (unsigned char i_5 = 3; i_5 < 22; i_5 += 4) 
                        {
                            var_19 = var_7;
                            arr_13 [i_2] [i_0] [i_1 + 1] [i_2 - 2] [i_3] [i_0] = ((/* implicit */short) (signed char)-2);
                            var_20 |= ((/* implicit */short) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775772LL))))), (min((300959155057818799LL), (((/* implicit */long long int) arr_5 [10ULL] [i_0] [i_0])))))) >> (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_11 [i_2 - 2] [i_0])))))));
                        }
                    }
                    arr_14 [(_Bool)1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 + 1] [i_0])), (min((0U), (1998621703U)))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */_Bool) 9223372036854775796LL);
                                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 224228188U)) && ((_Bool)1)))), (((((/* implicit */int) var_3)) / (((/* implicit */int) var_9))))));
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 14240566543989813569ULL)) && (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_6 - 1] [i_2])))) ? (((((/* implicit */unsigned long long int) var_5)) / (2039722459473389527ULL))) : (((((/* implicit */_Bool) 8734522984579224789ULL)) ? (1949127911103072476ULL) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1 + 2] [i_0] [i_6 + 1] [i_2]))))));
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1 + 2] [i_6 - 2]))) == (268435328U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 1; i_8 < 23; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) min((((var_10) << (((((/* implicit */int) var_6)) - (58))))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_17 [i_8 - 1] [(_Bool)1] [i_9])))))));
                        arr_29 [i_0] [i_9] [(signed char)18] = ((/* implicit */unsigned int) (signed char)101);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((arr_9 [i_11] [i_11] [i_11]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_11] [i_11])) ? (arr_11 [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
        var_26 = ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)148)), (arr_4 [i_11] [i_11] [i_11] [i_11])))) ? (((11547384407361589296ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8520))))) : (var_4));
        arr_32 [i_11] = ((/* implicit */signed char) ((((arr_25 [6LL] [i_11] [(unsigned short)10] [i_11] [(signed char)9]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) max((3660777406U), (((/* implicit */unsigned int) (unsigned short)0))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5588471921873967836ULL)) ? (((/* implicit */int) arr_4 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_2)))))));
    }
    var_29 = ((/* implicit */long long int) 11547384407361589296ULL);
    var_30 = ((/* implicit */_Bool) var_2);
}

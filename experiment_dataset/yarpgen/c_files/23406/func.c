/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23406
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
    var_12 -= ((/* implicit */signed char) var_11);
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1476286423), (((/* implicit */int) (short)-29321))))) ? ((+(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((short) var_0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_14 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((var_11) >= (((/* implicit */int) var_2)))) ? ((~(var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(signed char)2]))))))))));
            arr_4 [3LL] [3LL] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_16 = ((/* implicit */long long int) (+(arr_1 [i_0])));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0 + 1] [i_2 - 2] [i_2 - 1]) : (arr_6 [i_0 - 1] [i_2 + 1] [i_2 + 1])));
            arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))));
        }
    }
    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_4 = 4; i_4 < 9; i_4 += 1) 
        {
            var_18 = 8736398854218307396ULL;
            /* LoopNest 3 */
            for (signed char i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (int i_7 = 3; i_7 < 8; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_8 [i_6])))) : (max((((/* implicit */int) (unsigned char)211)), (1989387563))))) <= (((((/* implicit */_Bool) min((arr_3 [i_6]), (((/* implicit */unsigned long long int) arr_13 [i_3]))))) ? (((((/* implicit */int) (unsigned short)47195)) << (((arr_14 [i_3 - 2] [i_4 - 2] [i_7 + 1]) - (3922338432U))))) : (((/* implicit */int) (!(var_2))))))));
                            var_20 |= ((/* implicit */_Bool) max((((long long int) var_4)), (max((max((arr_20 [i_4 - 3]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40880)) ? (((/* implicit */int) arr_10 [i_4] [i_6] [(_Bool)1])) : (((/* implicit */int) arr_2 [i_6])))))))));
                            arr_21 [i_3 - 1] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 248037933292493794LL)) && (((/* implicit */_Bool) arr_0 [i_4 - 4] [i_7 + 3]))))));
                            arr_22 [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-99))));
                        }
                    } 
                } 
            } 
            arr_23 [i_4] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)103))), (min((arr_1 [i_4]), (arr_9 [i_4] [i_3]))))), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)-23135)))))))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            arr_26 [i_8] [i_3] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (arr_17 [i_8] [i_8 - 1] [i_8] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_3)))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (long long int i_10 = 2; i_10 < 9; i_10 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) arr_9 [i_8] [i_8]);
                        arr_32 [i_10] [i_8] [i_8] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_20 [(unsigned short)6])) - (arr_17 [i_3] [i_9] [i_9] [i_10] [10] [i_10 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_27 [i_3] [i_9] [9ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) > (((/* implicit */int) arr_25 [i_3 - 2] [i_9] [i_10]))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 9; i_11 += 4) 
        {
            var_22 = ((/* implicit */_Bool) arr_15 [i_3 - 1]);
            var_23 &= ((/* implicit */int) var_0);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_7))));
        }
        for (int i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)27)), (var_8)))) ? ((~(((/* implicit */int) (unsigned char)214)))) : (((((/* implicit */_Bool) (unsigned short)62732)) ? (((/* implicit */int) arr_28 [i_3] [i_3] [i_12] [i_12 - 1])) : (((/* implicit */int) arr_28 [i_3 - 1] [i_12] [i_12 - 1] [i_12 - 1])))))))));
            /* LoopNest 2 */
            for (long long int i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_28 [i_3 + 1] [i_3 - 2] [i_13 + 1] [i_13 + 1])), (var_8)))) ? ((-((~(((/* implicit */int) (signed char)120)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (var_4)))))))));
                        var_27 = ((/* implicit */long long int) ((((-11) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)135)) ? (arr_44 [i_3 - 2] [i_3 - 2] [i_13 + 1] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8306))))) - (2308232245373298185LL)))));
                    }
                } 
            } 
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5548)) ? (((/* implicit */int) (unsigned short)40850)) : (-2147483635)))) && (((/* implicit */_Bool) min((arr_0 [i_3 + 1] [i_3 + 1]), (arr_0 [i_3 + 1] [i_3 - 1])))));
        }
        var_29 = ((/* implicit */unsigned short) 4961122611183604365ULL);
        arr_45 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (9060602290640618507ULL) : (min((((unsigned long long int) (unsigned short)1511)), (((/* implicit */unsigned long long int) var_4))))));
        arr_46 [i_3 + 1] = ((/* implicit */long long int) min(((~(((unsigned int) arr_44 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (short)-19931)) : (((/* implicit */int) (short)-32762)))), (1989387563))))));
    }
}

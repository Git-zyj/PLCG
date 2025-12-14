/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46543
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))) == (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                var_11 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 4793473638034243341ULL))))) / (((/* implicit */int) arr_5 [i_2]))));
        var_12 = ((/* implicit */unsigned long long int) -20896657);
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_13 -= ((/* implicit */unsigned char) arr_1 [i_3]);
        var_14 = ((/* implicit */_Bool) var_4);
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_6 [i_3]))));
    }
    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4])) ? ((-(var_8))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_9)))) + (((/* implicit */int) (short)24736)))))));
        arr_17 [i_4] [i_4 + 3] = ((/* implicit */unsigned int) 1720946965);
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_3)))));
    }
    for (signed char i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(-20896645))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) arr_28 [i_5] [(signed char)3] [i_8] [i_8] [i_9] [i_8]);
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), ((-2147483647 - 1))))) ? (((/* implicit */int) arr_20 [i_6] [(unsigned char)20] [i_6])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9] [i_8] [i_7] [i_6] [i_5 + 2] [i_5])) || (((/* implicit */_Bool) arr_23 [i_8] [i_5] [i_5] [i_5]))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_30 [i_5 + 1] [i_5] [i_6 - 2]) - (arr_30 [i_5 + 3] [(unsigned short)11] [i_6 - 1])))) ? (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(unsigned char)4] [i_5] [i_5]))) * (var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_25 [12] [i_10 - 1])) > ((-(5ULL))))))));
                arr_32 [i_6] [i_6] [i_6] = ((/* implicit */signed char) max((((/* implicit */short) ((signed char) (short)-20373))), (arr_27 [i_5] [i_5] [20])));
                arr_33 [i_6] [i_6 - 2] [i_10] = ((/* implicit */int) ((unsigned char) (~(1720946965))));
            }
            for (unsigned char i_11 = 2; i_11 < 17; i_11 += 2) 
            {
                arr_38 [i_6] [i_11 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5 + 3] [i_5 + 3] [i_6 - 2] [i_11])) ? (max((-1540557791), (0))) : (((/* implicit */int) arr_18 [i_5 + 2] [i_5 + 2]))));
                arr_39 [i_6] [i_6] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) -1540557774)) ? (arr_26 [i_5] [i_6] [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5] [i_6] [(unsigned char)12] [i_11]))))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_5 + 2] [i_6 + 1])))))));
                var_22 = ((/* implicit */unsigned char) (unsigned short)0);
            }
            for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 3) 
            {
                arr_43 [i_6] [i_6 - 2] [i_12] [i_12] = ((/* implicit */long long int) 2147483647);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_37 [i_6] [i_6])), (var_8))))))) >> ((((-(max((-4438252501436805650LL), (((/* implicit */long long int) (unsigned char)224)))))) + (254LL)))));
            }
        }
        arr_44 [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [14]))) | (var_2)));
        /* LoopNest 3 */
        for (unsigned char i_13 = 2; i_13 < 20; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    {
                        arr_52 [i_5] [i_5] [i_5 - 1] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((549755813887ULL) >= (((/* implicit */unsigned long long int) 1756665351))))), (((arr_14 [i_5 - 1] [i_13 - 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1777)))))));
                        arr_53 [i_13] [i_13] = arr_20 [i_13] [i_13] [i_13];
                    }
                } 
            } 
        } 
    }
}

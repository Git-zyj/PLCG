/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207491
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
    var_15 ^= ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_3))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32750)) / (((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((long long int) 4221004675U)))) < (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) % (var_9)))) ? (((int) var_6)) : (var_1)))));
    var_17 = ((/* implicit */short) ((_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) (signed char)103)), (var_7)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1] [i_1 - 2])))) | (var_2)));
                    arr_9 [0ULL] [i_1] [i_1 + 1] [0ULL] |= ((/* implicit */unsigned long long int) min((max((arr_7 [10] [10]), (arr_7 [8U] [8U]))), (((/* implicit */int) var_6))));
                    arr_10 [i_1] [i_0] [i_1] [i_2] = ((((/* implicit */int) arr_0 [(short)5] [i_1])) >= (((/* implicit */int) ((arr_1 [i_1 - 2] [i_1 - 1]) || (((/* implicit */_Bool) (signed char)-81))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((max((((/* implicit */int) (signed char)-81)), (arr_8 [i_5] [i_5]))) > (((/* implicit */int) ((signed char) arr_4 [i_3] [i_3]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)511)) != (((/* implicit */int) (short)12630)))))));
                                var_21 = ((/* implicit */signed char) min((max((max((((/* implicit */unsigned long long int) 536870911)), (arr_18 [i_3] [i_3]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_3] [i_3]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_1))))))));
                                var_22 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_19 [i_7 - 2] [i_7] [i_6]) == (((/* implicit */unsigned long long int) arr_7 [i_4 - 2] [i_7]))))), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23134)) ? (-220271978) : (((/* implicit */int) (signed char)56)))))));
                                var_23 ^= ((/* implicit */unsigned int) ((min((max((9223372035781033984ULL), (((/* implicit */unsigned long long int) (unsigned char)3)))), (((/* implicit */unsigned long long int) 2147483647)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6]))) % (arr_15 [i_5 + 1]))))))));
                                var_24 += ((/* implicit */signed char) min((min(((-(((/* implicit */int) (unsigned short)0)))), (-536870930))), ((+((-(((/* implicit */int) (signed char)2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */int) ((((unsigned long long int) 4590188521275747066ULL)) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) == (arr_22 [i_3] [i_3] [1LL] [10U] [i_3] [i_3])))))));
        arr_25 [i_3] [i_3] = ((/* implicit */int) arr_14 [i_3]);
        arr_26 [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((int) (-2147483647 - 1))));
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        var_26 *= ((/* implicit */unsigned long long int) (!(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) >= (14538929158038104260ULL))), (((((/* implicit */int) arr_28 [(signed char)0])) > (((/* implicit */int) (_Bool)1))))))));
        var_27 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_27 [i_8]))))));
        var_28 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 14538929158038104252ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 4; i_9 < 23; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            {
                                arr_38 [i_12] [i_12] [(signed char)4] [(unsigned short)0] [8U] &= min((((unsigned long long int) max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_27 [i_10])))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [14] [i_11]))) + (var_3))) < (arr_36 [(_Bool)1] [(unsigned short)20] [i_11] [i_10] [i_9 - 4] [(unsigned short)20] [(_Bool)1])))));
                                var_29 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_10)))))))));
                                arr_39 [i_8] = ((/* implicit */unsigned short) min((arr_27 [i_11]), (((/* implicit */unsigned long long int) (signed char)-40))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((min((3907814915671447364ULL), (arr_33 [i_8] [i_13] [i_8]))) ^ (((((/* implicit */_Bool) arr_41 [i_13] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : (arr_42 [i_9 - 2] [i_9 - 4] [i_9]))))))));
                                var_31 ^= ((/* implicit */int) ((unsigned int) (!(var_10))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) var_0))))) == (((((/* implicit */unsigned long long int) -536870920)) % (6842493547775747808ULL)))))) == (var_1)));
                }
            } 
        } 
    }
    for (int i_15 = 2; i_15 < 18; i_15 += 3) 
    {
        arr_48 [i_15] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 1056964608U)))))) & (((/* implicit */int) min((((var_7) == (((/* implicit */unsigned int) arr_8 [i_15] [i_15])))), (((((/* implicit */int) (unsigned short)37508)) > (979056741))))))));
        /* LoopNest 2 */
        for (unsigned char i_16 = 2; i_16 < 18; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                {
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((((/* implicit */int) ((short) arr_46 [i_15]))) >> ((((+(-2128078439))) + (2128078463))))) != (((/* implicit */int) arr_0 [i_15] [i_15])))))));
                    var_34 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((short) arr_3 [i_15]))) ? (min((((/* implicit */unsigned long long int) var_6)), (3167700464159410211ULL))) : ((~(11604250525933803822ULL))))));
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38499
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
    var_15 -= ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [4LL] [i_0 - 2] = ((/* implicit */short) ((((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 - 1])) + (57))) - (29))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (13920313374886005862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))) ? ((+(var_13))) : ((~(var_11)))));
        var_17 = ((/* implicit */unsigned char) var_11);
    }
    for (int i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_17 [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) var_12));
                            var_18 = ((((/* implicit */int) (unsigned char)160)) << (((((((/* implicit */_Bool) var_9)) ? (9015569043116313795LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) - (9015569043116313777LL))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) arr_13 [i_4] [i_2] [i_3]);
                            arr_21 [i_2] [i_3] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                            arr_22 [i_3] [i_3 - 1] [i_3 - 1] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_3 - 1]))));
                            arr_23 [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_19 [i_3 - 1] [(signed char)10] [i_3 - 1] [i_3 - 1] [i_3]) + (var_9)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36223)) > (((/* implicit */int) arr_1 [2]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_3))))) : (var_7))))))));
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))) - (arr_8 [i_2] [i_3 - 1] [i_3 - 1]))) * (min(((-(var_13))), (((/* implicit */unsigned long long int) ((var_5) / (arr_6 [i_1 - 2]))))))));
                        }
                        var_23 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9061))) + (var_8)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) (short)-47)))) ? (3301485646U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4054505755926001695LL)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (short)24181))))))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 13; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_25 *= ((/* implicit */unsigned long long int) 4349976558733983575LL);
            var_26 ^= ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_9] [i_8] [i_9] [i_9] [i_9]))) - (arr_19 [i_8] [i_9] [i_9] [i_9] [0ULL])))));
        }
        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 1) 
        {
            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_13)))) ? ((+(((/* implicit */int) (unsigned short)9805)))) : (((((/* implicit */_Bool) -1090262336)) ? (((/* implicit */int) (unsigned short)50435)) : (((/* implicit */int) (short)40))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (unsigned char i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            arr_42 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
                            arr_43 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */short) ((unsigned long long int) arr_33 [i_10] [i_11] [i_13]));
                            arr_44 [i_8 + 1] [(_Bool)1] [i_10] [i_10] [(short)5] [i_13] = ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_8] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_8] [11ULL] [i_10] [i_12] [i_13]))))) : (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            arr_47 [i_8] [(short)10] [i_8] = ((/* implicit */unsigned char) ((2631508974U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)7098)))));
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        {
                            var_28 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-90))));
                            arr_54 [i_15] = ((/* implicit */signed char) ((var_10) == (var_10)));
                        }
                    } 
                } 
            } 
        }
        arr_55 [(unsigned short)13] [i_8] = ((/* implicit */unsigned int) (unsigned short)24845);
    }
}

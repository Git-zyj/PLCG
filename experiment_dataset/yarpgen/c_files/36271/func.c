/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36271
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
    var_10 = ((/* implicit */signed char) max(((short)8484), (((/* implicit */short) var_1))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_11 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) var_6)))))));
        var_12 ^= ((/* implicit */int) arr_1 [i_0 - 1]);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5317751567242269408LL)))))));
        arr_2 [i_0 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (short)15303)) >= (((/* implicit */int) arr_1 [9LL]))))) : (var_8))) << ((((-(754928712977985920LL))) + (754928712977985938LL)))));
        var_14 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (max((18446744073709551603ULL), (((/* implicit */unsigned long long int) (unsigned short)37641)))))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_7 [(short)0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -754928712977985921LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) max((arr_1 [i_1 - 1]), (((/* implicit */unsigned short) var_7))))))) << (((/* implicit */int) ((arr_4 [i_1]) || (((/* implicit */_Bool) (-(arr_0 [i_1])))))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_12 [10ULL] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))));
            var_15 = ((/* implicit */signed char) var_9);
            var_16 = ((/* implicit */long long int) 17137045755621608304ULL);
            var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_8 [i_1 - 2] [i_2]) <= (arr_8 [i_1 - 2] [i_2])))), (((((/* implicit */int) (short)-28626)) ^ (((/* implicit */int) (signed char)17))))));
        }
        for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned short) ((((((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_1 - 1])))) * (((/* implicit */int) var_2)))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6144))) < (6628354670905204358LL))))));
            arr_16 [(_Bool)1] |= max((((((/* implicit */_Bool) max((var_6), (((/* implicit */short) var_0))))) ? (((((/* implicit */_Bool) -6072448729842049853LL)) ? (arr_14 [0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [18LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))))), (((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) (short)12520)))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_19 += ((/* implicit */short) (~(max((-6072448729842049853LL), (-1450635068454190364LL)))));
                        /* LoopSeq 2 */
                        for (short i_6 = 4; i_6 < 17; i_6 += 2) 
                        {
                            var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6 - 2])) ? (arr_23 [i_6 - 4] [i_6] [i_6 - 3] [17] [i_6 - 2] [i_6 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) <= ((-(6628354670905204331LL)))));
                            arr_24 [i_3] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_13 [i_3] [i_1 + 1]), (((/* implicit */int) var_0))))) > (arr_21 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3])));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_5 [i_1 - 1] [i_1 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_21 [i_3] [19LL] [i_4] [i_1] [19LL] [(short)3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_3])) || (((/* implicit */_Bool) var_5)))))) : (((long long int) var_2))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5271289715601553308LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (5271289715601553300LL)));
                        }
                        arr_27 [i_3] [i_3 + 1] [i_5] = ((/* implicit */signed char) (((~(max((var_8), (((/* implicit */int) var_9)))))) == (((/* implicit */int) max((max((((/* implicit */short) var_1)), (var_3))), (((/* implicit */short) ((((/* implicit */int) (short)26549)) < (((/* implicit */int) arr_10 [i_3] [i_3]))))))))));
                    }
                } 
            } 
            arr_28 [i_3 + 1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
            arr_29 [i_3] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_32 [i_8] = ((/* implicit */long long int) (-(arr_31 [i_1 - 1])));
            var_24 = ((/* implicit */short) (-(arr_8 [i_1 + 1] [i_8])));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                arr_37 [i_1 - 1] [i_8] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_8] [i_9]))))) ? ((-(arr_31 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-15))))));
                var_25 = ((/* implicit */int) 5271289715601553307LL);
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned short) var_2)))));
            }
        }
    }
    for (long long int i_10 = 2; i_10 < 19; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) arr_21 [i_10] [i_10] [13] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */int) arr_36 [i_10])) : (arr_17 [i_10 + 1] [i_10] [i_10])))))));
        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [2ULL])) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL))))));
        arr_41 [i_10] [i_10] = (~(((long long int) max((1109998338491981187ULL), (((/* implicit */unsigned long long int) arr_0 [i_10]))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197373
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
    var_19 = ((/* implicit */long long int) (~(-2147483621)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 3]))));
                var_20 = var_7;
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_3] [i_4] [4LL] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_2] [i_3 + 1] [i_4]))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [15LL] [i_4 - 1] [i_4 - 1]))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_13 [i_6] [i_3] [i_2])))) ? (arr_17 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */long long int) 3289078250U))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((long long int) 851419488U)))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1153765680)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_8])) < (((/* implicit */int) var_5)))))));
                                var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_23 [i_8] |= ((/* implicit */long long int) ((((_Bool) 84303774U)) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2182920065229869913ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_11))));
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        arr_27 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9])) ? (var_0) : (arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_12 [i_9] [i_9] [i_9])))) ? (-5586500946578099469LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [11ULL] [11ULL] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9]))))))) : (((/* implicit */long long int) max((arr_1 [i_9]), (((/* implicit */int) var_16))))));
        arr_28 [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) 4210663522U)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_4))))))) + (max((max((((/* implicit */long long int) var_11)), (arr_12 [i_9] [i_9] [i_9]))), (((/* implicit */long long int) ((short) var_9)))))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(arr_8 [i_9]))))));
        var_29 += ((/* implicit */short) ((unsigned long long int) max((((((/* implicit */_Bool) arr_11 [(short)11] [(short)11])) ? (((/* implicit */unsigned long long int) 1941295347U)) : (arr_11 [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_9] [i_9] [i_9]))))))));
    }
    var_30 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 23; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            {
                arr_33 [i_10] [i_10] = ((/* implicit */signed char) (~((~(((var_9) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (16263824008479681703ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10]))) : (2U)))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)15)))), (((/* implicit */int) arr_29 [i_10]))))) : (min((max((((/* implicit */long long int) 1180125259U)), (var_1))), (((/* implicit */long long int) (unsigned short)45292))))));
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    var_32 = ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */_Bool) arr_36 [i_12] [i_10 - 1])) ? (((/* implicit */int) arr_32 [i_10])) : (((/* implicit */int) (unsigned char)166)))))));
                    var_33 = ((/* implicit */signed char) (-(324426979)));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_10] [i_11] [i_10] [i_10 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-5586500946578099465LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_10 - 1] [i_11] [i_10 - 1]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_35 = max((var_4), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_12] [i_11] [i_10])) ? (((/* implicit */int) (short)-4335)) : (((/* implicit */int) arr_35 [i_10] [i_11] [i_12] [i_10]))))) ? (((int) arr_29 [i_10])) : ((~(1995466517)))));
                            arr_42 [(_Bool)1] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_13 - 1] [i_13 - 1] [i_10 - 1] [i_13]))));
                            var_37 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((2182920065229869922ULL), (((/* implicit */unsigned long long int) -1873196896))))))))));
                        }
                        var_38 += ((/* implicit */_Bool) var_6);
                        var_39 = ((/* implicit */unsigned int) var_3);
                    }
                }
                /* vectorizable */
                for (short i_15 = 1; i_15 < 24; i_15 += 2) 
                {
                    var_40 = ((/* implicit */long long int) ((unsigned short) -973583920));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        for (long long int i_17 = 1; i_17 < 23; i_17 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */_Bool) 16263824008479681727ULL);
                                var_42 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) -659245457)) ? (((/* implicit */int) var_5)) : (arr_53 [i_10] [i_11] [i_10] [i_10] [i_17 + 1]))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 10291148428252003799ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (short i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) (short)-7991);
                                var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [12ULL] [i_18]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (3772292771U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_51 [i_11] [24ULL])))))));
                        var_47 = ((_Bool) 18318289896331332726ULL);
                        arr_61 [i_10] [(_Bool)1] [i_15 + 1] [i_15] [i_10] = (+(arr_36 [i_10 + 1] [i_10 + 1]));
                    }
                }
                /* vectorizable */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_64 [i_10] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_9))))));
                    var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_63 [i_10 - 1] [i_21] [i_21]))));
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((-2147483647) - (-2147483644))) + (19)))));
                }
                var_50 = ((/* implicit */int) (((~(((2074248179U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_14)), (arr_48 [(unsigned short)6] [i_11] [i_10])))))));
            }
        } 
    } 
}

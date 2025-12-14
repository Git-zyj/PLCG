/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193500
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 - 1] [i_0] [i_2] [i_3] = ((/* implicit */int) arr_7 [(short)5] [i_1] [(unsigned char)9] [i_0 - 3]);
                            var_20 = 148039964209930768LL;
                            arr_14 [i_3] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [i_0]);
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_12 [(unsigned char)7] [12U] [i_2] [i_2] [13]), (arr_12 [(_Bool)1] [i_2] [i_1] [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) -2051451798);
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((arr_18 [i_0] [i_1] [i_4] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-803))) : (5348689854344652158ULL))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)38246)), (5196013708488625201LL)));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_8 = 2; i_8 < 12; i_8 += 2) 
                            {
                                arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5348689854344652158ULL)) ? (839907330134251033ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8] [i_7 + 1] [i_6] [i_0] [i_0]))) : (5348689854344652158ULL)))) ? (((/* implicit */int) (signed char)-15)) : (1182589237))))));
                                var_24 = ((/* implicit */unsigned long long int) 1672152020);
                                arr_30 [i_0 - 3] [i_0 - 3] [i_0 - 3] = ((/* implicit */short) 17606836743575300586ULL);
                            }
                            for (int i_9 = 3; i_9 < 14; i_9 += 2) 
                            {
                                var_25 = ((((/* implicit */_Bool) min((arr_2 [i_0 - 3]), (arr_2 [i_6])))) ? (max((min((((/* implicit */unsigned long long int) 6314584509303709750LL)), (13098054219364899458ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_9] [13] [(unsigned short)9] [i_9]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38227))));
                                var_26 -= ((/* implicit */unsigned int) -4084410040637690086LL);
                                arr_33 [i_0] [i_0 - 1] [i_1] [10U] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (unsigned short)3370);
                            }
                            arr_34 [i_7] [i_6] [i_6] [i_6] [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0 - 2] [i_0 - 3] [i_6])), (arr_20 [i_0 - 2] [(short)0] [i_0 - 2] [i_6])));
                            var_27 = ((/* implicit */signed char) max((((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) 6280856427318031779LL))))))), (-2036582641)));
                            var_28 |= ((/* implicit */unsigned long long int) 430091287);
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = var_9;
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (short i_12 = 2; i_12 < 9; i_12 += 2) 
            {
                {
                    var_30 |= ((/* implicit */long long int) (_Bool)1);
                    var_31 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_21 [i_12 - 1] [i_10])) ? (min((6199807508571922677ULL), (((/* implicit */unsigned long long int) (unsigned short)5742)))) : (((/* implicit */unsigned long long int) ((arr_4 [i_10]) ? (((/* implicit */int) arr_18 [i_11] [i_10] [i_10] [i_11])) : (arr_39 [i_10] [i_10] [i_10]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        for (int i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 3; i_16 < 16; i_16 += 2) 
                    {
                        for (short i_17 = 1; i_17 < 17; i_17 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) arr_48 [i_15]);
                                var_33 *= (short)11688;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 1; i_18 < 18; i_18 += 2) 
                    {
                        arr_58 [(unsigned short)19] [i_15] [i_15] [i_15] [i_14] [(_Bool)1] = ((/* implicit */int) arr_50 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_15])) ? (17395550060626861932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2073874952U))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_19 = 2; i_19 < 23; i_19 += 2) 
    {
        for (int i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            for (unsigned char i_21 = 2; i_21 < 23; i_21 += 4) 
            {
                {
                    arr_66 [i_21 - 2] [i_21] [i_20] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 5532181530414012703ULL)) ? (min((((/* implicit */int) (unsigned char)45)), (1817579383))) : (((/* implicit */int) (unsigned short)6773))))));
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            {
                                arr_74 [i_22] [i_22 + 3] [i_22] = (_Bool)1;
                                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_59 [i_23 + 1]), (((/* implicit */unsigned short) (unsigned char)5)))))) : (6400111750429628528ULL)));
                                var_36 *= ((/* implicit */unsigned int) 1169511687);
                                var_37 = ((/* implicit */long long int) arr_59 [i_23]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

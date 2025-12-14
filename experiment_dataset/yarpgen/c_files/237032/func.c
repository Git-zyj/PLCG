/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237032
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
    var_16 -= ((/* implicit */unsigned char) ((unsigned long long int) max(((-(28672))), (((/* implicit */int) max((var_8), (var_8)))))));
    var_17 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((-1331002092) & (1331002092)))) ? (((((/* implicit */int) arr_1 [i_0])) ^ (-1331002083))) : (((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */short) -1331002075);
        var_18 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) 1331002074)) * (min((((/* implicit */unsigned int) (unsigned short)0)), (599136214U)))))), (997444037030557437LL)));
        arr_7 [i_1] = ((/* implicit */short) (~((~((+(((/* implicit */int) (unsigned short)0))))))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */short) (~(((((((/* implicit */int) arr_0 [i_2])) + (2147483647))) << (((((/* implicit */int) (unsigned short)7366)) - (7366)))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (short i_4 = 1; i_4 < 14; i_4 += 2) 
            {
                for (unsigned int i_5 = 4; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_21 [(unsigned char)5] [i_3 + 1] [i_4 + 1] [10] [i_2] = ((/* implicit */unsigned long long int) 3695831065U);
                            var_19 -= ((/* implicit */unsigned short) min((arr_11 [i_3 + 1] [i_3 - 1]), (((int) 3695831080U))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] = var_14;
                            var_20 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_2] [i_3 + 2]))))))) ? (((/* implicit */int) arr_13 [i_6] [i_3] [9ULL])) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_4 [i_2] [(short)13])))) < (arr_19 [i_2] [9U] [i_4] [i_5 - 3] [6])))));
                            arr_23 [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((arr_0 [i_2]), (((/* implicit */short) arr_15 [i_2] [i_2] [i_4 - 1] [i_5]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                arr_26 [i_2] [i_3 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) var_11);
                arr_27 [2] [i_2] [i_7 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]))));
                var_21 = ((/* implicit */_Bool) (unsigned short)0);
            }
            /* vectorizable */
            for (short i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                arr_31 [i_2] [i_8] [i_8] |= ((/* implicit */unsigned short) ((unsigned int) (signed char)87));
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((arr_33 [(unsigned char)3] [(signed char)7] [i_2] [i_3 - 1]) - (((((/* implicit */_Bool) arr_20 [i_2] [i_3 + 1] [(unsigned short)14] [i_3 + 1] [i_10])) ? (((/* implicit */unsigned int) 1331002075)) : (var_11)))));
                            var_23 = ((/* implicit */long long int) max((var_23), (arr_19 [i_2] [i_3 + 1] [i_3 + 1] [i_9] [i_3 + 1])));
                            arr_37 [6U] [0] [i_2] [i_10 - 1] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) var_6)) + (arr_33 [i_2] [i_2] [i_2] [i_2])))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 4; i_11 < 13; i_11 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_35 [i_11 - 3] [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11 - 2]))));
                    arr_42 [i_2] [i_2] [i_11] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                }
                var_25 ^= ((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_11]));
            }
        }
        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_26 = ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(577481162))))))) : ((+(max((arr_5 [i_2]), (-1331002092))))));
            var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */int) arr_15 [i_2] [i_2] [10ULL] [i_2])), (((((/* implicit */int) (unsigned short)65534)) - (((/* implicit */int) var_13))))))), (((long long int) ((unsigned short) arr_29 [i_2])))));
            arr_45 [i_2] [i_13] [i_13] = ((/* implicit */signed char) max(((~(1362956716U))), (((/* implicit */unsigned int) (unsigned short)65519))));
        }
    }
    var_28 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((_Bool) var_6))), (max((4206488619U), (var_11)))))));
}

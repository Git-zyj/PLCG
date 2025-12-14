/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19347
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
    var_17 &= ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned int) (!(arr_1 [i_0 + 1] [i_0 - 1])));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned int i_4 = 4; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned long long int) ((arr_8 [i_3]) >> (((17179852800ULL) - (17179852797ULL)))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((981084497) ^ (((/* implicit */int) var_14))))) : (22U)));
                            arr_15 [i_1] [i_2 - 1] [i_4 - 1] |= ((/* implicit */int) arr_10 [i_0 - 1] [i_2 - 1]);
                            arr_16 [i_0 - 1] [i_2 - 1] [i_3] [i_4 + 2] = ((/* implicit */unsigned short) ((arr_1 [i_2 - 1] [i_3]) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1] [i_3]))));
                            var_21 = ((/* implicit */unsigned long long int) (signed char)24);
                        }
                    } 
                } 
                var_22 = (-((~(1494105753U))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_18 [i_0 - 1] [i_1] [i_2 - 1] [i_5] [i_5] [i_5])));
                    arr_19 [i_5] [i_0 - 1] [i_2 - 1] [i_5] [i_5] [i_1] = ((/* implicit */_Bool) 6341886879042726730LL);
                }
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_7))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_1])) != (((/* implicit */int) (unsigned char)168))));
                    arr_22 [i_0 - 1] [i_2 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) >= (arr_21 [i_0 - 1])));
                }
                for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) 
                {
                    arr_27 [i_1] [i_2 - 1] [i_7 - 1] = ((/* implicit */unsigned int) (~(18446744073709551606ULL)));
                    var_26 = ((((/* implicit */_Bool) ((arr_8 [i_0 + 1]) << (((arr_9 [i_0 - 1] [i_1] [i_7 - 3]) - (62365916)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                }
                for (int i_8 = 4; i_8 < 20; i_8 += 1) 
                {
                    var_27 = ((/* implicit */signed char) arr_7 [i_1]);
                    arr_30 [i_8] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 1] [i_0 - 1] [i_0 + 1] [i_8 - 2]))) : (var_12)));
                    arr_31 [i_8 - 3] [i_8] [i_8] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 263989253)) ? (((/* implicit */int) arr_20 [i_8 - 1])) : (((/* implicit */int) arr_20 [i_8 - 2]))));
                }
            }
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_25 [i_0 + 1] [i_1] [i_9] [i_0 - 1] [i_9] [i_9]))))) : (var_12)));
                arr_36 [i_0 - 1] [i_1] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_9] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ^ (4602678819172646912ULL)));
                var_29 = ((((/* implicit */_Bool) (+(arr_35 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (((((/* implicit */_Bool) 9ULL)) ? (14124457182751609921ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [i_9])))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 20; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_45 [i_0 + 1] [i_1] [i_10] [i_11 + 1] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (1685537276U) : ((+(arr_26 [i_0 + 1] [i_1] [i_10] [i_12])))));
                            var_30 = ((/* implicit */unsigned long long int) arr_44 [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 2]);
                        }
                    } 
                } 
                arr_46 [i_0 - 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 139637976727552LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_0 [i_10] [i_10])) - (65001)))))) : (var_1)));
            }
            var_31 = ((/* implicit */long long int) arr_38 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
            arr_47 [i_0 - 1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 9ULL)) ? (arr_44 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) > ((-2147483647 - 1))))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */int) var_5);
            var_33 = (-(arr_40 [i_0 - 1] [i_0 + 1] [14ULL] [i_13]));
        }
    }
}

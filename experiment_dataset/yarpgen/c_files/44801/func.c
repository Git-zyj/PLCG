/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44801
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
    var_12 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)128))));
    var_13 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((unsigned long long int) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (signed char)118))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) (unsigned char)255);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-((+(arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) == (arr_6 [i_0] [i_1] [i_2] [i_2])));
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */int) 1613287168U);
                    var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_9 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) arr_8 [i_0]));
                        arr_16 [i_1] [i_3] [i_4] = (unsigned char)56;
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_19 [i_1] = min((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) arr_13 [i_3] [i_3] [i_0] [i_0])))))), (((/* implicit */int) (signed char)-86)));
                        var_18 = ((/* implicit */signed char) ((int) 16470966483049912467ULL));
                        arr_20 [i_1] [i_1] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) max(((unsigned short)17626), ((unsigned short)36503)))), ((+(arr_8 [i_0])))));
                        var_19 = max((((/* implicit */int) ((_Bool) min(((short)8190), (((/* implicit */short) arr_17 [i_0] [i_0] [i_0] [i_0])))))), (min((-363982166), (((/* implicit */int) (unsigned short)47909)))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_20 = -3568257175167644760LL;
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) (signed char)4);
                        arr_26 [i_6] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (signed char)-117)), ((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1]))))))));
                        arr_27 [i_7] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6]))) % (4294967295U)));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_34 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_32 [i_1] [i_1]), (((/* implicit */unsigned long long int) 2572486080U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? ((~(((((/* implicit */_Bool) 275651850)) ? (17681387382263722105ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_1])) ? (363982165) : (((/* implicit */int) arr_2 [i_9])))))));
                            var_22 = ((/* implicit */unsigned int) min((3803445500430912876LL), (((/* implicit */long long int) (short)-9732))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_38 [i_6] [i_10] [i_1] [i_6] [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (short)-19204))) ? (arr_33 [i_0] [i_6] [i_6] [i_1] [i_6]) : (((/* implicit */unsigned int) 1776567270))));
                            arr_39 [i_0] [i_0] [i_0] [i_6] [i_8] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-15918)) / (((/* implicit */int) (signed char)52)))) * (((-1776567271) / (((/* implicit */int) arr_5 [i_6] [i_6]))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_8] [i_10]))) <= (((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_6] [i_8] [i_10])))))) ? (((/* implicit */unsigned long long int) (-(arr_25 [i_6] [i_6] [i_6] [i_8] [i_8])))) : (min((arr_6 [i_10] [i_6] [i_6] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_10]))))))));
                        }
                        var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((10910187934999963543ULL) | (arr_11 [i_0] [i_0] [i_6] [i_8]))))));
                        var_25 |= ((/* implicit */_Bool) (unsigned char)183);
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((short)11796), (((/* implicit */short) arr_17 [i_0] [i_0] [i_0] [i_11]))))))) ? (min((max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1])), (arr_32 [i_0] [i_12]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-23700)), (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_12])))));
                                var_27 = ((/* implicit */unsigned short) 2147483647);
                                arr_47 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_6] [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_11] [i_1])), (min((arr_44 [i_0] [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_41 [i_6] [i_11] [i_6] [i_11])))))))));
                                var_28 = ((/* implicit */unsigned char) (+(1776567284)));
                                var_29 = ((/* implicit */unsigned short) (unsigned char)195);
                            }
                        } 
                    } 
                }
                arr_48 [i_1] = ((/* implicit */int) (~(238104467249476721ULL)));
            }
        } 
    } 
}

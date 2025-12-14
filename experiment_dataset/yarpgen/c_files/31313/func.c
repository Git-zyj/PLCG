/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31313
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((565360419279936740ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-27181)), ((+(max((((/* implicit */unsigned long long int) var_3)), (arr_5 [i_0] [i_1] [i_2] [i_2])))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]))))))) << (((((((/* implicit */_Bool) (short)-27181)) ? (4960097356685566390ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) - (4960097356685566373ULL)))));
                            var_15 &= ((/* implicit */short) max((var_10), ((!(((/* implicit */_Bool) (unsigned char)8))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35009)) ? (((/* implicit */unsigned long long int) -1LL)) : (5925943080308100224ULL)));
            }
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned short) min(((-(arr_5 [i_0] [i_0] [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (10455570683076265028ULL)))));
                var_18 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_5]);
                /* LoopSeq 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */int) (unsigned short)32640);
                    var_20 = ((/* implicit */signed char) min((18245714275263558900ULL), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_12))));
                        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((arr_0 [i_5]) / (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (unsigned short)59957))))));
                        arr_23 [i_0] [i_1] [i_0] [i_7] [i_8] [i_7] = ((/* implicit */short) (((~(var_5))) | (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_7 - 1] [i_8] [i_8] [i_8 + 2])) + (((/* implicit */int) arr_18 [i_7 - 1] [i_7] [i_8] [i_8 + 3]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_26 [i_9] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((((_Bool)1) ? (((/* implicit */int) arr_17 [i_7] [i_1] [i_0] [i_7])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_11))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(arr_9 [i_1 - 1] [i_9] [i_1 - 3] [i_1 + 1] [i_1] [i_1]))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3693931587616278123ULL)) || (((/* implicit */_Bool) (unsigned char)188))));
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_26 = ((_Bool) (unsigned short)5578);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (_Bool)0))));
                        var_28 *= ((/* implicit */unsigned short) arr_0 [i_5]);
                        var_29 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (arr_8 [i_0] [i_7] [i_5] [i_7] [i_5] [i_0])))) == (max((((/* implicit */long long int) var_0)), (var_5))))))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1]))) : (var_9))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_5] [i_1] [i_0])) ? (arr_13 [i_1] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                    var_31 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                }
                for (signed char i_11 = 1; i_11 < 18; i_11 += 2) 
                {
                    var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3347377957490113183LL)) ? (((/* implicit */int) (unsigned short)59957)) : (((/* implicit */int) (short)-27160))))) ? (((/* implicit */int) (short)27181)) : (((/* implicit */int) (unsigned short)28))))) ? (1152903912420802560LL) : (min((((/* implicit */long long int) (_Bool)0)), (-6699407870503674901LL)))));
                    var_33 = ((/* implicit */int) (((+(3443699768395183787LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (var_8)));
                    arr_32 [i_0] [i_1] [i_5] [i_11] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_5] [i_11])) : (min(((~(arr_29 [i_0] [i_11] [i_5] [i_11]))), (((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_1 - 3] [i_11 - 1] [i_11]))))));
                }
            }
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) var_8);
                    arr_39 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(arr_25 [i_0] [i_0] [i_0] [i_13 + 1] [i_1])))) : (max((((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_1 - 3] [i_1] [i_1])), (8752253433444651343ULL)))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    var_36 = ((/* implicit */short) min((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63290)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65530))))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (short)2810))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((arr_28 [i_1 - 1] [i_1] [i_0 - 1] [i_14] [i_12]) == (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1]))));
                        arr_47 [i_0] [i_14] [i_0] [i_14] [i_1] = var_7;
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_14] [i_1] [i_1 - 1] [i_0])) < (((/* implicit */int) arr_16 [i_14] [i_12] [i_1 - 1] [i_1]))));
                        var_38 = ((/* implicit */unsigned short) ((13486646717023985226ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27515)))));
                        var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64961))) + (-3443699768395183788LL)))));
                    }
                }
                var_40 = ((/* implicit */unsigned short) var_11);
                var_41 = ((/* implicit */_Bool) var_12);
                var_42 = ((((/* implicit */int) max(((unsigned short)59967), (arr_40 [i_0] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1])))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_22 [i_0] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_12] [i_1] [i_12] [i_12])) < (((/* implicit */int) var_1))))))));
            }
            var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0))))) <= (max((arr_5 [i_1 - 1] [i_0 + 1] [i_0] [i_0]), (arr_5 [i_1 - 3] [i_0 - 3] [i_0] [i_0])))));
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) max((((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_0] [i_0])), (((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [(_Bool)1] [i_1])))))))))));
            var_45 = ((/* implicit */unsigned int) (+((((-(((/* implicit */int) (unsigned short)0)))) * (((/* implicit */int) ((((/* implicit */int) (signed char)-9)) <= ((-2147483647 - 1)))))))));
        }
        var_46 = ((/* implicit */int) (-(max((((/* implicit */long long int) (-2147483647 - 1))), (arr_25 [i_0] [i_0] [i_0] [i_0 - 3] [i_0])))));
        var_47 ^= ((/* implicit */_Bool) var_6);
    }
    var_48 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */long long int) 4294967290U)), (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8827108849823117403LL)))))));
}

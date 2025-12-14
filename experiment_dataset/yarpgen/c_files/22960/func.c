/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22960
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
    for (int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_4 + 1] [i_4 + 2] [i_4 - 1])))) ? ((-((~(((/* implicit */int) var_4)))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (signed char)58))))));
                                var_13 = ((/* implicit */unsigned char) 13873028076740155022ULL);
                                var_14 = ((/* implicit */int) (unsigned char)181);
                                var_15 = ((/* implicit */unsigned char) ((3678334378262556848ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154)))));
                                var_16 |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)170)) ? (13647568067166880983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58044))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (264241152U)));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? ((-(var_7))) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-24)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_3))), (min((-802051129), (arr_12 [i_0 - 2] [i_1] [i_2] [i_5])))));
                                arr_16 [i_0] [i_2] [(signed char)3] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (~(var_7))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((min((var_3), (((/* implicit */unsigned long long int) var_9)))) > (((((/* implicit */_Bool) 248570448U)) ? (15529075331075182787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14444))))))))));
                                arr_26 [i_9] [i_8] [i_7] [10LL] [i_9] |= ((/* implicit */long long int) ((10ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((1770335150U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) < (var_7))))))) < ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (3870292456U)))))));
                    arr_27 [(short)12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((~(min((var_10), (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : ((-(((/* implicit */int) min((((/* implicit */signed char) var_8)), (arr_11 [i_0 - 1] [12ULL] [i_0] [i_0]))))))));
                }
                for (short i_10 = 1; i_10 < 12; i_10 += 3) 
                {
                    arr_31 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [11U] [i_1] [i_0 - 3] [5LL])) ? (2ULL) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_0] [i_0] [i_1] [i_0 - 2] [5LL]))))) ? (((((/* implicit */_Bool) (-(18265124101177559943ULL)))) ? (((9868407362039397374ULL) | (((/* implicit */unsigned long long int) 1614184630)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_7)) ? (arr_22 [7ULL] [(unsigned char)8] [i_0] [i_0 + 2]) : (arr_22 [i_10] [i_10 - 1] [i_10 - 1] [i_0 + 2]))));
                    arr_32 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((+(arr_17 [i_0] [i_0] [i_0 - 2])))));
                }
                for (short i_11 = 2; i_11 < 10; i_11 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_21 [i_0] [i_1] [9ULL] [9ULL] [i_0] [i_11]), (((/* implicit */unsigned short) (unsigned char)255)))))))) ? (arr_30 [i_0] [i_1] [i_11 - 2] [i_11 + 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)45)), ((short)-30672)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(var_8)))))))));
                    var_23 = ((/* implicit */int) var_3);
                }
                var_24 = ((/* implicit */unsigned short) (~(4294967273U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 2) 
    {
        var_25 = (-(((/* implicit */int) arr_35 [i_12] [i_12])));
        arr_38 [i_12] = ((/* implicit */signed char) ((var_8) ? ((-(10290575736579689596ULL))) : (8401916695683947312ULL)));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_36 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)106)) ? (((((/* implicit */_Bool) 18002913969152103576ULL)) ? (8166795165284009535ULL) : (((/* implicit */unsigned long long int) arr_36 [i_12])))) : (((/* implicit */unsigned long long int) (~(4162344257U))))));
        arr_39 [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & ((~(arr_36 [i_12]))));
    }
    var_28 = ((/* implicit */short) ((min((min((17212293672053081496ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)47417))))) == (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (2403569033202393390ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17212))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_29 |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48798)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) 576425567931334656ULL))))));
    var_30 = ((/* implicit */unsigned int) var_10);
}

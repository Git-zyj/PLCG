/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51509
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
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (short)-7370);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((((((var_15) && (((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((-(arr_3 [i_0 - 2] [i_1]))))), (((/* implicit */unsigned int) var_3))));
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 47947436U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((arr_8 [i_0] [i_2] [i_0 - 2] [i_3]), (arr_8 [(_Bool)1] [(_Bool)1] [i_0 - 1] [(_Bool)1])))));
                        var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)67))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 4; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_2 [i_4] [(_Bool)1] [(_Bool)1])) && (((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4 - 1] [i_4])))) ? ((+(-748294224438377019LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))) * (0U))))))));
        arr_13 [i_4 - 2] = ((/* implicit */_Bool) var_8);
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4])))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_9))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_4 + 1] [i_4 - 2]))))), (((((/* implicit */_Bool) (+(arr_0 [i_4] [i_4 - 2])))) ? (((/* implicit */int) min((((/* implicit */short) arr_12 [i_4])), (arr_9 [i_4])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_4 - 3])), ((unsigned char)189))))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) -1534655654)) >= (min((((/* implicit */unsigned int) (_Bool)1)), (619327093U))))) ? (((((/* implicit */_Bool) 47947437U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4122037865509361969ULL))) : (((/* implicit */unsigned long long int) arr_23 [i_5 - 1] [i_6] [i_9] [i_8]))));
                                arr_26 [i_5 - 1] [i_6 + 1] [(signed char)6] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [6] [i_5])) - (var_11)))) ? ((-(var_1))) : (((((/* implicit */_Bool) arr_19 [8U] [i_7] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5]))) : (47947436U)))))) ? (((unsigned int) ((47947430U) ^ (((/* implicit */unsigned int) 2147483644))))) : (((/* implicit */unsigned int) -2147483640))));
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_5 - 1] [i_7])) == (((/* implicit */int) var_4)))))));
                                var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_8] [i_5])) || (((/* implicit */_Bool) arr_15 [i_5] [i_9]))))) : (((((/* implicit */int) arr_25 [i_5])) ^ (102426455))))) | (((((/* implicit */_Bool) arr_17 [i_5 - 1])) ? (arr_17 [i_5 - 1]) : (arr_17 [i_5 - 1])))));
                                arr_27 [i_5] [i_5] [i_6] [i_7] [(unsigned short)8] [i_9] = ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) (unsigned char)188))))))));
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_6 + 1] [i_5] = ((/* implicit */signed char) arr_15 [i_6] [i_5]);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (signed char)39))));
                        var_28 -= (signed char)-72;
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1486704023)), (max((((/* implicit */unsigned int) var_0)), (arr_20 [i_5] [i_6 - 1] [i_5])))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36298)) / (((/* implicit */int) (unsigned char)188)))))));
                        var_30 &= ((((/* implicit */_Bool) -198770471528942163LL)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (signed char)-65)));
                        arr_33 [i_5] [7U] [i_7] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) arr_23 [i_10] [i_5] [i_5] [i_5])) : (11682508984686908191ULL))), (((/* implicit */unsigned long long int) (-(arr_29 [i_5] [i_6] [i_7] [i_10]))))))));
                    }
                }
            } 
        } 
        arr_34 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-76)) ? (arr_17 [i_5]) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40)))))))) ? (((min((1071644672), (((/* implicit */int) arr_22 [i_5] [i_5])))) % (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_25 [i_5])) : (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [(signed char)14] [i_5 - 1] [i_5])))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        arr_35 [6ULL] &= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        arr_36 [(unsigned char)7] [i_5] = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_9)))));
        arr_37 [i_5] = ((/* implicit */signed char) (+((-((+(var_14)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
    {
        arr_41 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55947)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_11]))))) : (arr_38 [i_11])));
        arr_42 [i_11] = ((/* implicit */unsigned long long int) arr_38 [i_11 + 3]);
    }
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) 396909076)) ? ((((!(((/* implicit */_Bool) (unsigned char)128)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_4)))))))));
}

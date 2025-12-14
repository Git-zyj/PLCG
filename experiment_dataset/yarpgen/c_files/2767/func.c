/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2767
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
    var_19 = ((/* implicit */_Bool) ((int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */long long int) -5)) : (var_8)))));
    var_20 = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) 940888956);
                var_22 = ((/* implicit */unsigned int) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_23 = (~(((((/* implicit */_Bool) min(((signed char)69), (((/* implicit */signed char) (_Bool)0))))) ? (((arr_0 [i_1] [i_2]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [i_3])))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)5))));
                                var_25 = ((/* implicit */long long int) arr_13 [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 1] [i_2]);
                            }
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_14)) : (min((((/* implicit */unsigned long long int) var_15)), (min((arr_12 [(_Bool)1] [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]), (((/* implicit */unsigned long long int) (signed char)7))))))));
                            var_27 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(arr_4 [i_2 + 1] [i_1] [i_0])))), (9223372036854775807LL)));
                            var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 940888929)), ((+(((((/* implicit */_Bool) -5628069401545651566LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))) : (18446744073709551607ULL)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) 6811520074536008827ULL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        var_30 = ((/* implicit */signed char) ((unsigned long long int) 940888956));
        var_31 = ((/* implicit */_Bool) var_14);
    }
    for (int i_6 = 4; i_6 < 18; i_6 += 1) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 4983479831135392299LL)) ? (arr_17 [i_6] [i_6 - 4]) : (arr_17 [i_6] [i_6 - 3])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_17 [i_6] [i_6]))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_6]) <= (((/* implicit */unsigned long long int) arr_19 [i_6]))))))))) : ((((-(((/* implicit */int) var_5)))) << (((arr_19 [i_6 - 4]) - (8032218584647835639LL)))))));
        var_33 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4983479831135392299LL))))), (max((arr_19 [i_6]), (((/* implicit */long long int) 3235860679U))))));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    var_34 |= ((/* implicit */int) var_0);
                    var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                }
                var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))) != (((((((/* implicit */_Bool) (signed char)80)) ? (1589000382U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))))));
                var_37 |= ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_31 [i_11 + 1] [i_10 + 3] [i_6] [i_6])) >= (((/* implicit */int) var_7)))))));
                            var_39 = (~(((((/* implicit */int) (signed char)126)) | (((/* implicit */int) var_5)))));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)48)) ? (((long long int) ((((/* implicit */_Bool) -4983479831135392293LL)) ? (((/* implicit */int) (_Bool)1)) : (-1742217241)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_31 [i_6 + 1] [12ULL] [i_6] [i_6 + 1]))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (long long int i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */int) ((long long int) var_11));
                            var_42 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (arr_39 [13U] [i_6] [(unsigned short)8] [i_6]))) << (((((arr_39 [i_6] [i_6] [i_7] [i_7]) & (arr_39 [i_7] [i_7] [i_7] [i_7]))) - (106792221U))))))));
        }
        for (unsigned long long int i_15 = 3; i_15 < 18; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 3; i_16 < 18; i_16 += 1) 
            {
                var_44 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_26 [i_6] [i_16 + 2] [i_15])) >= (((/* implicit */int) arr_26 [i_6] [i_16 + 2] [i_15]))))), ((+(((/* implicit */int) arr_26 [6] [i_16 + 1] [i_15]))))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) 948044853);
                            var_46 = ((/* implicit */_Bool) arr_34 [i_15]);
                        }
                    } 
                } 
            }
            var_47 = var_13;
            var_48 = ((/* implicit */unsigned short) (((+(-638961161))) & (((/* implicit */int) (_Bool)0))));
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_49 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)174)) ? (arr_44 [i_6 + 2] [i_19] [i_6 + 2]) : (((/* implicit */unsigned long long int) -818618069)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    {
                        var_50 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_54 [i_6] [i_6]))));
                        var_51 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)196))))) ? (((/* implicit */int) (_Bool)1)) : (-335270026)));
                        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)189)) ? (3767104876U) : (arr_36 [i_6 - 1] [10])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    {
                        var_53 = ((/* implicit */int) var_8);
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [17U])) % (((/* implicit */int) (_Bool)1))));
                        var_55 += ((/* implicit */signed char) 1349750236U);
                        var_56 = ((/* implicit */unsigned short) 4294967295U);
                    }
                } 
            } 
        }
        var_57 = ((/* implicit */int) min((var_57), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_54 [8ULL] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2016957968U)))) : (arr_51 [i_6] [i_6] [16ULL])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_61 [i_6] [i_6] [i_6] [i_6])) > (3296717315538543503ULL))))) > (max((((/* implicit */long long int) (unsigned char)255)), (-3217204849369264535LL)))))) : (((((/* implicit */_Bool) ((signed char) -4300294576032097594LL))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_38 [i_6 - 2] [i_6] [i_6] [i_6]))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214128
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_20 |= var_4;
        var_21 -= ((/* implicit */long long int) arr_3 [i_0]);
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2 - 2] [i_3] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_14 [i_1] [i_2 - 2] [i_3] [(_Bool)0])))) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_3] [i_4])))))))) ? (((/* implicit */int) ((unsigned char) ((arr_1 [i_1 + 3] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8497))) : (0ULL))))) : (((/* implicit */int) arr_5 [i_1]))));
                        arr_16 [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 2]))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_2 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((+(arr_9 [i_2 - 2] [i_2] [i_1 + 3])))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((var_14) ? (((((/* implicit */_Bool) var_11)) ? (arr_11 [i_1] [i_1 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3]))))) : ((-(arr_9 [i_2 - 2] [i_1 - 2] [i_1 - 2]))))))));
                    }
                } 
            } 
        } 
        var_24 *= ((/* implicit */unsigned int) ((unsigned char) min((((long long int) (unsigned char)202)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 3] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned char)19))))))));
        var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) arr_5 [i_1]))), (arr_8 [i_1 + 3] [i_1] [i_1])));
        arr_17 [i_1 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) -4665950809325370116LL))));
        arr_18 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1 + 3]);
    }
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_26 = ((/* implicit */signed char) arr_5 [i_5 - 2]);
            arr_24 [i_5] [i_6] [i_5] = ((/* implicit */_Bool) arr_10 [i_5] [i_5 - 2] [(signed char)6]);
            arr_25 [(_Bool)1] [i_6] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-8123)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) ((unsigned short) arr_12 [i_5]))))))));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)18284), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned char)14])) != (((/* implicit */int) arr_5 [i_5 - 2]))))) : (((((/* implicit */int) arr_5 [i_7 + 1])) + (((/* implicit */int) arr_5 [i_7 + 1]))))));
            arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) 4665950809325370115LL))) > (((((/* implicit */_Bool) (short)25604)) ? (((((/* implicit */_Bool) -4665950809325370134LL)) ? (((/* implicit */int) (short)22762)) : (((/* implicit */int) (unsigned char)203)))) : (((/* implicit */int) var_15))))));
        }
        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            arr_31 [i_5] = ((/* implicit */signed char) (-2147483647 - 1));
            var_28 *= ((/* implicit */unsigned int) ((unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? (arr_12 [i_5 + 3]) : (arr_11 [i_5] [i_8] [i_5]))));
            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8 - 1])) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_29 [i_5] [i_8]))))) ? (((/* implicit */int) arr_1 [i_5 + 2] [i_5 + 2])) : (((/* implicit */int) (!((_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (short)-22753))))) : (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45490))) : (arr_8 [i_8] [i_8] [i_5]))))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 12; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_30 = ((/* implicit */short) -4665950809325370116LL);
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_17))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_5 - 3])) << (((((/* implicit */int) arr_3 [i_5 - 2])) - (219))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863U)) ? (9386235310103006420ULL) : (2991196628107087650ULL))))))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_12 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_40 [i_12 - 1]))))) : (((((/* implicit */_Bool) arr_0 [i_12 - 1])) ? (arr_0 [i_12 - 1]) : (arr_0 [i_12 - 1])))));
        /* LoopSeq 1 */
        for (signed char i_13 = 4; i_13 < 12; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [i_13] [i_13 + 1] [i_13]), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) (short)22753))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_14]))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_12])) : (((/* implicit */int) (unsigned char)64)))) : (arr_43 [i_13 - 1] [i_13 + 2] [i_14]))) : (((/* implicit */int) arr_45 [i_14] [i_13 + 2] [i_12 - 1])))))));
                var_35 = (+((~(min((((/* implicit */unsigned long long int) (unsigned char)11)), (5038247443257559429ULL))))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -752986474))) ? (((/* implicit */int) arr_3 [i_12 - 1])) : (((arr_36 [i_14] [i_13] [i_13] [i_12]) | (((/* implicit */int) arr_42 [i_13] [i_13] [i_14]))))))) ? (((/* implicit */int) arr_1 [i_13 - 2] [i_14])) : (((/* implicit */int) (unsigned char)33))));
            }
            for (unsigned short i_15 = 3; i_15 < 13; i_15 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    for (unsigned char i_17 = 1; i_17 < 12; i_17 += 1) 
                    {
                        {
                            var_37 &= ((/* implicit */short) arr_46 [i_17] [(signed char)4] [(signed char)4] [i_12]);
                            var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_34 [i_13 - 1] [i_13] [i_17 + 1] [i_17 - 1])))));
                            arr_55 [i_12] [i_15] [i_12] [i_16] [i_13] [i_12 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) 492086287920720599ULL)) ? ((-(((unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) arr_43 [i_12] [i_15] [i_16]))));
                            arr_56 [i_12] [i_13] [i_13] [i_16] [i_17 - 1] [i_13] [i_17] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (unsigned char)21)) ? (arr_9 [i_16] [(unsigned short)7] [i_12 - 1]) : (((/* implicit */unsigned long long int) var_18)))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12] [i_13 + 1]))) : (0ULL))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_13] [i_15 + 1] [i_16] [i_15 + 1]))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_49 [i_13]))) : (arr_32 [i_13])))));
                        }
                    } 
                } 
                arr_57 [i_12 - 1] [i_13] [i_12 - 1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_37 [i_15] [(short)15] [i_12])) : (((int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned short i_18 = 3; i_18 < 13; i_18 += 2) /* same iter space */
            {
                arr_60 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-125)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_12 - 1])) ? (arr_46 [i_12 - 1] [i_13 - 4] [i_13] [i_18 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))) : (((((/* implicit */_Bool) arr_46 [i_12 - 1] [i_13 - 1] [i_13] [i_12])) ? (arr_41 [i_12 - 1]) : (((/* implicit */unsigned long long int) arr_46 [i_12 - 1] [i_13 - 3] [i_13] [i_13]))))));
                arr_61 [i_12] [i_13] [(short)10] [i_18] = ((/* implicit */long long int) arr_6 [i_12] [i_12]);
                var_39 = ((/* implicit */_Bool) max(((+(arr_0 [i_13 - 1]))), (((((/* implicit */_Bool) -972576732)) ? (((/* implicit */unsigned long long int) ((arr_20 [i_12]) ? (((/* implicit */int) arr_30 [i_18])) : (((/* implicit */int) (signed char)-16))))) : (((((/* implicit */_Bool) arr_39 [i_18 - 1] [i_18] [i_13 - 2] [i_12])) ? (((/* implicit */unsigned long long int) 3001738750011587049LL)) : (arr_32 [i_13])))))));
            }
            var_40 = ((_Bool) (!(((/* implicit */_Bool) ((arr_20 [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (524032U))))));
        }
        arr_62 [i_12] [i_12] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_23 [10ULL]))))), ((+(arr_46 [4] [i_12 - 1] [(unsigned char)4] [4])))));
        arr_63 [i_12 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-4)) | (((/* implicit */int) arr_20 [i_12 - 1]))))) ? (((arr_20 [i_12 - 1]) ? (((/* implicit */int) arr_20 [i_12 - 1])) : (((/* implicit */int) arr_20 [i_12 - 1])))) : (((/* implicit */int) ((unsigned short) var_13)))));
        arr_64 [i_12] [i_12] = ((/* implicit */long long int) arr_21 [10ULL]);
    }
    var_41 = var_2;
    var_42 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
    {
        for (long long int i_20 = 1; i_20 < 14; i_20 += 3) 
        {
            {
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_19])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_26 [i_19])) : (((/* implicit */int) (signed char)-15)))) / (((/* implicit */int) ((signed char) var_8)))))) : (((arr_1 [i_19] [i_19]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)62))))) : (((((/* implicit */_Bool) -8741791335236496949LL)) ? (arr_9 [i_19] [i_19] [i_19]) : (((/* implicit */unsigned long long int) var_18))))))));
                var_44 = min((arr_67 [i_20 - 1]), (((((/* implicit */_Bool) arr_8 [i_20 + 1] [i_20 - 1] [i_20])) ? (arr_8 [i_20 + 1] [i_20 - 1] [i_20 - 1]) : (arr_67 [i_20 + 1]))));
                var_45 = ((/* implicit */unsigned long long int) 2278734859U);
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_2)))) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (unsigned short)46410))));
}

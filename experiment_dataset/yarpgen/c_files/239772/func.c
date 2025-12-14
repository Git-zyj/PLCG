/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239772
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
    var_15 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) ((unsigned char) arr_3 [i_0] [i_0 - 1] [i_2]));
                    var_17 -= ((/* implicit */int) ((unsigned int) (short)25017));
                    var_18 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)25017))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0]);
                        var_19 = (short)-25022;
                    }
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_4 + 2] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_1]))) : (arr_16 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])));
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_5 - 1] [i_4 + 1])) <= (((/* implicit */int) arr_10 [i_0 + 1] [i_4 + 1] [i_5 - 1] [i_2]))));
                            arr_17 [i_0] = ((long long int) arr_4 [i_5 + 2] [i_4] [i_4 + 1] [i_0]);
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_4 [i_6 + 1] [i_4 + 2] [i_4 + 1] [i_0 + 1]))));
                            var_23 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) var_4)))));
                            arr_20 [i_0] = ((/* implicit */unsigned long long int) ((-6726329198629649830LL) < (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_6] [i_6 + 1])))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) < (arr_1 [i_2])));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25017))) : (arr_1 [i_0 + 1]))))));
                        }
                        var_26 += ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2] [i_4])) & (((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4] [i_2]))));
                    }
                }
            } 
        } 
        arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) % (arr_14 [i_0] [i_0 + 1] [i_0])));
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    {
                        arr_36 [i_8] [i_9] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)255)), (((((((/* implicit */long long int) ((/* implicit */int) (short)25008))) != ((-9223372036854775807LL - 1LL)))) ? (((((/* implicit */int) (unsigned char)94)) >> (((/* implicit */int) (signed char)17)))) : (((/* implicit */int) arr_15 [i_10]))))));
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)106)), (max((((/* implicit */unsigned short) (signed char)-74)), ((unsigned short)65535)))))), (arr_12 [i_9] [i_9] [i_10] [i_11])));
                        arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62632)) ? (((((/* implicit */_Bool) ((arr_29 [i_11]) << (((((/* implicit */int) (unsigned char)123)) - (85)))))) ? (-2285303837261957128LL) : ((-(119292798715008983LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_9] [i_10] [i_11])))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_13 [i_8] [i_8])) : (((/* implicit */int) arr_13 [i_8] [i_8])))), ((+(((/* implicit */int) arr_13 [i_8] [i_8]))))));
    }
    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
    {
        var_28 = ((/* implicit */unsigned char) var_12);
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (short)-32404))));
        arr_42 [i_12] [i_12] = ((/* implicit */long long int) arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
        /* LoopNest 2 */
        for (unsigned int i_13 = 4; i_13 < 19; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                {
                    arr_49 [i_14] [i_12] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (arr_39 [i_12 + 2] [i_12]) : (arr_39 [i_12 + 1] [i_13 - 2]))), (((((/* implicit */_Bool) (signed char)87)) ? (1308616956U) : (((/* implicit */unsigned int) 2147483647))))));
                    var_30 = ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned char)94), (((/* implicit */unsigned char) ((signed char) var_0)))))), (((((/* implicit */int) var_14)) * (((((/* implicit */int) var_10)) >> (((-5675050014663799733LL) + (5675050014663799760LL)))))))));
                    arr_50 [i_13] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-25050))));
                    arr_51 [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (max((max((((/* implicit */unsigned long long int) (short)-25040)), (arr_8 [i_12] [i_13] [i_13] [i_14]))), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) max((max((7032300691074260543LL), (((/* implicit */long long int) (signed char)-26)))), (((/* implicit */long long int) max(((short)-25023), (((/* implicit */short) (unsigned char)46))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 2; i_16 < 19; i_16 += 1) 
            {
                for (long long int i_17 = 3; i_17 < 16; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_18 = 2; i_18 < 19; i_18 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) arr_21 [i_12] [i_15] [i_12] [i_17] [i_18] [i_15] [i_12]);
                            arr_66 [i_12] [i_15] [i_16] [i_17] [i_18] = ((var_8) | (-4950591914496403995LL));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            arr_69 [i_17] [i_19] [i_12] [i_17] [i_19] = ((/* implicit */unsigned long long int) (unsigned short)33900);
                            arr_70 [i_12] [i_16] [i_17] [i_12] = ((/* implicit */long long int) arr_45 [i_12] [i_12] [i_12]);
                        }
                        arr_71 [i_17] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)55610)), (9322075186270463165ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((signed char) 240896998)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (short)-6588)) : (1075555698)))), (((long long int) (signed char)(-127 - 1)))))));
                        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_33 &= ((/* implicit */long long int) arr_44 [16U] [i_15]);
            arr_72 [i_12] [i_15] [i_12] = ((/* implicit */unsigned int) (signed char)-90);
            var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)27))))) ? ((~(((/* implicit */int) arr_6 [i_12] [i_15] [i_15] [i_12])))) : (((/* implicit */int) max(((short)19523), ((short)-32715)))))), (((((/* implicit */_Bool) arr_58 [i_15 + 1] [i_15 - 1])) ? (((/* implicit */int) (short)-25022)) : (((/* implicit */int) var_13))))));
        }
    }
    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_21 = 0; i_21 < 21; i_21 += 2) 
        {
            var_35 = ((/* implicit */unsigned short) max((7899492376159314453LL), (((/* implicit */long long int) max((arr_13 [i_20] [i_21]), (((/* implicit */unsigned short) (short)-24353)))))));
            arr_79 [i_20] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_21] [i_21] [i_21] [i_21] [i_20] [i_20] [i_20])) ? ((+(arr_4 [i_21] [i_21] [i_21] [i_20]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_20] [i_20] [i_20]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                var_36 = ((/* implicit */unsigned int) ((int) 7035298744144848562LL));
                var_37 = ((/* implicit */signed char) min((2083344940U), (((/* implicit */unsigned int) max(((short)1677), (((/* implicit */short) (signed char)-17)))))));
            }
        }
        var_38 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */short) arr_73 [i_20]))))) ? (((/* implicit */int) min(((unsigned char)238), (((/* implicit */unsigned char) var_10))))) : (((((/* implicit */_Bool) arr_78 [i_20] [i_20])) ? (((/* implicit */int) (short)-22174)) : (((/* implicit */int) arr_83 [i_20] [i_20] [i_20] [i_20])))))));
    }
}

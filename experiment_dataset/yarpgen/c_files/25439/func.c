/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25439
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
    var_14 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) arr_2 [i_0]);
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) var_9)))) / (arr_2 [i_0])))) ? (((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (arr_6 [i_0] [(signed char)10])));
                    var_17 *= ((/* implicit */short) arr_0 [i_1]);
                    var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (_Bool)0)));
                    arr_8 [i_0] [(signed char)1] [i_2] = ((/* implicit */int) min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)29520))) != (var_0)))))))));
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) - (arr_6 [i_0] [i_0]))) <= (arr_5 [i_0] [i_0] [i_0])));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_14 [(short)5] [(short)5] = ((/* implicit */signed char) arr_6 [i_4] [(short)2]);
            arr_15 [i_4] = ((/* implicit */int) (+(((5068491318354722915ULL) / (5133395537131879112ULL)))));
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                arr_22 [i_3] [i_5] [i_5] [i_6] = ((((/* implicit */int) arr_3 [i_5] [i_3])) | (((/* implicit */int) arr_7 [i_3])));
                arr_23 [i_5] [i_5] = ((/* implicit */long long int) (((~(1270751543U))) << (((((/* implicit */int) arr_4 [i_3])) % (((/* implicit */int) arr_4 [i_6]))))));
            }
            for (signed char i_7 = 2; i_7 < 7; i_7 += 4) 
            {
                var_20 -= ((/* implicit */short) (~(0ULL)));
                var_21 = ((/* implicit */long long int) arr_6 [(unsigned short)4] [i_5]);
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned char) var_12);
                        arr_31 [i_3] [i_5] = ((/* implicit */short) arr_29 [i_3] [i_5] [i_8]);
                        var_23 = ((/* implicit */int) arr_12 [i_5] [i_5] [i_9]);
                        var_24 -= arr_4 [i_3];
                    }
                } 
            } 
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) % (arr_27 [i_3] [i_3] [i_5]))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_5]))))))));
            arr_32 [i_5] = arr_10 [i_3] [i_5];
            var_26 = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)32750)) ^ (((/* implicit */int) (short)-11613))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_36 [i_10] [i_3] = ((/* implicit */long long int) arr_6 [i_3] [i_3]);
            arr_37 [i_10] [i_3] [i_3] = ((/* implicit */short) var_7);
            arr_38 [i_3] [i_10] [i_10] = ((/* implicit */signed char) 15576634926642202206ULL);
        }
        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            arr_41 [i_11] [i_3] [i_11] = var_7;
            arr_42 [i_11] [i_11] = ((/* implicit */unsigned int) (~(((long long int) arr_20 [i_3] [i_3] [(signed char)4] [i_11]))));
            var_27 = ((/* implicit */short) arr_19 [i_11] [i_11] [(signed char)8]);
            arr_43 [i_3] [i_3] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
        }
        arr_44 [i_3] = ((/* implicit */unsigned char) ((2015890150U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)12144)))));
    }
    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            var_28 = ((/* implicit */_Bool) (((((((~(((/* implicit */int) var_10)))) + (2147483647))) << (((((/* implicit */int) arr_48 [i_12] [i_13] [i_13])) - (41))))) | (((/* implicit */int) ((arr_45 [i_12]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13]))))))));
            arr_49 [i_13] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_12])) ? (((((/* implicit */_Bool) var_1)) ? (arr_47 [i_12] [i_12] [i_12]) : (var_5))) : (((/* implicit */unsigned long long int) ((arr_45 [i_12]) * (arr_45 [i_12])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [i_12])))))));
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            arr_53 [10] [10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */int) var_3)))))) + (min((((/* implicit */unsigned int) (unsigned char)149)), (arr_45 [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [11]))) : (arr_47 [i_14 - 1] [i_14] [i_14])));
            var_29 -= ((/* implicit */unsigned char) var_1);
        }
        for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_30 = ((/* implicit */_Bool) arr_54 [i_12]);
            arr_56 [i_12] [i_15] = ((/* implicit */short) ((var_5) - (((/* implicit */unsigned long long int) (+(3683695732250735028LL))))));
            arr_57 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((1022), (((/* implicit */int) (_Bool)0)))))));
            arr_58 [i_12] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_47 [i_15] [i_15] [i_12])))) ? (((/* implicit */unsigned long long int) (~(arr_45 [i_12])))) : ((+(arr_47 [i_12] [13U] [i_15])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_50 [i_12])), (((((/* implicit */int) var_10)) | (((/* implicit */int) var_1))))))) : (arr_45 [17LL]));
        }
        arr_59 [i_12] [i_12] = ((/* implicit */int) arr_55 [i_12] [i_12]);
    }
    for (short i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (short)10)) ? (2059679318) : (((/* implicit */int) (short)-6656)))))), (((/* implicit */int) arr_55 [20ULL] [i_16]))));
        arr_62 [i_16] [(unsigned char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_16])) ? (((/* implicit */int) arr_48 [17ULL] [(_Bool)1] [i_16])) : (((/* implicit */int) ((1809050638) == (((/* implicit */int) (short)-1)))))));
    }
}

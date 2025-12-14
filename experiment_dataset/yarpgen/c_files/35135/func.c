/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35135
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) (-(arr_2 [i_0] [i_0])));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_0 [i_0] [i_1])))));
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))) : (arr_2 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((short) arr_1 [i_0]);
        }
        var_20 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)255))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22359)) ? (34359738367ULL) : (((/* implicit */unsigned long long int) var_15))))) ? (((((/* implicit */_Bool) (unsigned short)33634)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30139))) : (arr_17 [i_5 - 3]))) : ((+(4589957900899519513ULL)))));
        arr_20 [i_5] = (~((+(4589957900899519522ULL))));
    }
    for (unsigned short i_6 = 3; i_6 < 7; i_6 += 2) 
    {
        var_22 -= ((/* implicit */unsigned int) max(((+((-(var_6))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6 - 2] [i_6 + 4])))))));
        var_23 = ((/* implicit */short) min((var_9), (max((((/* implicit */unsigned long long int) 8370297302909297642LL)), (max((((/* implicit */unsigned long long int) var_15)), (var_4)))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-31967))))))), (((((((/* implicit */_Bool) (unsigned char)157)) || (((/* implicit */_Bool) 4589957900899519531ULL)))) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_6] [i_6] [i_8]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_25 [i_7] [i_7])), (var_5))))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_34 [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)16128))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_6 - 2] [i_7] [i_9] [i_9] [i_9] [i_9] [i_6 - 2] = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) var_10)), (arr_28 [i_7] [i_7] [i_8]))), (arr_28 [i_6 - 1] [i_6 - 1] [i_6 + 2]))), (((/* implicit */unsigned long long int) arr_29 [i_6 - 1] [i_6 - 1] [i_8]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) arr_5 [i_6 + 4] [i_6 + 3] [i_6 + 4])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) min(((unsigned short)59483), ((unsigned short)50987)))) & (((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)5025))))))));
                            var_26 = ((/* implicit */unsigned char) ((_Bool) max((max((8370297302909297642LL), (((/* implicit */long long int) (short)-23991)))), (max((((/* implicit */long long int) (unsigned short)61440)), (35184372088824LL))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_8] [i_6 + 1] [i_11] [i_6 + 1] [i_6 + 1]), (arr_12 [i_6 + 2] [i_6 + 1] [i_8] [i_6 + 2] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))) : (((max((var_4), (((/* implicit */unsigned long long int) (short)9242)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) (_Bool)1))))))))));
                            var_28 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33644))) - (arr_22 [i_7] [i_8]))) / ((+(arr_3 [i_6 + 1] [i_6 + 1] [i_8])))));
                        }
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (arr_3 [i_6 + 3] [i_6] [i_6 + 3]) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551612ULL))) : (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_6 + 3] [i_6 + 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768)))))));
                        arr_41 [i_9] [i_8] [i_7] [i_9] = ((2192421927321910521ULL) >> (((/* implicit */int) ((short) max((((/* implicit */short) var_16)), (arr_27 [i_6] [i_7]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        arr_45 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) | (-805725136)));
                        arr_46 [i_6 + 4] = ((/* implicit */short) (signed char)-17);
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) != ((-(var_4)))))));
    var_31 = ((/* implicit */long long int) max(((short)-16404), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (8942479449247848469LL)))))))));
}

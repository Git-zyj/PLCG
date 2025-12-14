/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44040
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) 11284780147755110286ULL);
                    var_11 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_0 - 2])) ? (656647640) : (((/* implicit */int) (short)2998))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) 656647617)))))) ? (((/* implicit */unsigned long long int) min((-1250094117), (((/* implicit */int) ((short) 18446744073709551615ULL)))))) : (max((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (unsigned short)40759)))), (((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_3]))))))))));
        arr_10 [8U] &= ((/* implicit */short) max(((~(arr_8 [i_3]))), (((arr_8 [i_3]) | (((/* implicit */long long int) var_1))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                {
                    var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-19603)) : (-425121793)))))) ? (((((/* implicit */_Bool) 17553294934350441467ULL)) ? (893449139359110146ULL) : (5200923300171696738ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [(_Bool)1] [i_5 - 1] [(_Bool)1])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_14 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7211))));
                        arr_21 [i_6] [i_6] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_19 [i_5 + 3]) ? (2147483647) : (((/* implicit */int) arr_20 [i_5 + 2])))))));
                        var_15 = arr_13 [i_3] [i_4] [i_4];
                        arr_22 [i_3] [i_4] [i_5 + 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_14 [i_3] [i_5] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_4])), (-1202739688))))))) : (((/* implicit */int) max((max(((unsigned short)24777), (((/* implicit */unsigned short) var_4)))), (((/* implicit */unsigned short) var_10)))))));
                    }
                }
            } 
        } 
        arr_23 [(signed char)12] |= ((/* implicit */short) ((int) min(((signed char)-14), (((/* implicit */signed char) (_Bool)0)))));
        arr_24 [i_3] = ((/* implicit */int) ((short) 8934419998807685285ULL));
    }
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 24; i_8 += 1) 
        {
            for (int i_9 = 1; i_9 < 23; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (unsigned char)255);
                                arr_38 [i_7] [i_9] [i_9] [i_10] [i_11] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((_Bool) arr_25 [i_7])))) ? (((unsigned int) 2147483616U)) : (((/* implicit */unsigned int) -1))));
                                arr_39 [i_7] [i_7] [i_9 + 2] [i_10] [i_11] = ((/* implicit */_Bool) ((max(((-(3399430926419756696ULL))), (((/* implicit */unsigned long long int) min(((short)-5886), (((/* implicit */short) var_7))))))) / (((/* implicit */unsigned long long int) max((((-3499239383715037527LL) & (((/* implicit */long long int) 868655829U)))), (((((/* implicit */long long int) var_1)) / (arr_37 [(short)21] [i_8] [i_9] [i_10] [i_11]))))))));
                                arr_40 [i_7] [i_8] [i_9] [i_10] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29646)))))));
                                var_17 += ((/* implicit */unsigned char) 1073741823U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned char) (signed char)-12)), (arr_18 [i_13 + 1] [i_13] [i_13] [i_13 - 3] [i_13] [i_13]))));
                                arr_46 [i_13] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_37 [i_8] [i_8] [i_12 + 1] [i_12] [i_13])))) ? (((arr_37 [i_7] [(_Bool)1] [i_12 + 1] [(_Bool)1] [i_12 - 1]) ^ (arr_37 [i_8] [i_12 + 1] [i_12 + 1] [i_13] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                                arr_47 [i_12] [i_7] [i_8 - 2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (arr_37 [i_13 - 2] [i_8 - 1] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_8 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-35)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_48 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (600203106U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7] [(unsigned char)21] [i_7])) || (((/* implicit */_Bool) var_0))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_7])))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)217))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) 656647640)), (-7927898354785029075LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_7))))), (max((549755805696ULL), (((/* implicit */unsigned long long int) var_10))))))));
}

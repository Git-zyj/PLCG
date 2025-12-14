/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234898
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10792006333566239399ULL)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) (signed char)1))))) ? (var_2) : (arr_1 [i_0 - 2])))) ? (((/* implicit */int) ((unsigned short) (signed char)-2))) : ((-(((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */int) var_3);
        var_16 = ((/* implicit */_Bool) ((((_Bool) ((unsigned int) (signed char)5))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)56755))))) : (min((arr_0 [i_1] [i_1]), (1125899906842623ULL)))));
        var_17 &= ((/* implicit */unsigned long long int) (-(var_10)));
        arr_7 [i_1] [i_1] = 4294967295U;
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > ((~((~(var_10)))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(max((arr_8 [(_Bool)1]), (arr_8 [(signed char)16]))))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45519)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            for (unsigned int i_5 = 3; i_5 < 24; i_5 += 4) 
            {
                {
                    arr_21 [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)56759)) : (((/* implicit */int) arr_19 [i_3 + 1] [i_4]))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_25 [i_3 + 1] [i_4] [i_4] = ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (9223372036854775807ULL));
                        arr_26 [i_4] [i_3] [i_3] [(_Bool)1] [i_6] = ((/* implicit */_Bool) var_5);
                    }
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_18 [i_4 + 1]))));
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-18219))));
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-114))));
        var_24 &= ((/* implicit */_Bool) 0U);
    }
    var_25 = var_6;
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) max((16645262235131073831ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) -1)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (16645262235131073849ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [(short)9] [i_8])))))))));
                    arr_41 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))))) | (((((/* implicit */_Bool) 16645262235131073831ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45519))) : (var_2)))));
                    var_27 = ((/* implicit */int) min((((/* implicit */short) ((_Bool) var_7))), ((short)17333)));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) min((var_28), ((unsigned short)20019)));
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            var_29 ^= ((arr_23 [8ULL] [i_12] [i_12] [i_12] [i_11 + 2]) && (arr_23 [i_11 + 3] [i_12] [i_11 + 3] [i_12] [i_11 - 1]));
            arr_48 [i_12] &= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)21));
            var_30 = ((/* implicit */unsigned int) (-(var_2)));
        }
        var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_11 + 1]))));
        arr_49 [i_11] = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)-17334)));
        arr_50 [i_11] [i_11 + 4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)21))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27820
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_0)), (arr_0 [i_1]))))))));
                arr_5 [i_1] &= ((/* implicit */short) min((var_9), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) max((arr_2 [i_0]), ((unsigned char)222)))))))));
                var_14 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)43658)) : (((/* implicit */int) (unsigned char)34)))))), (((/* implicit */int) min(((unsigned char)222), (((/* implicit */unsigned char) (signed char)114)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) 0U)), (var_6))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)0)), (2091609779U))))))) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) ((short) var_7)))));
                        arr_18 [i_2] [i_2] = ((((/* implicit */int) (unsigned char)14)) * (((/* implicit */int) (unsigned char)229)));
                        arr_19 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) ((signed char) arr_7 [i_2]))), (arr_0 [i_3]))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [(short)10] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_11 [i_2])), (var_2))))) : (arr_4 [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)0))))) ? (var_11) : (((/* implicit */unsigned long long int) max((arr_10 [i_2]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)63542)))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_24 [(short)17] = ((/* implicit */unsigned char) 33292288U);
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
                    var_16 -= ((/* implicit */_Bool) var_11);
                    var_17 = ((/* implicit */signed char) ((unsigned int) (unsigned char)64));
                    arr_30 [i_6] [i_7] [(unsigned short)5] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_31 [i_6] = ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-26649)) <= (((/* implicit */int) arr_22 [i_6]))))))));
    }
    for (short i_9 = 3; i_9 < 15; i_9 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) 3871261913U));
        var_19 ^= ((/* implicit */signed char) (unsigned char)192);
        arr_35 [(short)14] &= ((/* implicit */long long int) (((+(((18446744073709551601ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9]))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-26649), (((/* implicit */short) ((_Bool) (unsigned short)65535)))))))));
        var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((long long int) arr_32 [i_9]))) : (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned long long int) 874404461)) : (18446744073709551601ULL))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */short) (signed char)0)), ((short)-26649))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26799)) <= (((/* implicit */int) (signed char)0))));
        arr_39 [i_10] = ((/* implicit */short) (~(arr_37 [i_10] [i_10])));
        var_22 |= ((/* implicit */_Bool) (-(arr_36 [i_10] [i_10])));
        var_23 |= ((/* implicit */int) (_Bool)1);
        var_24 = (unsigned char)194;
    }
}

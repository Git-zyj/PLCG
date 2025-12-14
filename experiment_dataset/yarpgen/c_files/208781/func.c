/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208781
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
    var_16 = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)227))))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) -4031899127994453940LL))))) ? (((unsigned int) (+(var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) -4031899127994453922LL);
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(8625026980138647517LL)))), (arr_1 [i_0] [3LL])));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_13)) - (((/* implicit */int) (short)5981)))), (((/* implicit */int) (signed char)-32)))) == (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) < (-4031899127994453927LL))) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((((/* implicit */_Bool) 65534U)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (signed char)107))))))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -1749561201)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))), ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) var_10)))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4031899127994453922LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
        arr_17 [i_3] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49280)) ? (((/* implicit */unsigned long long int) var_11)) : (min((var_3), (((/* implicit */unsigned long long int) arr_21 [i_4]))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_20 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (var_9))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 3) 
        {
            for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) arr_9 [i_6 + 1] [i_5] [i_4] [i_4]);
                    arr_29 [i_6 + 2] [i_6 + 2] [i_5] [i_4] = ((/* implicit */signed char) (((!(var_2))) ? (arr_9 [i_5] [i_5] [i_6] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) >= (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_5 + 2] [i_5] [i_4]))))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13146))) : (6254841433474432991ULL)));
                arr_35 [i_4] [i_7] [i_4] [i_7] = ((/* implicit */unsigned short) var_13);
            }
            arr_36 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((15650812873309662402ULL) >= (var_9)))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_32 [i_4] [i_7] [i_7])))))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((arr_0 [i_4] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54845)))));
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        var_23 = arr_6 [i_11] [i_4];
                        arr_45 [i_4] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_4 [i_4] [16LL]))));
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_9] [i_11] = ((/* implicit */signed char) (!(((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_4 [i_4] [i_9]))))));
                        arr_47 [i_9] [i_10] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)11))))) ? (var_3) : (((/* implicit */unsigned long long int) ((4503049871556608LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49294))))))));
                        arr_48 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) ((unsigned char) 524224U));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 3) 
        {
            arr_53 [i_4] [i_12 + 1] [i_12 - 3] |= ((/* implicit */unsigned int) (short)-11);
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_30 [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)65534))))) ? ((~(arr_25 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))))))))));
            arr_54 [i_12 - 2] [i_12 + 4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_12 - 2] [i_12 + 2])) ? (max(((~(-1645683857226261419LL))), (((/* implicit */long long int) (~(arr_8 [i_12] [i_12 + 4] [i_4])))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (7858303526423035160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        }
    }
}

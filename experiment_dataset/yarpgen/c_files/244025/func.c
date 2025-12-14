/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244025
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
    var_12 = ((/* implicit */unsigned char) -7340853230249740255LL);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((short) max((9ULL), (((/* implicit */unsigned long long int) (unsigned char)237)))));
        var_13 = ((/* implicit */int) ((unsigned char) 3440536899093444849ULL));
    }
    for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (18446744073709551606ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (((18446744073709551607ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1])))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(7340853230249740255LL)))) ? ((-(((/* implicit */int) arr_5 [i_1 - 1])))) : (((/* implicit */int) ((short) min((18446744073709551612ULL), (((/* implicit */unsigned long long int) -7340853230249740264LL)))))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) 5305406855657113996LL);
                        var_17 += ((/* implicit */unsigned long long int) (short)19088);
                        var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_2 + 2])) == (((/* implicit */int) (_Bool)1)))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_4 [i_4]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned short i_7 = 3; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) ((((/* implicit */int) (short)-23197)) + (((/* implicit */int) (unsigned char)4)))))), (((long long int) (unsigned char)11))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1633996291842269267ULL)))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32757)) && (((/* implicit */_Bool) 3440536899093444849ULL))));
                            var_23 = ((/* implicit */signed char) (unsigned char)68);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58795))), (((/* implicit */unsigned short) (signed char)125))))))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned long long int) min((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) arr_6 [i_8] [i_6] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (1122699677))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_26 += ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-114))))) | (((((/* implicit */_Bool) 1822392606393129005ULL)) ? (((/* implicit */unsigned long long int) -2147483645)) : (13724122536830894092ULL))));
                            arr_28 [(unsigned char)15] [i_7 - 2] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((_Bool) arr_13 [i_1] [i_1] [i_1])) ? (18446744073709551611ULL) : (14386733706386783074ULL)));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_9] [i_1])) ? ((~(((/* implicit */int) (unsigned char)184)))) : (((((/* implicit */_Bool) arr_25 [13U] [i_1] [7U] [13U] [13U] [11ULL] [i_9])) ? (((/* implicit */int) arr_20 [i_9] [(unsigned char)4] [i_6] [5ULL] [5ULL])) : (((/* implicit */int) arr_9 [i_1] [24ULL] [9ULL] [i_1]))))));
                            var_28 = ((/* implicit */unsigned short) (-(((long long int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
        var_29 -= ((/* implicit */short) max(((+(((/* implicit */int) ((16624351467316422610ULL) == (((/* implicit */unsigned long long int) -5305406855657113997LL))))))), ((~(((/* implicit */int) arr_25 [6ULL] [(short)4] [i_1 + 1] [i_1] [22ULL] [(short)4] [(_Bool)1]))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (long long int i_12 = 2; i_12 < 9; i_12 += 2) 
            {
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_12] [i_11] [i_11] [i_10])) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-13301)) : (((/* implicit */int) (unsigned char)169)))) : (((/* implicit */int) min((arr_36 [i_12] [i_11] [i_11] [i_10 + 4]), (((/* implicit */unsigned short) arr_37 [i_12 + 1]))))))))));
                    var_31 = ((/* implicit */short) ((signed char) (short)2490));
                    var_32 = ((/* implicit */unsigned long long int) min((arr_10 [i_10] [i_11] [i_10] [i_12]), (((/* implicit */short) (unsigned char)3))));
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) (short)(-32767 - 1))))));
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                for (short i_15 = 1; i_15 < 8; i_15 += 2) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) 18103747760380538607ULL);
                        var_35 -= ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_14] [i_14] [i_10])))));
                        arr_46 [i_10] [i_13] [i_14] [i_15] [i_15 - 1] [i_14] = ((/* implicit */signed char) (-(min((((/* implicit */int) (short)26975)), (arr_39 [i_10 + 2] [i_13] [i_14])))));
                    }
                } 
            } 
        } 
    }
    var_36 += ((/* implicit */unsigned int) var_1);
}

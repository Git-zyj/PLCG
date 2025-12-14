/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205695
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
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (max((4294967295U), (((/* implicit */unsigned int) (unsigned char)17)))) : (((/* implicit */unsigned int) (-(22))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_0))) % ((~(4239572443678228051LL)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((long long int) (!((_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */int) var_17);
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11699))))) ? (((/* implicit */int) ((4239572443678228051LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43509)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (short)28223)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [(unsigned short)4])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) * (1868737321U))))))));
        arr_12 [i_3] = ((max(((((_Bool)1) ? (((/* implicit */long long int) var_15)) : (-4239572443678228051LL))), (((/* implicit */long long int) (unsigned short)7380)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24889))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_12)) : (507798660U)))) ? (max((var_15), (221319415))) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (signed char)121)));
                            arr_25 [i_4] [i_4] [i_4] = ((/* implicit */int) ((max((max((-3231804232286873533LL), (-4189063413094079338LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)24881))))))) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)22021))))), (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3776589132951608456LL)))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */long long int) var_4);
            var_23 = ((/* implicit */int) (!(((max((((/* implicit */long long int) (unsigned short)24889)), (var_18))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 1090509128)) ? (((/* implicit */int) arr_6 [i_4] [i_3] [i_3])) : (-549694424))))))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_28 [i_8] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (unsigned short)0)) ? (2899938036U) : (var_2))))) - (((/* implicit */unsigned int) arr_27 [i_3] [i_8]))));
            var_24 = ((/* implicit */unsigned short) ((3776589132951608455LL) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43522))))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249075
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
    var_17 = (!(((/* implicit */_Bool) var_2)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-67)))) < (((/* implicit */int) min((var_8), (var_16)))))) && (((/* implicit */_Bool) max(((signed char)-115), (((/* implicit */signed char) (_Bool)1)))))));
        arr_4 [i_0] &= ((((/* implicit */_Bool) 17873661021126656LL)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (1409419054584991695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28853)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28850)) ? (((/* implicit */int) (short)28853)) : (((/* implicit */int) (short)-28853))))) ? (-17873661021126651LL) : (((long long int) arr_0 [6]))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-28836)) ^ (((/* implicit */int) var_4))))) ? (((972769261U) & (((/* implicit */unsigned int) 1956035938)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((17873661021126645LL) + (17873661021126656LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12)));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    for (signed char i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((_Bool) ((12171393229977989302ULL) - (11901995741533618029ULL))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (((-17873661021126645LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 7437097509704754351ULL)) ? (((/* implicit */unsigned long long int) 2525081379539213699LL)) : (var_9)))));
                        arr_26 [i_5] [i_5] [i_5] [i_8] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_31 [i_5] [i_9] [i_10 - 1] [i_10])) : ((+(((/* implicit */int) var_5))))));
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_10] [i_10])), (var_9)))))));
                        var_26 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) 0ULL)) ? (arr_24 [i_5] [i_5] [i_10] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) - (((/* implicit */long long int) ((((/* implicit */int) (short)-28836)) - (((/* implicit */int) (_Bool)1))))))) < (((/* implicit */long long int) ((int) min(((unsigned short)13441), (((/* implicit */unsigned short) var_5))))))));
                    }
                } 
            } 
            arr_37 [i_9] [i_5] [i_5] = ((/* implicit */unsigned int) (-(var_11)));
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_40 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_1)) << (((/* implicit */int) (_Bool)1))))))) < (((((unsigned long long int) (unsigned char)35)) << ((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))));
        arr_41 [(_Bool)1] [(_Bool)1] &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_39 [i_12]))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (254380905) : (((/* implicit */int) (unsigned short)0))))))), ((-(((unsigned int) var_10))))));
    }
    var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(491824927)))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)28838)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1969113398U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)73)) ^ (((/* implicit */int) var_5)))))) : (((/* implicit */int) (signed char)73))));
}

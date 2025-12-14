/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47466
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [(unsigned char)0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 1326057838);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */long long int) (((~(798219118))) / (min((-1787289022), (-798219118)))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0 + 2] [i_3 - 4] [i_3])))) ? (-1847543109880453767LL) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_3])), (arr_2 [i_0])))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) var_2))))))))))));
                        }
                    } 
                } 
                arr_10 [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(arr_3 [i_0 + 2] [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (1860727507U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) == (950455138861193922LL)))))))));
                var_22 += ((/* implicit */signed char) ((short) (signed char)4));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_4 = 4; i_4 < 23; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 24; i_6 += 1) 
            {
                for (unsigned short i_7 = 4; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((max((max((((/* implicit */long long int) var_19)), (var_9))), (((/* implicit */long long int) (+(((/* implicit */int) var_19))))))), (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_1)) : (-2485407701583731169LL))), (((/* implicit */long long int) ((int) (-2147483647 - 1)))))))))));
                        var_24 = ((/* implicit */unsigned int) (unsigned short)20779);
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)45298)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_4)) : (11575867047219533331ULL))) : (((/* implicit */unsigned long long int) ((int) var_13)))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [(unsigned short)0]))));
                        arr_21 [i_7] [i_7] [i_6] [i_7] [i_4] = ((/* implicit */int) (~(max((arr_13 [i_4 - 4]), (max((((/* implicit */unsigned int) var_17)), (var_14)))))));
                    }
                } 
            } 
        } 
        arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)29316)) ^ ((+(((/* implicit */int) (unsigned char)145))))));
    }
    for (int i_8 = 4; i_8 < 23; i_8 += 1) /* same iter space */
    {
        var_26 |= ((((/* implicit */_Bool) 2228973869U)) ? (-798219115) : (((/* implicit */int) (signed char)-35)));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 3; i_9 < 23; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-31205))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -950455138861193922LL)) ? (((/* implicit */int) (signed char)-40)) : (((((/* implicit */int) (unsigned char)14)) | (((/* implicit */int) var_12))))))) : (((((/* implicit */long long int) 388212578U)) / (-950455138861193935LL)))));
            var_29 = min((((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -950455138861193935LL)) ? (((/* implicit */unsigned long long int) var_14)) : (18234657568129305015ULL)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (var_12))))))));
        }
        arr_29 [i_8] = ((/* implicit */int) 1070977685910652636LL);
    }
    for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)-36), ((signed char)11)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_1) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-1111))))));
        /* LoopNest 3 */
        for (long long int i_11 = 4; i_11 < 24; i_11 += 1) 
        {
            for (long long int i_12 = 3; i_12 < 22; i_12 += 1) 
            {
                for (unsigned int i_13 = 2; i_13 < 22; i_13 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) 4294967295U))) : (((((/* implicit */_Bool) 1196021974)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))))));
                        var_32 += ((((/* implicit */_Bool) (~(arr_31 [i_13 - 1])))) ? (((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_12 + 1] [i_12 + 1])) ? (min((((/* implicit */long long int) (unsigned char)241)), (8077073425275712866LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_18)) / (arr_27 [i_13])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))));
                    }
                } 
            } 
        } 
        arr_39 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (var_14)))) ? (3983712356U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_14 = 2; i_14 < 14; i_14 += 1) 
    {
        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            {
                var_33 = ((/* implicit */unsigned int) var_2);
                arr_44 [i_14 + 1] = ((/* implicit */_Bool) ((int) var_8));
                arr_45 [i_14] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_6)))));
                arr_46 [i_14] [10] [i_15] = ((/* implicit */unsigned char) 3057413057U);
            }
        } 
    } 
}

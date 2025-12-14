/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52780
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
    var_10 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))))))) >= (((1ULL) / (((/* implicit */unsigned long long int) (-(var_6)))))));
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) min((var_7), (((/* implicit */unsigned short) (unsigned char)238)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | ((+(0ULL)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((short) arr_8 [i_2 - 2] [i_2]);
                    arr_9 [(unsigned short)1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) 779218691)), (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-43)) | (((/* implicit */int) (unsigned char)175)))))))) ? (arr_8 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175)))));
                    var_13 = ((/* implicit */short) var_5);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 812093752U))))) == (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_3] [i_4] [11LL] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned char)175))));
                                var_15 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned short i_9 = 3; i_9 < 11; i_9 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (!(((7914189654324093144ULL) >= (((/* implicit */unsigned long long int) (+(arr_8 [i_9] [i_9]))))))));
                        var_17 = ((/* implicit */unsigned long long int) var_4);
                        var_18 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)67)) && (((/* implicit */_Bool) var_1)))))) <= (var_8))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (-(((3557041641321027539ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_0)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_10] [0]))))) & (((/* implicit */int) ((arr_18 [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))))))));
        arr_36 [i_10] = (~(((/* implicit */int) ((arr_32 [8ULL]) != (((/* implicit */long long int) arr_13 [i_10]))))));
    }
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((532093480U) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((arr_5 [(unsigned short)8] [i_11]) + (var_8))))), (((/* implicit */unsigned long long int) arr_10 [i_11] [i_11] [i_11]))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                {
                    arr_46 [i_11] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_11] [9ULL]))))), (max(((+(3557041641321027539ULL))), (max((var_1), (((/* implicit */unsigned long long int) var_3))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_50 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) arr_10 [i_11] [(_Bool)1] [i_14]))));
                        arr_51 [i_11] [i_11] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) <= ((-(var_1)))));
                        var_23 = ((/* implicit */unsigned long long int) ((int) arr_27 [i_11] [i_12]));
                        arr_52 [7U] [i_11] [(short)1] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_13])))))));
                        var_24 = (~(4294967295U));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        arr_55 [i_11] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                        arr_56 [i_11] [i_12] [i_12] [1ULL] [i_12] [i_12] = ((/* implicit */unsigned int) var_9);
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_11]))))) / (((((/* implicit */unsigned long long int) var_3)) | (arr_16 [i_11] [i_12] [i_13] [i_13]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_26 [i_11] [i_12] [(short)0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_2))))))))));
                        var_26 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) (unsigned char)134)) ? (3094528749U) : (0U))) >> (((8739876184738471237ULL) - (8739876184738471234ULL)))))));
                        arr_59 [i_11] [3ULL] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_17 [i_11] [i_11]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_11]))))))));
                        arr_60 [i_16] [i_13] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_38 [i_11] [i_16])) : (((/* implicit */int) var_5)))))))));
                        arr_61 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(var_6)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [9] [i_13] [7])))))));
                    }
                    arr_62 [i_11] [i_13] [i_11] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_11] [i_12] [i_13])) | (((/* implicit */int) arr_34 [i_11])))))))), (var_4)));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_6)))));
        arr_63 [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)120)) >= (((/* implicit */int) var_7)))))) >= ((+(arr_16 [i_11] [i_11] [i_11] [i_11])))))) > (((((/* implicit */int) arr_33 [i_11] [i_11])) + (((/* implicit */int) var_9))))));
        var_28 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) ^ (min((var_0), (((/* implicit */long long int) ((2075201289) | (((/* implicit */int) var_7)))))))));
    }
}

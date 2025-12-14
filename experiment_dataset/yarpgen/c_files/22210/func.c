/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22210
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        var_12 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 782073833)), (18014123631575040ULL)))) ? (((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0]))))) : (min((19516562U), (((/* implicit */unsigned int) var_6)))))) | (min((((((/* implicit */_Bool) 4275450733U)) ? (19516562U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))), (max((((/* implicit */unsigned int) (unsigned short)19047)), (2145278917U)))))));
        var_13 = ((/* implicit */long long int) (-(arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_14 &= ((/* implicit */short) arr_4 [i_1 - 2]);
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) var_7))), (1469385515U)));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_16 ^= ((signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (4U))))));
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_9 [12] [4U] [i_4]), (arr_5 [i_4]))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (short)12);
    }
    for (int i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_13 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-24))))))))) < (arr_14 [i_5])));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)31744)) >> (((var_7) + (1631076035))))), (((int) (signed char)-24)))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */int) arr_15 [i_5])) >> (((var_1) - (8224101517355203772ULL))))))) : (203884408))))));
        }
        /* LoopSeq 2 */
        for (int i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
        {
            var_22 -= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) 4275450733U)), (-2814177533010508687LL)))))) ? (((/* implicit */long long int) arr_16 [i_7 + 1] [i_5] [i_5])) : (((((/* implicit */long long int) ((((/* implicit */_Bool) -203884408)) ? (((/* implicit */int) (unsigned short)33792)) : (((/* implicit */int) arr_12 [i_5 + 1]))))) / (var_8))))))));
        }
        for (int i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_7);
                        arr_26 [i_8] [i_9] = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) var_5))) < ((+(((/* implicit */int) (short)12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((min((((/* implicit */unsigned int) arr_25 [(short)8])), (3177704263U))), (min((((/* implicit */unsigned int) arr_19 [i_8])), (4275450723U)))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) 19516562U)), (4946536335716573666ULL))))) ? (((int) 4275450723U)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40280))) != (128257328U))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((((((int) var_8)) >> (((((((/* implicit */_Bool) arr_13 [2ULL])) ? (2233464949370085499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (2233464949370085483ULL))))) - (17922)))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 8679674366812425325ULL))));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2814177533010508686LL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (15983622537964926464ULL)));
                arr_29 [i_5] [i_8] [i_5] = (~(var_9));
            }
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_35 [i_5 + 1] [i_5] [i_5] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)3)), (((4294967295U) ^ (19516571U)))));
                        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-126))))) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12731)))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 0LL))) >= (var_0)))) : (((((/* implicit */int) (short)-13)) * (((/* implicit */int) var_2))))));
                        var_30 = ((/* implicit */short) ((long long int) (short)(-32767 - 1)));
                        var_31 = ((((((int) (~(((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [10U] [i_13]))))) + (2147483647))) >> (((/* implicit */int) min(((short)12), ((short)4064)))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((_Bool) ((2086844433U) == (arr_13 [i_5])))))));
                    }
                } 
            } 
        }
    }
    var_33 = ((/* implicit */int) (+(max((835888451U), (((/* implicit */unsigned int) ((short) (signed char)(-127 - 1))))))));
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32310))) & (19516543U))), (((/* implicit */unsigned int) var_5))))) ^ (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_3))))) ? (var_8) : (((/* implicit */long long int) 0)))))))));
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) ((unsigned short) var_2))))))));
}

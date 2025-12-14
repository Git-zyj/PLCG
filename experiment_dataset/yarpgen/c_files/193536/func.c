/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193536
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
    var_11 |= ((/* implicit */short) (~(((max((4893223462354241726LL), (((/* implicit */long long int) (signed char)63)))) * (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((var_9) - (1203823236U))))))))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((var_7) < (((/* implicit */unsigned long long int) var_9)))) ? (max((((/* implicit */long long int) var_6)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_14 &= ((/* implicit */long long int) (+(((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))));
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (var_8)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) < (((/* implicit */int) var_3))))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8))))) * (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (short)-1)))))))));
            arr_19 [3LL] [i_0] [i_5] = ((/* implicit */_Bool) var_7);
            var_16 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
            arr_20 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((var_0), (((/* implicit */unsigned long long int) var_8)))))) * ((((-(var_0))) >> ((((~(var_0))) - (16747803412694492568ULL)))))));
            var_17 ^= ((/* implicit */long long int) var_4);
        }
        arr_21 [i_0] &= ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) | (((((/* implicit */int) var_3)) | (((/* implicit */int) var_5))))))));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 24; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        arr_30 [i_0] [i_8] [i_7] [i_0] = var_9;
                        arr_31 [i_8] [i_7] [(unsigned char)11] [i_8] = (+(((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_10)))))));
                        arr_32 [24ULL] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_8)))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned char) var_7);
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_40 [i_9] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_6))));
            arr_41 [i_10] = ((/* implicit */short) var_5);
        }
        arr_42 [i_9] = ((/* implicit */unsigned long long int) ((var_1) != (var_7)));
    }
}

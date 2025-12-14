/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41061
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
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (850331830U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) < (((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned char)56)) ? (var_2) : (((/* implicit */unsigned long long int) var_12))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) ((_Bool) ((((((/* implicit */int) var_17)) + (2147483647))) >> (((2957516407U) - (2957516401U))))));
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)2673)) / (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_11)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned char) var_15);
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((var_10) ^ (((/* implicit */int) (unsigned char)86)))) : ((~(var_14)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1 - 2] [i_2] [i_4] [(unsigned char)4] = ((/* implicit */_Bool) (+(var_14)));
                                var_23 = ((/* implicit */short) var_2);
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1023)) ? (15059432110021791110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */unsigned short) ((2147483647) + (((/* implicit */int) (_Bool)0))));
                    var_26 = ((/* implicit */unsigned short) ((var_12) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) == (var_0))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            arr_24 [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)43810))))) : (15059432110021791110ULL)));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_33 [i_8] [(unsigned short)8] [i_8] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                            arr_34 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_4) : (var_4)));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) var_3)) ? (15059432110021791110ULL) : (var_4)))));
                            var_28 = ((/* implicit */int) min((var_28), ((-(((/* implicit */int) var_3))))));
                        }
                        arr_35 [i_7] [i_8] = var_3;
                        var_29 = ((/* implicit */short) ((var_6) - (var_14)));
                        arr_36 [i_7] [i_7] [(signed char)2] [(short)5] [i_8] [(short)5] = ((/* implicit */unsigned int) (~(var_14)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_39 [(unsigned short)11] [i_7] [(unsigned short)11] = ((/* implicit */signed char) var_6);
                arr_40 [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_5)) - (var_10)))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4)))) ? (((int) 2047U)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned char)63)))))))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) <= (var_14)));
                arr_41 [i_11] = ((/* implicit */unsigned short) var_10);
            }
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))));
                arr_44 [i_12] [i_7 + 2] [i_12] [i_7 + 2] = 3387311963687760525ULL;
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_33 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (15059432110021791110ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15059432110021791091ULL)) ? (var_15) : (((/* implicit */int) var_7))))));
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((15059432110021791091ULL) & (((/* implicit */unsigned long long int) ((var_7) ? (var_6) : (var_16)))))))));
        }
        var_35 = ((/* implicit */unsigned char) (-(var_8)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219990
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3078809356U)))) && (((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_0] [9ULL] [i_0] = ((/* implicit */unsigned long long int) (-(4514032553983717246LL)));
            arr_7 [(unsigned char)7] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < ((+(arr_3 [i_0] [i_0] [i_1]))))) && (((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [14ULL] [i_0] [14ULL]))) ^ (var_2))), (((/* implicit */unsigned int) (!(arr_0 [i_1])))))))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((4514032553983717246LL), (((/* implicit */long long int) ((unsigned int) ((_Bool) 3789358995006607180LL))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            arr_12 [i_0] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & (var_1)))) & (arr_3 [i_0] [i_2 + 1] [i_2 + 1]));
            var_11 += ((short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -4514032553983717235LL)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (signed char)86)))) < (((/* implicit */int) (signed char)-87))));
                        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 665392092)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (~((+((+(((/* implicit */int) (signed char)-107))))))));
                    arr_25 [i_7] [8] [8] [i_5] = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    arr_31 [i_5] [i_8] = ((/* implicit */unsigned int) (-(-3789358995006607180LL)));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~((~(arr_21 [i_5] [i_8] [i_9])))))) & (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-119))))) ^ (((unsigned long long int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 18446744073709551600ULL)))))) || (((/* implicit */_Bool) (+((-(((/* implicit */int) arr_34 [i_5] [i_8] [i_8] [i_9] [i_10] [i_9])))))))));
                                arr_38 [i_11] [i_10] [i_5] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(665392101)))) - (6725010107938367099ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */short) (unsigned char)83);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned short)3])))) + (2147483647))) << (((((/* implicit */int) ((11721733965771184516ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) - (1)))))) % ((+(var_2)))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1240184946))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}

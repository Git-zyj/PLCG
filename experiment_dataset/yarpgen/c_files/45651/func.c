/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45651
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
    var_10 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            var_11 = (((~(((/* implicit */int) var_9)))) << (((((/* implicit */int) (signed char)-104)) + (114))));
            var_12 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_0] [i_0]))));
            var_13 -= ((/* implicit */unsigned int) var_1);
            var_14 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            var_15 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3647209579U)) ? (((/* implicit */int) (signed char)62)) : (2147483647)));
        }
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 4) 
        {
            var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1])) : (var_6)))));
            arr_10 [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 967955343)) ? (((/* implicit */int) var_0)) : (arr_9 [i_0]))), (((((/* implicit */_Bool) arr_6 [i_3] [i_0])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_1))))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))) ? (((/* implicit */int) ((647757733U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) var_0)) : (max((var_4), (((/* implicit */int) var_9))))))));
        }
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_0 [0]))))) ? (((/* implicit */int) (unsigned char)13)) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (1165110762) : (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (148499746U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) (signed char)-31)))))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_13 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_6) : (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_4] [i_4])) <= (((/* implicit */int) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4]))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_20 += ((/* implicit */int) (short)-15);
            var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-126))));
            arr_16 [i_5] [i_5] [i_5 - 2] = ((((/* implicit */_Bool) arr_14 [i_4] [i_5 - 2])) ? (((/* implicit */int) arr_7 [i_4] [i_5 + 3])) : (((/* implicit */int) arr_5 [i_4] [i_5])));
        }
        var_22 -= ((/* implicit */signed char) (~((-(((/* implicit */int) (signed char)-65))))));
        var_23 = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 14; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))) : (((arr_8 [(signed char)15]) / (((/* implicit */unsigned long long int) var_6))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 4; i_8 < 16; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_7 + 3])))))));
                        var_26 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [14U] [i_6 + 1] [i_7 - 2] [i_4]))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6])) ? ((~(arr_8 [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_6] [i_7])) : (((/* implicit */int) arr_0 [i_4])))))));
                        var_28 = ((/* implicit */int) (((~(var_2))) * ((-(8733530440592268024ULL)))));
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)236))));
                        var_30 = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : ((+(var_3)))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 2; i_10 < 15; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) (-(236019029)));
                            var_32 += ((/* implicit */unsigned int) (+(var_4)));
                        }
                        for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
                        {
                            var_33 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_4] [i_6 + 4])) && (((/* implicit */_Bool) var_4)))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((arr_21 [i_6 + 2] [i_6 + 1] [i_7 - 1] [i_11 - 1]) ? (((/* implicit */unsigned long long int) var_3)) : (arr_8 [i_6 + 3]))))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((((/* implicit */int) arr_22 [i_4] [i_4])) * (((/* implicit */int) arr_22 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */int) var_9)) : (var_5)))));
                            var_36 = ((/* implicit */short) (signed char)-59);
                        }
                    }
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) != (var_2))))));
}

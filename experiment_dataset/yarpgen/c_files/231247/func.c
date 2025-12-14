/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231247
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
    var_20 = ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) ((signed char) ((((var_17) + (2147483647))) >> (((var_3) - (1030958566))))));
        var_22 = ((/* implicit */unsigned int) ((unsigned char) var_14));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) arr_2 [i_1 + 2] [i_1 + 2]);
        var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_9)))));
        var_25 ^= ((/* implicit */long long int) (~((~(((/* implicit */int) ((short) var_3)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) var_11)))))))) ? (var_3) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) var_17)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((signed char) arr_8 [i_2]))) : ((~((+(var_3))))))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 24; i_4 += 1) 
            {
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_18))))))) ? (((/* implicit */int) ((_Bool) (~(arr_7 [i_2]))))) : (min((((/* implicit */int) var_12)), (var_2)))));
            }
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (var_11)))) || ((!(((/* implicit */_Bool) var_17))))))) >> (((/* implicit */int) ((var_2) <= (((/* implicit */int) var_8)))))));
                    var_31 = ((/* implicit */unsigned char) (!((((-(((/* implicit */int) var_19)))) < (var_2)))));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_7 = 3; i_7 < 20; i_7 += 4) 
    {
        var_32 = ((/* implicit */unsigned int) var_10);
        var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_7 + 1] [i_7]))));
    }
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_22 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((int) var_9));
        var_34 |= ((/* implicit */short) ((unsigned short) ((arr_13 [0] [i_8] [i_8]) ^ (arr_13 [(signed char)0] [i_8] [i_8]))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        arr_26 [i_9] [i_9] = ((/* implicit */unsigned int) arr_16 [i_9] [i_9] [i_9] [i_9]);
        var_35 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))) ? ((((!(var_6))) ? (((/* implicit */int) ((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : ((~(((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (!(arr_16 [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) var_13)))));
        var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_16 [i_9] [i_9] [i_9] [i_9]))))));
    }
    for (unsigned char i_10 = 1; i_10 < 23; i_10 += 2) 
    {
        var_37 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_27 [i_10 - 1])) ? (((/* implicit */int) arr_27 [i_10 + 1])) : (((/* implicit */int) arr_27 [i_10 - 1]))))));
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10]))) : (var_1))), (min((var_1), (((/* implicit */unsigned int) var_10))))))) ? (var_17) : (((((min((var_17), (((/* implicit */int) arr_5 [i_10])))) + (2147483647))) << (((((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) arr_8 [i_10])))) + (1946687031))) - (16))))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30529
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45778))));
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-26))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_6)));
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((long long int) ((((arr_3 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) (short)2))))))));
        var_16 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_9)))) >= (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
        var_17 += ((/* implicit */unsigned int) max((((long long int) var_7)), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_1)))))));
        arr_5 [i_1] = ((/* implicit */short) ((int) ((arr_4 [i_1 - 1]) ? (var_9) : (((/* implicit */long long int) min((((/* implicit */unsigned int) 5)), (var_11)))))));
        var_18 = ((/* implicit */short) ((((long long int) -5)) >= (((/* implicit */long long int) max((-772386607), (((/* implicit */int) arr_4 [(unsigned char)10])))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_19 = ((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) (short)-24))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_20 = (!((!(((/* implicit */_Bool) var_0)))));
            arr_10 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((short) arr_6 [i_2]));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_7 [i_4])))), (((/* implicit */int) var_4)))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (short)38)) ? (((/* implicit */int) (short)34)) : (((/* implicit */int) (_Bool)1))))))));
            var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((var_7) != (5845714235238993708ULL))))))) <= (((((((/* implicit */unsigned int) -1379395015)) - (890811776U))) / (((/* implicit */unsigned int) ((arr_9 [i_2]) >> (((/* implicit */int) arr_7 [i_2])))))))));
        }
    }
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) 890811776U)) ^ (arr_14 [i_5]))) & (((/* implicit */unsigned long long int) -3268673173429657408LL))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_5 - 1] [i_6] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) var_6)) % (-1880737373851429568LL)))));
            var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) > (120122626)))), (((((((/* implicit */int) (short)32767)) != (((/* implicit */int) arr_7 [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((unsigned int) (unsigned char)27))))));
            arr_22 [i_5 + 1] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)69)), (((((((/* implicit */int) (short)-24)) + (2147483647))) << (((17173938348677810259ULL) - (17173938348677810259ULL)))))));
            var_25 += ((((unsigned long long int) 23)) > (min((((/* implicit */unsigned long long int) (short)28672)), (arr_14 [i_5 - 1]))));
        }
    }
    var_26 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), ((+(((/* implicit */int) (unsigned short)49911))))));
    var_27 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) var_6)) > (var_11))) ? (((((/* implicit */_Bool) var_4)) ? (-898868417856826093LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned short)65535))))))) - (((min((var_9), (((/* implicit */long long int) var_4)))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51251
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)210)) ^ (1048575)));
        var_20 = ((/* implicit */int) 7697160464627288979ULL);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-23055)), (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)195))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) ((1895931202U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))));
                        var_22 = ((((/* implicit */_Bool) ((unsigned long long int) 3670492525U))) ? (((((/* implicit */_Bool) (signed char)-91)) ? (var_2) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))))));
                        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) == (-1713907283))))))) ? (((/* implicit */int) ((signed char) ((unsigned long long int) 0ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (18446744073709551614ULL)))) ? (var_3) : (((/* implicit */int) (unsigned char)45))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [16] |= ((((/* implicit */_Bool) (unsigned char)54)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + ((~(arr_9 [i_0] [i_0] [4LL]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-31815))))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_24 [i_4] [6LL] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((arr_9 [0ULL] [i_5] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8] [i_7] [(signed char)11] [i_5])))))))));
                                arr_25 [i_4] [i_4] [i_6 + 1] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned char)9)), (var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-107)) <= (((/* implicit */int) arr_7 [i_4] [i_6 - 1] [i_4]))))) : (((((var_3) + (2147483647))) << (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_18))))))));
                                arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((((/* implicit */_Bool) (unsigned char)195)) ? (arr_23 [(unsigned char)6]) : (((/* implicit */int) (unsigned char)250)))) : (arr_22 [i_4] [i_6 + 1]))));
                                var_24 = ((/* implicit */short) (~(min((((/* implicit */int) var_10)), (((int) (unsigned char)19))))));
                            }
                        } 
                    } 
                } 
                arr_27 [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_19 [(unsigned char)12] [i_5] [i_5] [i_5]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (unsigned char)236)) && (((/* implicit */_Bool) var_7))))));
}

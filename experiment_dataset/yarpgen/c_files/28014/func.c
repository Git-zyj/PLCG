/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28014
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 += ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2 + 4] [i_2] [i_2 - 4]))))) ? ((~(((/* implicit */int) arr_5 [i_2 + 4] [i_2] [i_2 + 3])))) : (((/* implicit */int) ((short) arr_5 [i_2 + 1] [i_2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) / (((/* implicit */int) var_3))))) ? (arr_9 [i_2] [i_2 + 4] [i_4 + 3] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_6)) - (211)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)8804))))));
                                arr_13 [i_4] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 4953600793063386251LL)) & (0ULL))) - (((/* implicit */unsigned long long int) min((arr_4 [i_2]), (((/* implicit */long long int) arr_12 [i_4] [i_4] [i_4] [i_4])))))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4])) / (var_10)))))) : (((((/* implicit */_Bool) 4953600793063386252LL)) ? (-4953600793063386260LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2073)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-103)), (-143746178)))) && (((/* implicit */_Bool) var_0))))) & (((/* implicit */int) arr_1 [i_5]))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_19 [i_5] [i_5] [i_6] = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_5]))))) : (((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (11432236663961509669ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? ((+(((/* implicit */int) (short)-8796)))) : (((/* implicit */int) (signed char)0))))));
            arr_20 [i_5] [i_5] [i_6] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_6])))) ? (arr_15 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)8799)))))))));
        }
        arr_21 [i_5] = ((/* implicit */unsigned char) max(((~(arr_9 [i_5] [i_5] [i_5] [i_5]))), (arr_9 [i_5] [i_5] [i_5] [i_5])));
    }
}

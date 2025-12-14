/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208946
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) (short)-32764))))) && (((/* implicit */_Bool) var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)-50))) > (((/* implicit */int) var_2))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(arr_1 [i_0 + 2]))) + (arr_1 [i_0 - 3])));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)202))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (~(823511046)))))));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) (unsigned char)240))), (var_14)));
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (signed char)16))))) && (((/* implicit */_Bool) var_8)))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-2)) * (((/* implicit */int) arr_3 [i_3])))) + (1918590752)));
        arr_12 [i_3] = ((/* implicit */unsigned short) 1487387829);
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) arr_0 [i_4])))) || (((/* implicit */_Bool) ((long long int) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))))));
        var_23 += ((/* implicit */unsigned short) ((int) ((var_4) ^ (((/* implicit */int) (unsigned char)252)))));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_0 [i_6]), (arr_0 [i_6]))))));
                var_25 = ((((((((/* implicit */int) (short)20808)) + (((/* implicit */int) (short)29648)))) * (((/* implicit */int) ((signed char) (short)-5406))))) % (min((((/* implicit */int) ((unsigned short) 2633305943U))), (((((/* implicit */int) (unsigned short)39815)) / (((/* implicit */int) (short)-26825)))))));
            }
        } 
    } 
}

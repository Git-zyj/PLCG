/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222925
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */int) (((-(2073187370U))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) == (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1])) * (var_2))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_14)), ((short)-1964))))))))));
                var_16 ^= ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((unsigned long long int) 2221779930U));
    /* LoopNest 3 */
    for (unsigned char i_2 = 4; i_2 < 16; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (arr_10 [i_3] [i_4])))))) ? (((((/* implicit */long long int) 1686487758)) / (arr_13 [i_2 - 3] [i_3] [(_Bool)1]))) : (((/* implicit */long long int) var_6)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) ((unsigned char) (unsigned char)157));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)57202))));
                        arr_18 [i_5] [i_5] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1023)) ? ((-(arr_16 [i_2] [i_3 + 2] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_14 [i_4]))));
                    }
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212900
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned int) ((int) arr_0 [i_0] [i_1]))))))));
                    arr_9 [i_0] [i_0] [i_2] = 15U;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 4; i_6 < 10; i_6 += 1) 
                    {
                        var_19 = 4294967266U;
                        arr_20 [10U] [7ULL] [10U] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) var_8);
                        arr_21 [5U] [5U] [i_6] [5U] = ((/* implicit */unsigned char) ((int) (unsigned short)19276));
                        var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_5] [i_6 + 1] [10U] [i_6 - 2]))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_15)))) : (((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_12))))))));
}

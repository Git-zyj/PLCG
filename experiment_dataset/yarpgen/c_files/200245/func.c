/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200245
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((var_10), (var_4)));
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) max(((short)9442), (((/* implicit */short) arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_2])))))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0])) : (1104957322))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_2 + 2])) && (((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)-9442)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 3; i_3 < 7; i_3 += 3) 
    {
        arr_11 [7] [7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_3 [i_3] [i_3 - 2])))))));
        var_12 = ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3 + 2] [(signed char)0])) ? (((/* implicit */int) (short)-9458)) : (((/* implicit */int) (short)9442))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_4]))));
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9426)) == (((/* implicit */int) arr_15 [i_4] [i_4] [i_5]))));
            var_15 = -4482536097569492340LL;
        }
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            var_16 += ((/* implicit */unsigned short) (~(arr_16 [i_6 - 1] [(unsigned short)4])));
            arr_18 [i_4] [i_6] = ((unsigned int) arr_16 [i_6 + 1] [i_6]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [i_7] = ((/* implicit */unsigned short) arr_12 [i_4]);
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4] [i_7])) ? ((~(((/* implicit */int) (short)16275)))) : (((/* implicit */int) ((signed char) (short)16286)))));
        }
    }
}

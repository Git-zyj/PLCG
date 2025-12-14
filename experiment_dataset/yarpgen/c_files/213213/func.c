/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213213
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
    var_16 = ((/* implicit */short) ((var_6) != (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) % (((/* implicit */int) var_5)))) | (((/* implicit */int) (!(var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) 536870911U)))) ? (((((/* implicit */_Bool) var_13)) ? (536870913U) : (1708875780U))) : (((/* implicit */unsigned int) (~(arr_6 [i_0]))))))));
                    var_17 = ((/* implicit */_Bool) arr_0 [i_1]);
                }
            } 
        } 
        var_18 |= ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32832))) ^ (var_7))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))), ((!(arr_5 [i_0])))));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_3] [i_4 - 1] [i_3 + 2])) > (((/* implicit */int) arr_2 [i_4] [i_4 - 2] [i_3 + 1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5] [i_4 + 1] [i_3 + 2])) >= (((/* implicit */int) arr_2 [i_4 + 2] [i_4 + 1] [i_3 + 1])))))));
                    var_20 = ((/* implicit */unsigned char) arr_15 [i_5] [(_Bool)1] [i_5] [i_5]);
                    arr_16 [i_4] [i_4] [i_4] |= ((((arr_9 [i_3] [i_4 - 1]) << (((/* implicit */int) var_3)))) != (((((var_7) ^ (arr_14 [i_4] [i_3 + 3] [i_5]))) % (((/* implicit */unsigned long long int) 536870912U)))));
                    arr_17 [(_Bool)1] [i_5] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_3 + 2]))))) < (3758096385U)));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_8);
    var_22 = ((/* implicit */short) (+(((/* implicit */int) ((short) (short)(-32767 - 1))))));
}

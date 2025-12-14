/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40245
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) min(((~(3042727639U))), (3677052945U)));
                var_16 = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0] [i_1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((2112178316U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)20))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551597ULL)) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17457))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_18 |= ((/* implicit */_Bool) var_8);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 0ULL))));
                    arr_13 [i_3] [i_4] [6LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17457)) ? (((/* implicit */unsigned int) (-(12288)))) : (((((/* implicit */_Bool) arr_10 [i_3 + 1] [(signed char)10] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((+(644420158U)))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 280027228)) ? (((/* implicit */unsigned long long int) 88019916U)) : (18446744073709551615ULL)));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)13055))));
                        arr_16 [i_2] [2U] [i_2] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3 - 2] [i_5] [i_5] [i_4]))) : (3441705974U))))));
                    }
                    var_22 = ((/* implicit */long long int) (unsigned char)64);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17457)))));
        arr_19 [i_6] [i_6] = ((/* implicit */_Bool) 61650162);
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_6] [i_6] [i_6]))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((-650975812) / (((/* implicit */int) (signed char)32)))))));
    }
}

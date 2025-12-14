/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194320
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned short) 1286020238);
                                var_14 = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_6 [i_0] [i_0] [i_0]))))));
                    var_16 = ((/* implicit */long long int) max((var_16), ((-(max((var_12), (((/* implicit */long long int) -1286020239))))))));
                }
            } 
        } 
        var_17 &= ((/* implicit */short) (~((-(-4733748178784819684LL)))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) | ((~(var_7)))));
            arr_20 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-13))))) ? ((-(var_12))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)24681)))))));
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_5] [i_6]))));
        }
        var_20 ^= ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) -1286020238)))))));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-24682))) > (max((var_7), (arr_18 [i_5] [i_5] [i_5])))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) 3261142147U)) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-779)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)35)) % (((/* implicit */int) (short)-22931))))) * (((((/* implicit */_Bool) 1033825149U)) ? (((/* implicit */unsigned int) 0)) : (2574464050U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((3272840811U) >= (((/* implicit */unsigned int) -1252029909))))) % (((/* implicit */int) ((((/* implicit */long long int) var_2)) < (7284238360711338238LL))))))))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24682)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)104))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)0))));
}

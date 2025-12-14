/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215939
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_11 += ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))));
        var_12 -= ((((/* implicit */_Bool) (unsigned char)220)) && (((/* implicit */_Bool) (short)-31847)));
        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_1 [i_0]))))) != (arr_0 [i_0 - 1])));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_14 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)193))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (343063299U)))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (var_7))))));
            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) + (arr_0 [i_1])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) (short)-16384))))))));
        }
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)81))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) arr_4 [i_0 + 2])))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned long long int) var_2)))));
                var_20 += ((/* implicit */short) var_3);
            }
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_21 ^= ((/* implicit */short) ((unsigned long long int) (+(var_7))));
                var_22 ^= ((/* implicit */unsigned short) 4294967278U);
                var_23 ^= ((/* implicit */unsigned char) ((var_10) - (((/* implicit */unsigned long long int) var_8))));
            }
            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0])) : (-1745587890)));
            var_25 -= ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 - 3] [i_0 - 3])))));
        }
    }
    var_26 -= ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (short i_7 = 4; i_7 < 18; i_7 += 2) 
            {
                {
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) arr_19 [i_6] [i_6] [i_5 - 1])))))))) + (((/* implicit */int) arr_13 [i_5]))));
                    var_28 &= ((/* implicit */short) max((((((((/* implicit */int) var_4)) == (((/* implicit */int) arr_14 [i_5 + 1])))) ? ((((_Bool)1) ? (9086150075066190726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16361))))) : (((/* implicit */unsigned long long int) ((-6954589215304132752LL) | (((/* implicit */long long int) -1299348784))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_7 - 3] [i_6] [i_5 - 1])))))));
                    var_29 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)180)) << (((2513332469U) - (2513332456U)))));
                    arr_21 [i_7] [i_6] [i_7 - 4] [i_7] |= ((/* implicit */_Bool) (short)-29944);
                }
            } 
        } 
    } 
    var_30 -= ((/* implicit */signed char) ((min((2839344361184988821ULL), (9002801208229888ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            {
                var_31 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) -4998587798216040122LL))))));
                var_32 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)175)))))));
            }
        } 
    } 
}

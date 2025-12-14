/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46222
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (-(arr_1 [17ULL] [i_1])));
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((arr_0 [i_0 - 2] [i_1]) | (((/* implicit */unsigned long long int) var_4)))))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 1]))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) (~((-9223372036854775807LL - 1LL))));
        var_17 *= ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-30020)) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (-1LL))) > (min((((/* implicit */long long int) (_Bool)1)), (-2817586456506084895LL))))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1225442727)))) ? ((~(((/* implicit */int) ((signed char) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14))))))))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_3]))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)12512)))));
        var_22 = (+((~(-1225442727))));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_23 ^= ((/* implicit */unsigned long long int) (((~(((3461417429U) ^ (((/* implicit */unsigned int) 1225442736)))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_6 = 2; i_6 < 7; i_6 += 2) 
        {
            var_24 ^= ((/* implicit */short) arr_13 [i_5] [i_6 + 4]);
            arr_19 [0ULL] [i_6 - 2] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)0));
            var_25 &= (+(((arr_9 [9]) - (((/* implicit */unsigned long long int) 1225442726)))));
            var_26 = ((/* implicit */int) min((var_26), ((+((~(((/* implicit */int) var_0))))))));
        }
        for (unsigned char i_7 = 2; i_7 < 10; i_7 += 4) 
        {
            var_27 += ((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (short)-12512))));
            var_28 = ((/* implicit */long long int) 1225442727);
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_25 [(_Bool)1] [5] = ((/* implicit */signed char) max(((+(-1225442728))), ((-(((/* implicit */int) arr_5 [i_5]))))));
            var_29 ^= ((/* implicit */unsigned int) ((unsigned long long int) (~(arr_9 [i_8]))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5])))))))));
            arr_26 [i_8] [i_8] = ((/* implicit */_Bool) var_9);
            var_31 ^= ((/* implicit */int) (signed char)-80);
        }
        var_32 = ((/* implicit */int) (~(3461417411U)));
    }
}

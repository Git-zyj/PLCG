/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241012
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    arr_9 [2U] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_0)))) ? (var_10) : ((-(((arr_5 [(unsigned short)1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-70)) ? (3547818509U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51934)))));
                }
                var_21 = ((/* implicit */unsigned char) max((((int) arr_2 [i_0])), (((/* implicit */int) ((unsigned char) arr_6 [2] [i_1] [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) (signed char)-1)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_7)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((((((/* implicit */_Bool) (signed char)0)) ? (var_12) : (var_0))) - (23088510U))))) : ((-(((/* implicit */int) ((unsigned short) var_0)))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))));
    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_16)))))) ? (min((((/* implicit */unsigned int) ((unsigned char) var_19))), (((unsigned int) var_5)))) : (((unsigned int) -8935967405715874052LL))));
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_12 [i_3]))));
        var_26 = max((((/* implicit */unsigned int) var_18)), (min((((/* implicit */unsigned int) var_2)), (8191U))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    var_27 ^= ((/* implicit */unsigned int) ((unsigned long long int) var_19));
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) ((6343400709918565775LL) >> (((((((/* implicit */int) var_19)) >> (0ULL))) - (12350))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                    }
                }
            } 
        } 
        arr_26 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [11ULL] [i_4]))) : (arr_20 [i_4] [i_4] [i_4]))))));
        arr_27 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (4294959105U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)0))))));
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_8])) ? (((/* implicit */int) arr_15 [10U])) : (((/* implicit */int) arr_15 [i_8])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_8])) : (((/* implicit */int) var_16))))));
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_13 [i_8]);
        arr_32 [8LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -698930734)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-14972))));
    }
}

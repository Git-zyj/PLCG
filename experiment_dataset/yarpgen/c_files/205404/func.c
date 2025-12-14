/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205404
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
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (1232854026387087741LL)))), (min((var_9), (((/* implicit */unsigned long long int) var_3))))))));
    var_17 &= ((((/* implicit */_Bool) ((((var_12) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (_Bool)1)) : (max((2147483632), (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) ((short) var_9))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (arr_3 [i_0] [i_1])));
                        var_20 &= ((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1 - 1]));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */int) (((_Bool)1) ? (-7418162587731184204LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)62))));
            arr_19 [i_4] [i_5] = ((/* implicit */unsigned int) (-(6278397487874345985ULL)));
            /* LoopSeq 1 */
            for (short i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                arr_22 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_5] [i_5]) ^ (var_4)))) ? (((/* implicit */int) (short)-11673)) : (((((/* implicit */int) arr_6 [i_4] [i_5] [i_6])) & (((/* implicit */int) arr_20 [i_4] [i_5] [i_6]))))));
                var_24 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_1 [i_6 + 1]))))));
                arr_23 [i_4] [i_5] [i_4] = ((((/* implicit */int) arr_1 [i_6 + 2])) < (((/* implicit */int) arr_1 [i_6 - 1])));
            }
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) / (((((/* implicit */_Bool) ((unsigned short) arr_8 [i_7]))) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) max((arr_20 [i_7] [i_7] [i_7]), ((_Bool)1))))))));
        arr_27 [(short)10] |= ((/* implicit */unsigned short) 1007820736U);
        arr_28 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7]))) : (4294967278U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_0 [12ULL]))))))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_7] [4U] [i_7])) ? (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))) : (18446744073709551588ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) arr_8 [i_7])) : (((/* implicit */int) (_Bool)1))))))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13926)))) <= (((((-136325521) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_14))))))));
}

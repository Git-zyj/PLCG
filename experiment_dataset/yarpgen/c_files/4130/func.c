/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4130
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (-((-(arr_1 [4LL] [i_0 - 1])))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_8))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_16 &= ((/* implicit */signed char) arr_4 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */int) var_1);
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) arr_7 [i_1] [i_2])))))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((2855925384850686109ULL) > (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))), (((arr_4 [i_1] [i_2]) ? (2199702441U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])))))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_13 [i_1] = ((/* implicit */unsigned short) var_4);
            var_19 ^= ((/* implicit */unsigned int) ((1186899443548994656ULL) ^ (((/* implicit */unsigned long long int) var_13))));
            var_20 = ((/* implicit */signed char) var_8);
            arr_14 [11U] [i_3] = ((/* implicit */_Bool) ((2199702441U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_21 = ((/* implicit */int) ((_Bool) ((((long long int) var_5)) / (((/* implicit */long long int) arr_12 [i_4] [i_4])))));
            arr_18 [i_1] [13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) ((var_6) > (((/* implicit */unsigned long long int) arr_12 [i_1] [i_4]))))), (max((((/* implicit */short) arr_11 [i_4])), (var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) << (((var_0) + (7195890957838398802LL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) / (var_6))) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) var_7))));
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) var_13);
        }
        for (unsigned int i_5 = 4; i_5 < 19; i_5 += 2) 
        {
            arr_22 [i_5 - 4] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1935865509U)))))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_33 [i_7] [i_7] [i_6] [i_5] [i_1] &= ((/* implicit */long long int) arr_3 [i_1]);
                            var_22 = ((/* implicit */unsigned char) (((!(arr_27 [i_8 + 2] [i_7] [i_1] [i_6] [i_5] [i_1]))) ? (((/* implicit */unsigned long long int) var_7)) : (4006014625527588190ULL)));
                            var_23 ^= ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (var_3)))), (var_9)));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65517)) || (((/* implicit */_Bool) (signed char)32))))), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2095264855U)) && (arr_4 [i_5 - 2] [i_5]))))) : (min((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1984565425U))))))))))));
            var_26 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_1])))))) ^ (((((/* implicit */_Bool) 14440729448181963423ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])) : (var_6))))));
        }
    }
    var_27 = ((/* implicit */long long int) ((var_0) >= (var_0)));
    var_28 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))) | ((~(((/* implicit */int) var_8))))));
}

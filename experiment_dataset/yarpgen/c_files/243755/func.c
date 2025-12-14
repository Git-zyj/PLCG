/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243755
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) arr_2 [i_0])))))) : (max((970139457715815947ULL), (((/* implicit */unsigned long long int) -2537964385237664773LL))))));
                var_16 = ((/* implicit */short) (unsigned short)4095);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */int) ((((-8688175036393545323LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-28668)) + (28700))) - (29)))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned char i_5 = 4; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) ((signed char) var_9));
                        arr_16 [i_2 + 2] [i_3] [i_4] [10U] [i_3] [i_2] = ((/* implicit */signed char) min((max((arr_14 [i_2] [i_2 - 1] [i_3] [i_2]), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) var_3))));
                        var_18 |= ((/* implicit */short) ((var_7) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28668)) ? (-6212985750618236352LL) : (2381536677213171165LL))))));
                        arr_17 [i_4] [i_3] [i_3] = (_Bool)0;
                    }
                } 
            } 
            var_19 = ((/* implicit */int) ((max((0ULL), (((/* implicit */unsigned long long int) -6212985750618236352LL)))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-9029)), (9223372036854775807LL))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                arr_20 [i_2 + 3] [i_3] [i_2 + 3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_6]) : (var_0)))) || (min((arr_0 [i_2]), (var_8)))))), (var_7)));
                arr_21 [1U] [i_3] [i_3] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((6484900040782524109LL), (((/* implicit */long long int) (_Bool)1)))) << (((var_7) - (6011122099139068702ULL)))))) || (((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)37), (((/* implicit */unsigned char) var_4)))))))))));
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((short) var_14));
                arr_26 [i_3] [i_3] [i_7] = ((/* implicit */long long int) max(((-(max((var_0), (((/* implicit */unsigned int) var_10)))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)28668)))) : (var_6)))));
                arr_27 [i_2] [i_3] [i_7] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), ((-(-1LL)))));
            }
            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 15; i_10 += 1) 
                    {
                        {
                            arr_36 [i_3 - 1] [i_3] = min((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_9 [5])), (2537964385237664773LL))) >> (((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-2537964385237664773LL))) + (2537964385237664781LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_8] [i_9]))) ^ (((unsigned long long int) 2147483647ULL)))));
                            var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-1)) : (arr_5 [i_2 + 2] [(_Bool)1])))));
                            arr_37 [i_2] [i_3] = ((/* implicit */int) ((long long int) (signed char)127));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)195)) ? (var_7) : (((/* implicit */unsigned long long int) var_1)))))) ? ((+(((/* implicit */int) min((arr_23 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) var_13))))))) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (short)-28668)), (var_6))))));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (unsigned char)11))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) 4294967295U)) : (max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_2 [i_2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1))))))));
                    var_25 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 5536808365685552199ULL)))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)51)), (4294967295U)));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((((((((var_4) ? ((-2147483647 - 1)) : (((/* implicit */int) var_13)))) + (2147483647))) + (2147483647))) << (((((((/* implicit */int) ((signed char) var_11))) + (119))) - (6))))), (((/* implicit */int) (short)0)))))));
                    var_28 = ((var_10) | (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_30 [i_3] [i_3 - 1] [2] [i_3])))));
                    arr_45 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((arr_22 [i_2] [i_2 + 3] [i_2]), (((/* implicit */short) (_Bool)0))))))));
                }
                arr_46 [i_2 + 3] [i_3] = ((/* implicit */int) var_4);
            }
        }
    }
    for (signed char i_13 = 4; i_13 < 20; i_13 += 1) 
    {
        var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((short) 2147483647))) ? (arr_47 [i_13 + 1]) : (((var_12) & (((/* implicit */int) (_Bool)1)))))) << (((int) (!(((/* implicit */_Bool) 429877982)))))));
        arr_49 [i_13 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (arr_47 [i_13 - 1])))) ? (((unsigned int) arr_47 [i_13 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    }
}

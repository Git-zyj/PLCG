/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3927
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
    var_18 = ((/* implicit */_Bool) 9223372036854775807LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] = (~(max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) << (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) 0LL)) ? (-9223372036854775797LL) : (arr_4 [i_1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_0] |= ((((((/* implicit */_Bool) 9223372036854775783LL)) ? (((/* implicit */long long int) 0)) : (9223372036854775765LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_0] [i_0] [i_1] [i_0]))));
                                arr_17 [i_0] = ((/* implicit */unsigned int) ((min(((_Bool)1), ((_Bool)1))) && (((/* implicit */_Bool) ((((-9223372036854775766LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775797LL)) && (var_17))))))))));
                                arr_18 [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) (-((~(((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_29 [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))))) ? (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -9223372036854775784LL)))))))) : (((((/* implicit */_Bool) 2364803588U)) ? (9223372036854775772LL) : (arr_11 [i_5] [i_6 - 3] [i_5] [i_5])))));
                                arr_30 [i_7] [i_6 - 1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(max((arr_26 [i_1] [(signed char)20] [i_1] [i_1]), (((/* implicit */int) ((short) arr_0 [i_0])))))));
                                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_27 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 2]), (((/* implicit */unsigned short) ((_Bool) var_17)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            arr_36 [i_8] [i_1] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((-9223372036854775783LL), (var_0))), (((/* implicit */long long int) max((var_17), (arr_13 [(unsigned char)3] [i_8] [i_8] [(unsigned char)3] [(unsigned char)3]))))))) ? (min((0), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)25)))), ((!(((/* implicit */_Bool) 0)))))))));
                            arr_37 [i_1] [i_9] [(_Bool)1] [i_1] [i_1] = var_7;
                            /* LoopSeq 1 */
                            for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                            {
                                arr_40 [i_1] [i_8] [i_8] = ((2585664682U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                                arr_41 [i_0] [6U] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(12524901824054580910ULL)));
                            }
                            arr_42 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0])) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_15))))) : (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1581534595)) ? (9223372036854775784LL) : (var_5))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        arr_45 [i_11] [i_11] = ((/* implicit */unsigned short) var_11);
        arr_46 [i_11] [i_11] &= ((/* implicit */_Bool) ((int) arr_14 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]));
    }
}

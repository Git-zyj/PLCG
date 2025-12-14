/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27675
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [(unsigned char)0] [(unsigned char)0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36807)) ? (-1) : (((/* implicit */int) (unsigned char)63))));
                            var_12 *= ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)242)), (var_10)));
                            var_13 = ((/* implicit */signed char) arr_2 [i_2] [i_0]);
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((long long int) (signed char)30)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) >> (min((((/* implicit */unsigned int) (unsigned char)4)), (639383733U)))))) : (((((/* implicit */_Bool) min((-1LL), (arr_1 [i_0] [i_0])))) ? (var_3) : (((/* implicit */unsigned long long int) arr_1 [i_3] [i_1]))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_11))));
                            }
                            arr_14 [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (min(((+(814611123))), (((((/* implicit */int) (signed char)-31)) * (((/* implicit */int) var_8)))))) : (min((((((/* implicit */_Bool) -8068808001289051990LL)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (signed char)120)))), (14)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                            {
                                arr_24 [3] [3] [i_5] [i_1] [3] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)22))));
                                var_16 = (-((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_6] [i_0])))))));
                            }
                            for (int i_8 = 4; i_8 < 11; i_8 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((unsigned int) min((((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_8 - 3] [i_0] [i_8])), (((unsigned int) var_9)))))));
                                var_18 = ((/* implicit */signed char) ((unsigned int) var_7));
                                var_19 = ((/* implicit */unsigned char) ((((-28) <= (((/* implicit */int) arr_0 [i_1] [i_8 - 1])))) ? (((unsigned int) arr_0 [i_8] [i_8 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_8 - 4]))) == (6313920220786920054LL)))))));
                            }
                            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                            {
                                arr_30 [i_0] [8U] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6313920220786920070LL)) ? (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_28 [7] [i_1] [i_1] [i_5] [i_6] [i_1] [i_9]))) % ((-(((/* implicit */int) (unsigned char)214))))));
                                var_20 = arr_13 [i_9] [(_Bool)1] [i_9] [i_6] [i_9] [i_0] [i_9];
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_26 [i_0] [i_9] [i_9])))) ? (min((((/* implicit */unsigned int) -14)), (arr_26 [i_1] [i_1] [i_1]))) : (min((arr_26 [(signed char)6] [i_0] [(signed char)6]), (arr_26 [i_1] [i_9] [i_1])))));
                                var_22 |= ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) ((((_Bool) arr_15 [i_0] [i_1] [i_6] [i_6])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16257))) != (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) (signed char)-20)) + (50))))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2843617409U)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (signed char)-25))));
                            }
                            arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-6313920220786920071LL) - (((/* implicit */long long int) (~(arr_15 [5] [i_1] [i_1] [i_6]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_6))))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [8LL] [8LL] [8LL])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_27 [i_1] [i_1]))))));
                            var_24 = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) -1060032457);
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) -1989667143)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) : (565270505U))));
    var_26 ^= ((/* implicit */long long int) var_6);
    var_27 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_10))));
}

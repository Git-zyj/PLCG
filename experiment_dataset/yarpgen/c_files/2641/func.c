/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2641
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
    var_11 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((long long int) max((((/* implicit */long long int) (unsigned char)12)), (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_1] [i_1]) : (var_4))))));
                var_13 += ((/* implicit */int) (unsigned char)12);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_4 [i_2 - 1]))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 19; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 134217727LL)) ? (66846720LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned char) ((arr_6 [i_4] [18LL]) / (max((((arr_8 [i_4]) * (-1LL))), (((2251799813684736LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))));
                        var_17 = ((/* implicit */long long int) var_9);
                    }
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_17 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (arr_6 [i_2] [i_2])))) || (((/* implicit */_Bool) var_6)))), (((((var_4) ^ (var_3))) >= (((((/* implicit */long long int) var_7)) | (var_4)))))));
                        arr_18 [i_3] = (-(16252928));
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) var_8);
                            var_19 = ((/* implicit */signed char) ((min((66846720LL), (-4LL))) != (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                            var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)108)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_10)) ? (-9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203)))))));
                        }
                        arr_25 [i_2] [i_3] [i_3] [i_7] = ((/* implicit */signed char) (((+(max((((/* implicit */long long int) var_0)), (9223372036854775807LL))))) / (((arr_7 [i_2 + 2] [i_4 + 3]) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        arr_26 [14LL] [i_7] [14LL] [i_3] = ((/* implicit */signed char) ((min((((long long int) (-9223372036854775807LL - 1LL))), (6714657525089111874LL))) % (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (2147483647)))) ? (((((/* implicit */_Bool) var_5)) ? (1152921504606846976LL) : (var_6))) : (max((((/* implicit */long long int) (signed char)111)), (-1046950707663366437LL)))))));
                        arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -66846721LL)) ? (-2LL) : (-5338110355914553794LL))), (((/* implicit */long long int) ((unsigned char) var_10)))));
                    }
                }
            } 
        } 
        arr_28 [i_2] = ((/* implicit */long long int) (((~(var_5))) == (8647319764851001269LL)));
    }
}

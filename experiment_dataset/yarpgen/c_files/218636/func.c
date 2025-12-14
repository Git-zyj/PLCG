/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218636
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
    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (unsigned short)59405)) : (((/* implicit */int) (unsigned short)65528)))) : (((/* implicit */int) ((var_6) < (var_5)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (min((16533225946874889873ULL), (((/* implicit */unsigned long long int) (unsigned short)12)))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */signed char) min((var_5), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 24; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_4 [i_2] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 2])) ? (arr_9 [i_1 - 1]) : (arr_9 [i_1 + 1]))))));
                    var_17 = ((/* implicit */_Bool) arr_8 [(unsigned short)20] [(signed char)6]);
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_11 [i_1] [i_1] [i_2] [17U]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) != (((((/* implicit */_Bool) 0ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) ? (-1) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7644))) : (16533225946874889873ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)42))))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = ((/* implicit */int) max((((signed char) (~(((/* implicit */int) var_8))))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-32756))) < (17592186044416LL))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) (((~(((/* implicit */int) var_8)))) < (((((/* implicit */_Bool) (short)-7644)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)76))))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233761
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (max(((unsigned short)57763), ((unsigned short)57744))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [(signed char)6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)2963))))), (min(((unsigned short)38240), ((unsigned short)65535))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_2)))), ((-(((/* implicit */int) (signed char)0))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_9 [i_1] [(signed char)6] = ((/* implicit */signed char) var_3);
        arr_10 [i_1] = (signed char)45;
    }
    for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((max((((/* implicit */int) (signed char)-34)), (var_11))), ((-(((/* implicit */int) (signed char)-32))))))), (min((-6607246362792713039LL), (((/* implicit */long long int) -885650242))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max(((unsigned short)11990), (min(((unsigned short)8192), (((/* implicit */unsigned short) (signed char)-26)))))))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57744))));
            var_16 = ((/* implicit */long long int) (signed char)3);
            arr_15 [i_3] [i_2] [i_2 + 1] = (unsigned short)3975;
            var_17 = ((/* implicit */long long int) max(((unsigned short)31), (((/* implicit */unsigned short) var_8))));
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), ((unsigned short)5563)));
            arr_19 [i_2] [18LL] [i_4] = var_0;
        }
    }
    var_19 ^= ((/* implicit */long long int) var_9);
}

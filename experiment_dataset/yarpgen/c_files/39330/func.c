/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39330
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
    var_17 = var_1;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_0])))))) * (((((/* implicit */_Bool) -2736608626822741642LL)) ? (((/* implicit */long long int) var_9)) : (var_8))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((3940649673949184LL), (((/* implicit */long long int) (unsigned short)60704))))))))));
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)4832)) : (((/* implicit */int) var_11)))) + (min((((/* implicit */int) (unsigned short)4831)), (var_13)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4500))) < (4611685468671574016ULL)))) != ((~(((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))) : ((-(((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) var_10)))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)151))))))) % (3854689007U)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        arr_12 [(unsigned short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2144405518)) ? ((+((~(((/* implicit */int) (unsigned short)65535)))))) : (min((2147483647), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252)))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((2893386296U) >= (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_11 [i_3])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))))))));
        var_22 = ((/* implicit */int) 1229065116614560609ULL);
    }
}

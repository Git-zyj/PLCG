/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239467
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */signed char) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) ((unsigned int) ((1073741823ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_3] [i_3])))))))));
                        arr_9 [i_0] [i_1] [i_0] [i_3 - 1] = ((/* implicit */unsigned int) min((((short) var_6)), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_2] [(_Bool)1])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (var_5)));
                    arr_14 [i_5] [i_4 - 3] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) (signed char)86)), (5194741378995744098LL))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (-(4294967294U)));
                                arr_19 [i_5] [i_5] [i_5] [i_6] [2] = ((/* implicit */unsigned char) ((int) min(((-(((/* implicit */int) (signed char)79)))), (((/* implicit */int) (signed char)-68)))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) (~(arr_16 [i_7])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) max((arr_17 [i_0] [i_0 + 1] [i_0] [(_Bool)0] [i_0] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [10ULL]))))))));
        var_19 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11694)))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_24 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2118349129))));
        arr_25 [6U] |= ((/* implicit */short) ((unsigned short) max(((~(((/* implicit */int) (signed char)67)))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_11)))))));
        var_20 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (3750225611277130926ULL))), (((/* implicit */unsigned long long int) ((_Bool) ((5194741378995744098LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
    }
    var_21 = ((/* implicit */int) var_2);
    var_22 = (-(((long long int) (-(-157804966)))));
}

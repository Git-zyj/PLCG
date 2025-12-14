/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231571
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
    var_20 = ((/* implicit */_Bool) min((max(((((_Bool)0) ? (var_14) : (((/* implicit */int) var_17)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-52)) > (((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [10ULL] [10ULL] &= ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (short)16381))));
                var_21 ^= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)61)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 2] [i_0] = ((/* implicit */long long int) (~(var_5)));
                            arr_12 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3 + 2] = ((/* implicit */int) 14051558708602713595ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(65532)))))) ? (((18446744073709551597ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)9))))))) : (((/* implicit */unsigned long long int) (+(-1137854516))))));
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 7; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min(((~(((/* implicit */int) (short)1)))), (-13))))));
                        var_24 = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-62))))) - (min((((/* implicit */unsigned int) var_14)), (var_15))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)38)) - (((/* implicit */int) (_Bool)0)))), (((1137854539) - (((/* implicit */int) (_Bool)1)))))))));
                        var_25 = ((/* implicit */short) max(((+((+(((/* implicit */int) var_3)))))), (min(((+(((/* implicit */int) (signed char)98)))), (((/* implicit */int) (signed char)25))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)11), ((signed char)102)))) ? (max((((/* implicit */int) (_Bool)1)), (var_14))) : (((((/* implicit */_Bool) 9748660451389800494ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) -1209409072))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (502145317))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(1943589591)))) < (min((var_2), (((/* implicit */unsigned long long int) (_Bool)1))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 7; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) -995245202572322300LL))));
                                arr_36 [i_8] [i_8] [i_9] [i_10 + 2] [i_4] [i_11] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

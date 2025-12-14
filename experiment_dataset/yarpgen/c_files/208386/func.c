/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208386
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) -576460752303423488LL)) ? (475789951581890330ULL) : (17970954122127661285ULL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_1]))) & (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2] [i_3])))) ? ((~(((/* implicit */int) (short)-2416)))) : (((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7589))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (7569387898402564538LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)7569)) * (((/* implicit */int) (unsigned short)26773))))) : ((~(475789951581890330ULL)))))));
                                var_18 = ((/* implicit */long long int) ((unsigned char) (unsigned short)34325));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((475789951581890330ULL), (((/* implicit */unsigned long long int) (short)7589))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)58078)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)));
}

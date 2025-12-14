/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231670
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-32)))) : (((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_1])) % (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [i_0] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [12])) ? (var_8) : (((/* implicit */int) (short)-30245))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */int) min((var_11), ((-(var_3)))));
                                arr_14 [i_0] [i_1] [i_1] [18ULL] [i_3 - 1] [i_4 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) -735337401)) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */int) (short)30881)))) == ((((~(((/* implicit */int) var_2)))) / (((/* implicit */int) ((_Bool) (short)-30882)))))));
                                arr_15 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_2 + 1])) ? (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1118))) : (arr_5 [7ULL] [i_0] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_2] [i_0] [i_2 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */_Bool) 1789418892);
                                arr_22 [i_0] [i_1] [i_0] [i_5] [i_0] = (((_Bool)0) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-80)), (var_9)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (-(var_3))))))), (var_5)));
}

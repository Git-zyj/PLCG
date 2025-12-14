/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246954
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) min(((+(((3736285908644425718ULL) ^ (3736285908644425733ULL))))), (((/* implicit */unsigned long long int) ((1023U) << (((/* implicit */int) (!((_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */_Bool) (signed char)-126);
                        var_14 &= ((/* implicit */_Bool) (-(((6ULL) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_8)))))));
                        arr_9 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (14710458165065125894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1])))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46980))))), (((/* implicit */long long int) ((((/* implicit */long long int) 4294966262U)) != (max((((/* implicit */long long int) var_9)), (var_7))))))));
                    }
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_0] [i_2 - 1]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((11333068516663874851ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_22 [i_6 - 1] [i_1] [i_4] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (2129876085436990404LL)))) & (((/* implicit */int) ((((/* implicit */int) var_5)) < ((~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((_Bool) 4294966263U)), (var_3))))) > (((((/* implicit */_Bool) 18446744073709551602ULL)) ? ((-9223372036854775807LL - 1LL)) : (8141796221675033819LL)))));
                }
                arr_23 [i_0] [i_1] = ((_Bool) arr_0 [i_1]);
                arr_24 [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_0] [8U])) << (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (_Bool)1);
}

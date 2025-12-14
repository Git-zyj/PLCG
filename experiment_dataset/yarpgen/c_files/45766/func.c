/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45766
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) 0LL)) % (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) 2886247698121097865LL)))))));
                var_13 = ((/* implicit */long long int) ((unsigned long long int) max((min(((unsigned short)31446), (((/* implicit */unsigned short) (signed char)-38)))), (((/* implicit */unsigned short) arr_4 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_14 = ((unsigned int) (~(((unsigned int) var_6))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((arr_20 [i_2 - 1] [i_2 - 1] [i_2] [i_3 - 1] [i_4]) < (arr_20 [i_2 + 2] [3] [i_2] [i_3 - 1] [(unsigned char)3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-65)) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (2886247698121097866LL))))))) : ((~(((/* implicit */int) arr_3 [i_2]))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_4] [i_5]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((_Bool) arr_10 [i_3 - 1] [i_3 - 1] [i_2 + 1])))));
                        var_18 ^= ((/* implicit */unsigned char) ((unsigned int) (~(34359672832LL))));
                        var_19 ^= ((/* implicit */int) (signed char)38);
                        var_20 ^= ((/* implicit */unsigned long long int) ((long long int) arr_3 [i_4]));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (+((~(2886247698121097865LL)))));
                    var_22 = ((((((/* implicit */_Bool) arr_14 [i_4] [i_3 - 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_4] [4ULL] [i_4]))) : (3912631945774788633ULL))) << (((34359672810LL) - (34359672769LL))));
                }
            } 
        } 
    } 
}

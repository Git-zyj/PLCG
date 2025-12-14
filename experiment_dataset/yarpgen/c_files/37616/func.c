/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37616
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
    var_16 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7771702202393361234LL)) ? (var_9) : (((/* implicit */unsigned long long int) arr_4 [i_1]))))) ? (var_7) : (((/* implicit */unsigned long long int) max((-1366845970), (((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1])))) : (min(((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1])))), (((((/* implicit */int) arr_6 [i_0])) ^ (var_11)))))));
                    arr_11 [i_1 - 2] [i_1] [i_1] [i_1] = ((/* implicit */short) var_2);
                    var_17 = ((/* implicit */signed char) max((var_11), (((/* implicit */int) min((((((/* implicit */int) arr_8 [i_2] [i_0] [i_0])) >= (1366845977))), (((_Bool) 2147483647)))))));
                    var_18 = ((/* implicit */long long int) ((8932034619479310472ULL) % (((unsigned long long int) -1366845977))));
                    var_19 = ((/* implicit */int) arr_1 [i_2]);
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)511)) / (var_2)))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))), (max((((((/* implicit */_Bool) (short)6989)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) : (12075510505404255588ULL))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3720734474U)) : (arr_3 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_20 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */int) -7771702202393361234LL);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((min((var_10), (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) arr_17 [i_3]))));
    }
}

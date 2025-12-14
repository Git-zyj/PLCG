/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219515
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
    var_14 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 16067498901786947929ULL))))), (((/* implicit */unsigned long long int) (unsigned char)31))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_11);
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-12))) <= (8515455318675761140LL)));
                    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((2379245171922603681ULL) <= (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10804151705186244716ULL)) ? (6792097682126259311LL) : (((/* implicit */long long int) 262143))));
    var_19 = ((/* implicit */signed char) var_0);
}

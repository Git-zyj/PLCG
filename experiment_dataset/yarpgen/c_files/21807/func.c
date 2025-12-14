/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21807
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)224))));
                    var_13 = max((((((/* implicit */int) arr_4 [i_1 - 1])) ^ (((/* implicit */int) arr_0 [i_1 + 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) 1861370545)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)224)) && (((/* implicit */_Bool) 13525278358727822525ULL))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((unsigned long long int) min((((/* implicit */unsigned int) 28)), (2476915087U))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-13)), (var_4)))) ? (var_5) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            {
                var_17 = (+(((((/* implicit */int) (signed char)-18)) / (1812519274))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)-13))))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) -725554797)) ^ (((long long int) var_2)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3 + 1] [(signed char)3] [i_5] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212302
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56606))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max(((-(((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)34566)))))), ((-(((/* implicit */int) ((_Bool) 460098163))))))))));
                                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) + (17992679496732705668ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((10734215101997886428ULL) == (14972549568711309118ULL)))), (max((((/* implicit */unsigned char) (_Bool)0)), (var_8)))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) min((((/* implicit */long long int) var_3)), ((+(((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) var_2))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_1);
    var_15 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_3))))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (max((min((3271798989833844190ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8))))))))))));
}

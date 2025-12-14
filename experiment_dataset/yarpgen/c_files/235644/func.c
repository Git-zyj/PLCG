/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235644
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                    var_12 = ((/* implicit */signed char) var_0);
                    var_13 &= (!(((/* implicit */_Bool) var_3)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (var_4)))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (-144115188075855872LL)))));
                        var_15 = ((/* implicit */unsigned char) (((~(2147418112))) < (((/* implicit */int) var_6))));
                        var_16 = ((/* implicit */long long int) (+(var_1)));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = var_7;
        var_17 ^= ((/* implicit */signed char) ((14ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_1)) != (706714682U)))))));
    }
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 41ULL)))))));
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (14ULL) : (var_2)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (14ULL)))) ? (((2305843009196916736LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
}

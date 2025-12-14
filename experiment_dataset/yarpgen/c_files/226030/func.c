/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226030
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
    var_14 = ((/* implicit */short) ((unsigned short) 303852403U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 9757045573278681556ULL);
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3404376015U)) ? (5775429369459343355ULL) : (((unsigned long long int) (unsigned short)1763))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 2058565618)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)95)) * (((/* implicit */int) (_Bool)1))))) : (2358861282U)));
                    var_19 ^= ((/* implicit */unsigned short) 2147483645);
                    var_20 = ((/* implicit */unsigned long long int) 2058565640);
                    arr_14 [i_2] [i_2] = ((/* implicit */signed char) (short)-24997);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 8113204262895053201LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49093))) : (9ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1590))))) % (((/* implicit */unsigned long long int) 2058565621))));
                            var_22 = ((/* implicit */long long int) max((var_22), (9223372036854775788LL)));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (short)-7678))));
                        }
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49118)) ? (((unsigned long long int) (signed char)-22)) : (((/* implicit */unsigned long long int) 9223372036854775785LL))));
                    }
                } 
            } 
        } 
    }
}

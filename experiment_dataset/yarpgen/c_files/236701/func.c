/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236701
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (unsigned short)25369);
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (signed char)-9));
                                var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)19)) ? (0U) : (2U)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) 23U);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-9)), ((unsigned char)194)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-10556))))) ? (18446744073709551615ULL) : (9896891906589316010ULL))) : (((/* implicit */unsigned long long int) -650853500))));
}

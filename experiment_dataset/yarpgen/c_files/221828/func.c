/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221828
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
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) var_4)) ? (-8426175929236167531LL) : (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) var_12)))) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 3])))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -8426175929236167531LL)) : (((47332392152752817ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))));
                                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)63)), (11729505119003696275ULL)));
                                var_18 = ((/* implicit */signed char) min((((long long int) (unsigned char)69)), (((/* implicit */long long int) (unsigned char)130))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((var_11), (((/* implicit */int) (unsigned char)27))))) % (min((-5930375442036326090LL), (((/* implicit */long long int) arr_11 [i_3]))))))) ? (min((((/* implicit */unsigned long long int) var_6)), (min((18399411681556798790ULL), (((/* implicit */unsigned long long int) (unsigned char)27)))))) : (min((var_8), ((~(18446744073709551609ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)6);
                var_20 = ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30653)))));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 15)), (4214887589U)));
            }
        } 
    } 
}

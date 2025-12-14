/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230663
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 476912758008346013ULL))) ? ((+(-549755813888LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]))));
                        var_16 = ((/* implicit */unsigned long long int) (unsigned char)24);
                        var_17 = ((/* implicit */short) min((16383ULL), (((/* implicit */unsigned long long int) (signed char)127))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        var_18 |= (signed char)127;
                        var_19 = ((/* implicit */int) ((unsigned long long int) (signed char)115));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)44650)))))));
                        var_21 ^= ((/* implicit */unsigned char) (signed char)-28);
                    }
                    arr_15 [i_0] [i_1 - 1] [i_1] [i_2] = (((!(((/* implicit */_Bool) (unsigned short)60)))) ? (4294967290U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) (unsigned short)31008)) : (-1456489194)))));
                    var_22 = ((/* implicit */short) max(((unsigned short)23904), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
                    var_23 = ((/* implicit */unsigned short) ((unsigned int) (signed char)-36));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min(((unsigned char)44), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_1)))))))));
}

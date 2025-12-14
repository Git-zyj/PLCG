/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245797
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_14 |= ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) (short)-23645)), (arr_0 [i_0]))), (arr_0 [i_0 - 2]))), (((/* implicit */unsigned long long int) (~((-(-258889034))))))));
        var_15 = ((/* implicit */short) 2241737);
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47207)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (0U)));
        arr_5 [i_1] = ((/* implicit */short) (+((~(min((1099867314U), (((/* implicit */unsigned int) (signed char)35))))))));
        var_17 = ((/* implicit */signed char) ((unsigned int) (unsigned char)50));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_8 [i_2] = (~((+(((/* implicit */int) (short)8791)))));
        arr_9 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 6989715738315835455ULL))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_18 = arr_12 [15];
        var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (351389573))))));
        arr_14 [i_3] [i_3] = arr_0 [i_3];
    }
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)39969);
    /* LoopSeq 1 */
    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) -8973651623388040550LL))))))));
        var_21 = ((/* implicit */unsigned char) ((1542697259145266176LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 93901558U)) ? ((+(((/* implicit */int) (unsigned char)208)))) : (((/* implicit */int) (short)29187)))))));
        arr_19 [i_4 - 2] = ((/* implicit */long long int) min((arr_0 [i_4 + 2]), (((/* implicit */unsigned long long int) (~(267512421U))))));
        var_22 = (!(((((/* implicit */int) arr_16 [i_4 + 2])) <= (((/* implicit */int) arr_16 [i_4 + 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8991)) ? (-4039282213105033673LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_4 + 2])))))) ? (min((3487191958820302903LL), (((/* implicit */long long int) (unsigned short)20866)))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))));
            var_24 = ((/* implicit */short) (-(((((var_5) << (((((/* implicit */int) (unsigned short)34357)) - (34347))))) | (var_11)))));
        }
    }
}

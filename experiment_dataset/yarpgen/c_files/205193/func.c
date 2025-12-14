/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205193
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
    var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) var_8)))) < (min(((-(var_1))), (((/* implicit */int) var_16))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) (((((+(-4169224819116998508LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (arr_3 [(unsigned short)3] [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-39)) & (var_4)))) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */int) var_0)))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) == (274877906943ULL))))) / (arr_5 [i_0] [i_1] [i_1])))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)-56))))))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(max((((/* implicit */int) var_5)), (arr_2 [(signed char)15])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)77)) % (((/* implicit */int) var_2)))) << (((arr_5 [i_3] [i_1] [i_3]) - (7353378737458970399LL)))));
                                var_21 = ((/* implicit */long long int) (((((-(((/* implicit */int) var_16)))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4] [i_0] [i_2] [i_0] [i_0])) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))) & (((/* implicit */int) ((((((/* implicit */int) var_0)) << (((((((/* implicit */int) var_9)) + (74))) - (20))))) > ((+(((/* implicit */int) arr_4 [i_2] [i_0])))))))));
                                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) var_11)))) <= ((~(((/* implicit */int) (unsigned short)19903))))))) % (((/* implicit */int) (signed char)26))));
                                var_23 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((var_1) & (((/* implicit */int) (unsigned short)24255))))) > (arr_5 [i_1] [i_2] [i_1]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0] [i_0])))))))), (arr_15 [i_0] [i_1] [i_0])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (short)(-32767 - 1))), (var_15)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45054
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
    var_13 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (1199409147)));
                    var_15 = var_7;
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_9))));
                    arr_7 [i_0 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)120))));
                    var_17 = ((/* implicit */int) max((((signed char) var_1)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 7; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (~((~(arr_14 [i_6 - 1] [i_6 - 1] [i_5 + 1] [i_5 - 1])))));
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)180))))) ? (((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) (unsigned short)63488)) - (63459))))) : ((~(((/* implicit */int) (unsigned char)231))))))) ? (((/* implicit */unsigned int) ((int) -1966358401))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1737200507) : (((/* implicit */int) (unsigned char)75))))) ? ((~(var_6))) : (max((((/* implicit */unsigned int) (unsigned char)32)), (263128020U))))));
                            var_20 = (unsigned char)252;
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) -6920715337078516885LL);
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    var_22 ^= ((/* implicit */unsigned short) min((((unsigned int) arr_9 [i_3] [i_3])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((((/* implicit */int) (short)2048)) >> (((arr_12 [i_3] [i_3] [i_4] [i_7]) - (577276899))))) : ((+(((/* implicit */int) (unsigned char)186)))))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_23 ^= ((/* implicit */int) min((min((arr_14 [i_3] [i_3] [i_7] [i_8]), (((/* implicit */long long int) (unsigned char)70)))), (((/* implicit */long long int) (+(var_8))))));
                        var_24 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)180)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) ((int) var_12))) : (((unsigned int) var_9)))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (short)174))))))) ? (arr_1 [i_4]) : (((/* implicit */int) (unsigned char)130))));
                    }
                }
            }
        } 
    } 
    var_26 = min((((/* implicit */int) var_4)), (min(((+(var_0))), (((/* implicit */int) var_11)))));
}

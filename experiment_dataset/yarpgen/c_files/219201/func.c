/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219201
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
    var_14 = ((/* implicit */unsigned char) max((((((10591987779333226301ULL) + (((/* implicit */unsigned long long int) 4294967295U)))) & (7854756294376325330ULL))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 += (+(((/* implicit */int) var_7)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [1ULL] [(signed char)8] = ((/* implicit */short) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (576828524) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [i_4]))))) | ((+(var_11)))))));
                                arr_13 [7ULL] [i_2] [i_2] [i_2] [7LL] = ((/* implicit */short) ((((/* implicit */int) var_1)) / (((/* implicit */int) ((11509734549488716985ULL) != (((((/* implicit */_Bool) 8796093022207ULL)) ? (arr_8 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)7678))))))) ? (((((4294967283U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)27757))))) << ((((~(var_9))) - (2143128058U))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)24))))) : ((~(4294967283U)))))));
                /* LoopNest 3 */
                for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_20 [i_5] |= ((/* implicit */unsigned long long int) 2147483643);
                                var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (~(var_10))))), ((-(((/* implicit */int) arr_16 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_2 [i_0] [i_0])))))))) / (((10591987779333226307ULL) >> (((var_11) - (6356765273954894864LL))))))))));
            }
        } 
    } 
}

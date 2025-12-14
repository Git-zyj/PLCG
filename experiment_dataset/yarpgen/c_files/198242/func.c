/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198242
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
    var_18 = ((/* implicit */unsigned char) 15097120331555495071ULL);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) & ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))) ? ((+(((((/* implicit */_Bool) 3349623742154056521ULL)) ? (3847094047778620569ULL) : (15097120331555495071ULL))))) : (((/* implicit */unsigned long long int) 1829026405))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) -1829026405)) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (408660757832190927LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))))) : (((((/* implicit */_Bool) (unsigned short)32678)) ? (3349623742154056541ULL) : (((((/* implicit */_Bool) 2318405451U)) ? (3095285365118293134ULL) : (18446744073709551615ULL)))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -1829026397)), (3349623742154056523ULL)));
                    arr_11 [i_0 + 2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max(((+(2325792987U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3349623742154056541ULL)) && ((_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = (_Bool)1;
                                var_21 = ((/* implicit */int) 3349623742154056536ULL);
                                arr_20 [i_0 + 1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3349623742154056530ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (_Bool)0))));
                                var_22 -= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6936577357868507346LL)));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27149)) ? (((15097120331555495097ULL) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10732))) : (3439348840U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56776))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

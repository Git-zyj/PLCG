/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221146
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
    var_10 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_8)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (~(2490051047155765197ULL)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) 2490051047155765197ULL))));
                        var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(var_6))))))));
                    }
                    var_13 = ((/* implicit */unsigned char) max((15956693026553786413ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3974766126U)), (6699561814841285327LL)))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) arr_8 [i_1] [i_0] [i_0] [i_1] [i_1] [i_2 - 1]))))) : (((/* implicit */int) ((unsigned short) 2490051047155765201ULL))))))));
                }
            } 
        } 
    } 
}

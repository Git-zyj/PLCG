/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198638
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) ^ (-4876582243887657461LL)))) || ((!(((/* implicit */_Bool) (unsigned char)16))))))), (arr_4 [i_1] [i_1])));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)53566), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) == (1425185048190259709ULL))))))) > (((/* implicit */int) var_12)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        arr_11 [24LL] [i_1] [10ULL] [10ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((long long int) ((unsigned char) (unsigned char)239))) : (((/* implicit */long long int) 154561894))));
                        arr_12 [i_0] [(short)21] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((3712463785515018313ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))) ? (max((-154561894), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 3] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)62351))))));
}

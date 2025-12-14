/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42634
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_1 + 2] = ((/* implicit */unsigned int) min((16677079449734468225ULL), (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 1] [i_0 + 2]), (arr_1 [(short)8] [i_0 + 1]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_4 [(signed char)1] [(signed char)1]), (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)54320)) != (((/* implicit */int) (unsigned short)65535)))))))))) > (max((((/* implicit */long long int) (short)-22988)), (-1LL)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -2921930310096317801LL)), (7ULL)));
                    var_22 = ((/* implicit */unsigned char) ((arr_7 [i_0 - 1] [i_2 + 1] [i_2 - 1] [(_Bool)1]) - (((/* implicit */unsigned long long int) (~(max((-2LL), (-2LL))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((1821523479455198664ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)0)))) ? (5420810454604028402LL) : (((/* implicit */long long int) 490081624)))))));
}

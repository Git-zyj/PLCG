/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215301
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
    var_12 = ((/* implicit */short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) 9451976947715411394ULL)) && (((/* implicit */_Bool) -1705086930)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */signed char) max(((~((+(((/* implicit */int) arr_2 [i_0] [i_1])))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [6LL])))))))));
                    var_14 += ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [(unsigned short)14] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (max(((~(1705086929))), (((/* implicit */int) ((((/* implicit */unsigned int) 1927755863)) < (427095193U)))))));
                    arr_8 [i_0] [(_Bool)1] [4LL] |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [10U] [i_1] [i_1])) ? (arr_6 [i_0] [i_1] [(unsigned short)12] [i_0]) : (3458764513820540928ULL))));
                    var_15 = ((/* implicit */unsigned long long int) -1927755880);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            {
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */int) min((arr_13 [i_3] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_4 - 1]))) ^ (14691559705902880919ULL)))))))));
                arr_15 [i_3] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    var_16 = (+((~((+(638840561))))));
    var_17 &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))) * (((/* implicit */unsigned long long int) var_2))));
}

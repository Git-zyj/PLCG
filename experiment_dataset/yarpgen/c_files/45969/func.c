/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45969
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((long long int) var_3)) != (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (signed char)126)), (arr_2 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -7775676035984764978LL);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (min((var_10), (((var_12) >> (((3567551523335027844LL) - (3567551523335027790LL))))))) : ((-(((((/* implicit */_Bool) var_7)) ? (var_4) : (var_3)))))));
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            {
                arr_15 [i_2] = ((((/* implicit */long long int) ((/* implicit */int) (short)22103))) * (min((((((/* implicit */long long int) ((/* implicit */int) var_15))) & (-35299448490621713LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_14)), (3622025887U)))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)6))))), (((((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4] [i_4])) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165)))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_9)))))));
                            var_21 = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
}

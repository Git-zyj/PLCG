/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246165
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2229153534399360190ULL)) && (((/* implicit */_Bool) -1327908953)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)56)) && (((/* implicit */_Bool) (signed char)-42))))) : ((~(((/* implicit */int) var_1))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (signed char)-121))))))));
    var_12 = ((/* implicit */unsigned char) (signed char)-67);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) min((-2147483638), (((/* implicit */int) var_9)))))), (min((min((((/* implicit */long long int) (short)15019)), (97554020310491893LL))), (((/* implicit */long long int) ((unsigned char) var_10)))))));
                            var_14 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)20984)), (((((/* implicit */_Bool) 1775151397)) ? (((/* implicit */int) (short)15211)) : (1574027209)))))) ^ (min((((/* implicit */unsigned long long int) -914842004)), (21ULL)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((16006447760435922231ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40)))))) || (((/* implicit */_Bool) (signed char)106)))));
                var_16 = (signed char)116;
                arr_8 [i_0] &= ((/* implicit */signed char) max(((-(((((/* implicit */int) var_7)) * (((/* implicit */int) var_0)))))), (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [17ULL]))))), (arr_6 [17] [17] [17]))))));
            }
        } 
    } 
}

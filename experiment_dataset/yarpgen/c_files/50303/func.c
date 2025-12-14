/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50303
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */long long int) var_6);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1666131761))));
                                var_21 = ((/* implicit */short) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)32755)))) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (arr_5 [8ULL] [i_1] [(unsigned short)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)13] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])))))) : (-8063994736566381954LL)))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1])) & ((~(var_18)))))), (min((arr_12 [i_1] [i_0] [i_0] [i_1] [i_0] [13] [i_0]), (((/* implicit */long long int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            {
                var_23 &= ((_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_15 [i_5]))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) % (((/* implicit */int) arr_17 [(unsigned short)16]))))))) ? (min((((/* implicit */unsigned int) var_11)), (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (_Bool)1))))) ? (-49442680) : (((/* implicit */int) min(((unsigned char)189), (((/* implicit */unsigned char) (_Bool)0))))))))));
            }
        } 
    } 
}

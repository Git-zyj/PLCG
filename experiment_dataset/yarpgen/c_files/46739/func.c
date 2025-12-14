/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46739
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
    var_13 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_11))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_10)) + (10556)))))))));
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2910234329U)))))) * ((((!(((/* implicit */_Bool) -473613921)))) ? (((((/* implicit */unsigned int) -1)) % (2526304609U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((-528808203302058131LL) + (528808203302058147LL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_0);
                                var_16 = arr_8 [i_0] [i_1] [i_4 + 1];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_2] = (+(((unsigned int) (unsigned char)0)));
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) > (((11128895069597233855ULL) >> (((((/* implicit */int) arr_12 [4U] [i_1] [i_2] [i_0])) - (227)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

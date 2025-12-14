/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37117
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))) || ((!(((/* implicit */_Bool) var_8))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_8 [i_1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)62))) || ((!(((/* implicit */_Bool) 2117035533116555915LL))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (var_9))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                    arr_11 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) != (var_9)))) : (var_2));
                    arr_12 [i_0] [i_0] [(unsigned short)14] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)))), (min((var_1), (var_5)))))) ? (((/* implicit */unsigned long long int) var_1)) : (var_7));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_10 = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_11 = ((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_1))) << (((((((/* implicit */int) var_0)) * (((/* implicit */int) var_8)))) - (1285057941))));
                                arr_20 [i_0 + 1] [i_1] [i_0] = ((/* implicit */short) var_5);
                                var_12 -= ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_3))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                                arr_31 [i_0] [i_1] [i_0] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) % (var_5)))) & (((var_4) ? (((/* implicit */unsigned long long int) var_1)) : (var_9)))));
                                var_14 |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_1))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                    var_16 = ((/* implicit */_Bool) var_5);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (17815673248350878892ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}

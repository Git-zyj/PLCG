/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243284
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
    var_11 = ((/* implicit */long long int) (unsigned char)189);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) max(((~(arr_2 [i_0] [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [i_1])))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (+(arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)9]))))))));
                                var_13 = ((/* implicit */short) arr_6 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) (!(var_6)))) : ((+(((/* implicit */int) (unsigned char)1))))));
                }
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (long long int i_6 = 4; i_6 < 7; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_15 -= ((signed char) (!(((/* implicit */_Bool) max((arr_8 [i_0] [i_1 - 1]), (var_5))))));
                                arr_26 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) var_5);
                                var_16 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)0));
                                arr_27 [i_6] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_0 [(_Bool)1]), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) max(((unsigned char)67), (((/* implicit */unsigned char) arr_16 [i_0] [4LL] [i_6] [i_7]))))) : (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_5])))) & ((~(((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_5] [i_6])))))));
                            }
                        } 
                    } 
                } 
                var_17 ^= ((/* implicit */_Bool) ((int) ((max((((/* implicit */unsigned long long int) var_5)), (var_1))) * (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 5836895597297021172LL))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) && ((!(((/* implicit */_Bool) (unsigned char)252)))))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225241
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        arr_3 [i_0] = (signed char)9;
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (short)4191)))))), (((((/* implicit */_Bool) (signed char)-126)) ? (1274897285U) : (422773010U)))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [13LL] [13LL] [13LL] &= ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        arr_14 [12U] [12U] [i_1] [i_1] [i_1] [i_1] = (-((-(max((246723858U), (((/* implicit */unsigned int) var_9)))))));
                        arr_15 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((_Bool) (~((+(var_0))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
                            var_22 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_10))))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_12))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_22 [(_Bool)1] [i_2] [i_2] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_9)))))))));
                            var_24 = ((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) (~(((unsigned long long int) 1515374900814475449LL))));
                            arr_25 [i_1] [i_2] [i_3] [i_4] [i_4 - 1] [i_4] [i_7] = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)25151)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))));
                            var_26 ^= ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_10))))));
                            arr_26 [i_1] [i_1] [i_1] [i_7] [i_7] = 1274897285U;
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) -5063251378331737540LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15979)))));
                        }
                    }
                    var_28 |= ((/* implicit */long long int) (~(var_15)));
                    var_29 = ((unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (3020070011U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197)))))));
                }
            } 
        } 
    } 
}

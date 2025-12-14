/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30944
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))))) - ((-(((/* implicit */int) ((_Bool) 867709542))))));
                    var_13 = ((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_13 [i_0] [0U] [(unsigned char)13] [(unsigned char)13] [i_2] [(unsigned char)13] [i_0] = (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)75))))))));
                            var_14 |= ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((859601720U) <= (arr_2 [i_1] [i_2] [i_4]))))))));
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0])), (9001309834040831112LL))))))));
                            var_16 = ((/* implicit */unsigned int) (((~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_6 [i_0] [i_0] [(short)4])))))) < (max(((~(var_0))), (((/* implicit */int) (!((_Bool)1))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8))))))), ((-(((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_3])))))));
                            var_18 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_0] [i_2] [i_1 - 2] [i_1] [i_0] [i_0])))))))));
                        }
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(arr_9 [i_3]))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
                        var_21 = ((/* implicit */short) (-(max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((_Bool) var_4)))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (~(var_1))))) ^ (((/* implicit */int) ((((/* implicit */int) ((var_1) <= (((/* implicit */int) (_Bool)0))))) > (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (unsigned char)246)))))))));
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_7])))) || (((/* implicit */_Bool) ((int) var_1))))))));
                        }
                        var_24 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(var_6))))))));
                        var_25 |= (~(min((((/* implicit */int) (!((_Bool)1)))), (max((var_1), (((/* implicit */int) var_4)))))));
                    }
                }
            } 
        } 
    } 
    var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)32645)))))))));
    var_27 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(-3108918570094782615LL))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22961
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */long long int) min((((/* implicit */int) max((((unsigned char) var_0)), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */int) (signed char)114)) / (((/* implicit */int) (signed char)-115))))));
                arr_4 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (16581010267227846596ULL))))) < ((~(var_9))))))) * (min((((/* implicit */unsigned long long int) (signed char)115)), (1865733806481705021ULL)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [2LL] [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) ((signed char) (_Bool)0)))));
                                arr_12 [i_0] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)93))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8)))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_0] [(unsigned char)11] = ((/* implicit */int) ((_Bool) (_Bool)1));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32768)) || (((/* implicit */_Bool) (signed char)-115))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)114)))))));
                    arr_17 [(_Bool)1] [i_0] = ((/* implicit */_Bool) 0U);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_0);
}

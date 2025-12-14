/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212744
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) (-((+(12556702954860305558ULL)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -8070256282903672186LL);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (+(-8070256282903672186LL)));
                                arr_17 [i_4] = ((/* implicit */signed char) 8070256282903672185LL);
                                var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_1 - 2] [i_2 - 3] [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)238), ((unsigned char)214))))) : ((+(arr_7 [i_1 + 3] [i_2 - 2] [i_4 - 1] [i_4 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(4070099041U))))));
                                arr_23 [13LL] [i_5] [(unsigned short)1] [i_1 - 3] [(unsigned short)1] [(unsigned short)1] [i_0] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) arr_2 [i_1 - 3]);
                }
                arr_24 [i_1 - 2] [i_1] = ((/* implicit */unsigned char) (((+(max((arr_10 [i_0] [6] [i_1 - 2]), (((/* implicit */long long int) arr_21 [i_1] [i_1] [(short)16] [i_1] [i_0] [i_1])))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 + 2])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (arr_18 [6]))))))));
            }
        } 
    } 
    var_17 = var_7;
    var_18 = ((/* implicit */unsigned long long int) var_6);
    var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (unsigned char)218))))))) || (((/* implicit */_Bool) var_8))));
}

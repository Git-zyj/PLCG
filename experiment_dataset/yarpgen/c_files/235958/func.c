/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235958
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */long long int) var_5)) - ((+(var_7))))) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) < (arr_4 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 ^= 630137217;
                                arr_16 [i_0] [i_1] [i_1 + 1] [i_2 - 2] [i_3] [i_4] [i_4] = ((/* implicit */int) (~(arr_7 [i_0] [i_0])));
                                var_12 &= arr_1 [i_0];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)10685))));
                                var_14 = ((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_5] [i_6 - 1]);
                                var_15 ^= ((/* implicit */unsigned char) ((((arr_13 [i_2] [7ULL] [i_2]) == (((/* implicit */int) (unsigned short)11)))) ? (((/* implicit */int) (_Bool)0)) : ((+(1329362730)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */short) arr_4 [6LL]);
    }
}

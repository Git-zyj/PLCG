/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3676
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
    var_10 = (short)-14042;
    var_11 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (+((+((~(((/* implicit */int) (unsigned char)67))))))));
                arr_6 [i_0] [i_0 + 2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-14019)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (short)-14037))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-14035)))))));
                                var_15 = (+(((/* implicit */int) (short)-14037)));
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2U))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0] = ((/* implicit */short) 2U);
                    var_17 = ((/* implicit */unsigned short) (short)-14042);
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)0))))));
                                var_19 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)14022))))));
                                arr_22 [i_0 - 1] [(unsigned char)9] [i_2] [i_1 - 1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)240))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)22)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (short)14041);
    /* LoopNest 2 */
    for (signed char i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            {
                var_22 = (short)14036;
                arr_30 [i_8] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)14041))));
                arr_31 [i_7] = ((/* implicit */signed char) 4190208U);
            }
        } 
    } 
}

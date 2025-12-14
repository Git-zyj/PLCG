/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248050
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
    var_12 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) (_Bool)0);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = -5823674763711635219LL;
                    arr_7 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) 0LL);
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) 8384512U);
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 4) /* same iter space */
                        {
                            var_16 = -8076080740771157186LL;
                            var_17 = (signed char)10;
                        }
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) 3843901826U);
                            var_19 += ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_27 [i_8] [i_3] [i_3] [i_0] = ((/* implicit */int) 8987652806487251513LL);
                        }
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) (unsigned short)2501);
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) 2120067459801408970LL);
                            var_22 = ((/* implicit */unsigned short) (signed char)-63);
                        }
                        var_23 = ((/* implicit */short) (signed char)-65);
                    }
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        arr_37 [i_10] [i_10] &= ((/* implicit */unsigned char) 2684519340387045303LL);
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned long long int) -265421262);
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned int) (signed char)-62);
    }
}

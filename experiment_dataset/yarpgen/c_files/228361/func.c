/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228361
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
    var_16 ^= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) 4398046511103LL);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = 2187450724U;
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [6LL] [i_1] [i_2] &= ((/* implicit */signed char) (unsigned char)255);
                        var_18 = ((/* implicit */int) -5742003939157819948LL);
                        arr_12 [i_0] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */_Bool) -4943612227712456810LL);
                    }
                } 
            } 
        }
        for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            var_19 = (signed char)3;
            arr_15 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)7);
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (unsigned short)65535))));
            arr_16 [(unsigned short)7] [i_0] |= ((/* implicit */long long int) (unsigned short)14199);
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                for (long long int i_7 = 3; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_25 [8] = 4943612227712456810LL;
                        var_21 = (unsigned short)65535;
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) (short)1023);
                            arr_29 [i_0] = ((/* implicit */long long int) (signed char)-16);
                        }
                    }
                } 
            } 
        } 
        var_23 += ((/* implicit */unsigned short) (signed char)89);
    }
}

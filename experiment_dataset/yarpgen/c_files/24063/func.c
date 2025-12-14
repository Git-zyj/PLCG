/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24063
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
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -597206101)) ? (((/* implicit */long long int) 67108863)) : (-5492454041146280705LL)));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) (+(-597206101)));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_20 += ((/* implicit */unsigned int) (unsigned char)7);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_6))));
                        arr_14 [i_1 + 3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1467002915)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (+(var_1))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 2929091596U))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) (unsigned short)65256);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (short i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_22 [i_5 - 4] [i_6] [i_7] [16LL] = ((/* implicit */long long int) min((((int) 1409139147319739626LL)), (((/* implicit */int) (unsigned short)279))));
                    var_23 = ((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) var_11);
    }
    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)248))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200472
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */long long int) (unsigned short)40679);
                    var_11 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    var_13 = (-((+(var_1))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]);
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6])) ? (-5136855574835718238LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_18 [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1] [i_4])) + (11193))) - (18))))))));
                        var_16 = ((/* implicit */signed char) (_Bool)1);
                        var_17 = ((/* implicit */signed char) arr_16 [i_3] [i_4] [i_4] [(unsigned short)0] [i_6 + 4]);
                        var_18 -= ((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) * ((~(3280522855U)))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) (((-(3280522855U))) / (1014444436U)));
}

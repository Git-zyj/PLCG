/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199031
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((signed char) arr_10 [i_2 + 1] [i_2 - 4] [i_2 - 2]));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_10 [(unsigned short)2] [6ULL] [i_1]))));
                            arr_11 [i_0] [(unsigned char)9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30908))))) << (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((unsigned char) 1490633387U)))));
                            arr_12 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned char) (-(9411891682102562298ULL))));
                        }
                    } 
                } 
                arr_13 [i_0] [(unsigned char)8] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_17 = ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((unsigned short) ((int) var_0)))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] = ((/* implicit */short) var_5);
                    var_19 = ((/* implicit */unsigned short) max((3203982993U), (((/* implicit */unsigned int) 0))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((3048242508U), (((((/* implicit */_Bool) 2132311238)) ? ((+(3048242508U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                                var_21 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (-1544683209) : (((/* implicit */int) (unsigned short)58352)))) + (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_18 [i_4] [i_4])))))));
                                arr_27 [i_8] [i_7] [i_6] [i_7] [i_4] = ((/* implicit */unsigned short) arr_17 [i_4]);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26163)) ? ((+(((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)62702)))))) : (((/* implicit */int) var_12))));
                                var_23 = ((/* implicit */long long int) ((58720256U) % (2949686963U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 4) 
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6] [i_5] [(signed char)15] = ((/* implicit */unsigned int) (+(((unsigned long long int) arr_30 [i_10] [i_10] [i_10 + 2] [i_9 - 2] [i_9 - 1] [i_9 + 2] [i_4]))));
                                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (0)))), (min((((/* implicit */unsigned int) arr_29 [i_9] [i_9])), (129024U)))))) ? (((int) (~(arr_15 [i_4] [i_4])))) : (((/* implicit */int) max(((signed char)-76), (((/* implicit */signed char) var_4)))))))));
                                var_25 = ((/* implicit */unsigned int) ((unsigned short) var_10));
                                var_26 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

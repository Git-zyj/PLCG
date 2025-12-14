/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205857
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) (_Bool)1)), (var_8)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) ((short) ((((unsigned long long int) (unsigned char)0)) >> (min((9949493603815666935ULL), (((/* implicit */unsigned long long int) var_2)))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (var_6)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */int) ((((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_10)) + (10464))))) > (((/* implicit */int) ((unsigned short) (short)-11867))))) || (((_Bool) 10401989869977869906ULL))));
                                var_17 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned long long int) (_Bool)1))));
                                arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
                var_18 += ((/* implicit */short) ((var_4) + (((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)5604)) < (((/* implicit */int) (unsigned char)238)))))))))));
                var_19 = ((/* implicit */unsigned long long int) (short)10400);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 16; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            {
                arr_29 [i_7 + 2] = ((/* implicit */int) ((short) (_Bool)1));
                var_20 = ((/* implicit */short) ((unsigned short) ((short) 1906161924U)));
                var_21 = ((/* implicit */short) min((((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))) == (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28246
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
    var_14 = ((/* implicit */signed char) min((min((min((5602820089717495785ULL), (((/* implicit */unsigned long long int) (signed char)-90)))), (min((5995090806903400691ULL), (5995090806903400691ULL))))), (((/* implicit */unsigned long long int) var_12))));
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) min((var_13), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
        var_18 = ((/* implicit */unsigned short) min((min((5995090806903400692ULL), (((/* implicit */unsigned long long int) 1)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) var_3);
                var_20 = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
                arr_7 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_7)), (min((((/* implicit */unsigned short) var_6)), (var_11)))));
                var_21 = ((/* implicit */long long int) var_11);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_5))))));
                        var_23 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (min((((/* implicit */unsigned int) var_4)), (var_9))))))));
                        var_24 = ((/* implicit */unsigned long long int) (~(min((min((var_12), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_4))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) (~(3513231815140353887LL)));
                        arr_16 [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (var_9)));
                        var_26 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_11))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_24 [i_3] = ((/* implicit */long long int) (+((+((+(4294967295U)))))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) (~((+(6869174032419803411ULL)))))))))));
                                arr_25 [i_1] [i_2] [i_3] [0] [i_2] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_6))))), (var_8)));
                                var_28 = ((/* implicit */unsigned char) min((min((var_3), (((/* implicit */short) var_0)))), (min((((/* implicit */short) (unsigned char)192)), ((short)-11461)))));
                                var_29 = ((/* implicit */int) min((7736469025256429087ULL), ((-(12451653266806150915ULL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

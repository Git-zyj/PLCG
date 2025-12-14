/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21549
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned int) -6420015099290451891LL);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_16 [i_0 + 3] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65532))))), (min((-6420015099290451898LL), (((/* implicit */long long int) (short)10421))))));
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(-1)))), (min((763921194U), (((/* implicit */unsigned int) (unsigned char)230))))));
                            var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)32756)), (6420015099290451870LL)));
                        }
                        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            var_23 &= ((/* implicit */signed char) min((min((-6420015099290451899LL), (((/* implicit */long long int) (short)10434)))), (((/* implicit */long long int) min((763921214U), (((/* implicit */unsigned int) (signed char)53)))))));
                            arr_19 [i_1] |= ((/* implicit */long long int) (~(((/* implicit */int) min(((short)32745), ((short)192))))));
                        }
                        for (signed char i_6 = 4; i_6 < 12; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) -1);
                            var_25 = ((/* implicit */unsigned int) (+(10018645373726413553ULL)));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-70))))));
                            arr_26 [i_0 + 1] [i_1 + 1] [i_2] [i_3] [i_7 + 1] = ((/* implicit */unsigned long long int) min((8280740666422198168LL), ((+(0LL)))));
                            var_27 = ((/* implicit */unsigned long long int) -1LL);
                            var_28 = ((/* implicit */long long int) 1456767229);
                        }
                        arr_27 [i_0 + 1] [i_1 - 1] [i_2] [i_3] &= ((/* implicit */long long int) (~(-1293797219)));
                        var_29 = ((/* implicit */short) (signed char)89);
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_31 [i_0 - 1] [i_1 - 2] = ((/* implicit */unsigned char) (~(-29)));
                        var_30 = (-((-(4294967295U))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(-8280740666422198141LL))))));
                        var_32 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65522))));
                    }
                    for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 2; i_10 < 9; i_10 += 4) 
                        {
                            var_33 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32755))));
                            var_34 += ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(2147483647)))), (8280740666422198148LL)));
                            var_35 &= ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)109))))));
                            arr_37 [i_0 + 1] [i_1 - 2] [i_2] [i_9 + 2] [i_10 - 1] = ((/* implicit */long long int) (unsigned short)65529);
                        }
                        var_36 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)14730)), (min((4110793744U), (((/* implicit */unsigned int) (short)32763))))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) 2689441970128304967ULL))));
                    }
                    arr_38 [i_0 + 3] [i_0 + 2] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) 8323072);
                }
            } 
        } 
    } 
    var_38 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775782LL)))))));
}

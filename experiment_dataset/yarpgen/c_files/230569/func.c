/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230569
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 = ((/* implicit */int) var_3);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_15 = ((/* implicit */short) (unsigned short)42638);
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) var_11))));
                arr_7 [i_2] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) ((96136540446008807LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34043)))));
                var_17 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1])))))));
                            var_19 += ((/* implicit */unsigned int) ((arr_12 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4 - 1] [8U]) != (arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [13ULL] [i_4])));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) + (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2]))));
                            var_21 ^= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [4])) > (((/* implicit */int) (short)-14104)))));
                        }
                    } 
                } 
            }
            var_22 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_9))))) > ((+(var_1)))))));
            arr_13 [i_0] [i_0] [i_1] = ((/* implicit */int) var_0);
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (5498488037074304674ULL)));
        }
        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_23 -= ((/* implicit */_Bool) (unsigned short)31469);
            arr_18 [i_0] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_5]))))), (var_4)));
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 14; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_29 [i_7] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_9 [i_7] [i_7] [15ULL] [i_8])))));
                            arr_30 [i_0] [i_6] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) var_3);
                            var_24 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_8)), ((~(var_1))))) <= (((/* implicit */unsigned long long int) min((((557458909) | (((/* implicit */int) (_Bool)1)))), (max((var_2), (-1))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */_Bool) ((var_2) - (min((((var_2) << (0))), (((/* implicit */int) var_10))))));
        }
        var_26 &= ((/* implicit */unsigned short) var_6);
    }
}

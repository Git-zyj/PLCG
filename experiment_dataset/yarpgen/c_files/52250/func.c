/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52250
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((-(arr_1 [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 = ((/* implicit */short) min((((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)))) | (-712643287858932091LL))), ((~(-712643287858932081LL)))));
            var_14 = ((/* implicit */unsigned short) (~(712643287858932094LL)));
            var_15 = ((/* implicit */unsigned int) 6332182967842841963ULL);
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_7)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : ((-(((/* implicit */int) (short)7)))))) : ((~(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
            var_17 = ((/* implicit */short) 4294967295U);
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_3)) + (18720)))))), (((((/* implicit */_Bool) min((2644129792U), (4254945017U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((6ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned char)127))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54609))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                var_20 = var_5;
                arr_13 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_4])))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) arr_18 [i_0] [i_3] [i_4] [i_3] [i_6]);
                            arr_19 [i_0] [i_3] [16] [i_5] [i_3] = (-(var_7));
                            var_22 &= ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
            }
            arr_20 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_14 [i_0])))) ? (var_7) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_3])))))));
            var_23 = ((/* implicit */_Bool) ((7699460589713430855ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((/* implicit */long long int) min((-1), (((/* implicit */int) (unsigned char)220))))), (arr_11 [i_0] [i_0] [i_0] [i_3]))))));
            var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 480950191U)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
        }
    }
    var_26 = ((/* implicit */unsigned short) var_2);
    var_27 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((_Bool) var_8)))))));
    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_3)), (3ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_12)))))));
}

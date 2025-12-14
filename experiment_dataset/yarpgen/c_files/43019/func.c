/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43019
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */long long int) (-(var_1)))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_7)))))));
    var_18 = ((/* implicit */_Bool) (+(min((((var_13) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (var_11)))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((var_11) * (min(((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((4294967286U) >> (((var_8) - (4153585684U))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [13U] [i_1] = ((/* implicit */long long int) var_4);
                var_20 = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_4 [(_Bool)1] [i_0 + 4] [i_1]))) || (((/* implicit */_Bool) min((min((arr_4 [i_0] [(short)14] [i_1]), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) arr_3 [i_1])))))))));
                arr_8 [i_1] |= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_0))))) % (((/* implicit */int) max((arr_5 [i_0] [i_1]), (((/* implicit */short) var_13)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (6781601737808162907LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-160723894) : (((/* implicit */int) var_5)))))))));
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((3) + (((/* implicit */int) var_3))))) & (arr_3 [i_1])))) ? (min((((((/* implicit */long long int) -160723894)) + (6781601737808162901LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)63))))))) : (((/* implicit */long long int) max((((((/* implicit */int) (short)-4)) & (((/* implicit */int) arr_2 [i_1] [i_0 + 2])))), (((/* implicit */int) arr_2 [10] [i_0])))))));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_22 = (-(-160723912));
                        var_23 = ((_Bool) ((unsigned char) (unsigned short)1750));
                    }
                    arr_15 [i_2] = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_0 [i_2 + 2])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_2])))))));
                    var_24 |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (2992676282U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))))));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)109)))))))));
                    arr_18 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6781601737808162901LL))))) : (((/* implicit */int) var_3)));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 6; i_6 += 2) 
        {
            for (unsigned int i_7 = 4; i_7 < 9; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */short) var_0);
                    var_27 = ((/* implicit */short) (~(3539823316308688220ULL)));
                    arr_26 [i_6] [i_6] [(short)6] = ((/* implicit */unsigned long long int) arr_24 [i_5]);
                }
            } 
        } 
    } 
}

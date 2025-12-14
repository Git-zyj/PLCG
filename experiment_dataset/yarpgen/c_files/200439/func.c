/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200439
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
    var_19 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))) <= (((/* implicit */int) (!(var_15))))));
                            var_21 = ((/* implicit */int) var_13);
                            arr_9 [i_3] [(unsigned char)2] [i_1] [i_3] [i_1] [i_0] = (unsigned char)163;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (~(max(((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5])))), (((/* implicit */int) var_6))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                arr_16 [i_1] [i_5] [i_1] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_1] [i_6]))) >= ((+(var_12)))));
                                var_23 = ((/* implicit */unsigned char) var_14);
                                arr_17 [i_5] [i_1] [i_4] [i_5] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_12) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) <= (arr_2 [i_0] [i_0]));
                            }
                            arr_18 [i_0] [i_0] [i_0] [(unsigned short)10] &= ((/* implicit */int) arr_13 [(signed char)2] [i_1] [i_4] [i_5]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_13 [i_1] [i_4] [i_1] [i_1])) : ((+(((/* implicit */int) (short)-16930))))))) ? (min((((-1707009280) / (((/* implicit */int) var_9)))), (((/* implicit */int) ((var_11) < (((/* implicit */int) var_8))))))) : (((/* implicit */int) (!(((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)256))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 3; i_7 < 19; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((1707009280), (((/* implicit */int) var_3))))) + (((unsigned long long int) (short)16929))))) || (((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_7]))) : (arr_20 [i_7]))))))));
        var_25 -= ((short) (+(((((/* implicit */int) (short)16929)) / (((/* implicit */int) (unsigned char)161))))));
        var_26 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16930)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_19 [7U] [i_7])) : (((/* implicit */int) max((arr_19 [11] [i_7 + 1]), (((/* implicit */unsigned short) var_4))))))) / (((((/* implicit */int) (short)256)) ^ (-736306311))));
        var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1197597593)) ? (-736306311) : (1507833361)))) ? (2781547270U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))))) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) (_Bool)1))))));
        arr_23 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (max((-736306311), (((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((-736306327), (((/* implicit */int) (short)-16931))))) >= (var_5))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_16))))));
}

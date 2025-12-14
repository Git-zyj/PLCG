/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4671
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (-(((((/* implicit */_Bool) min((1280020609U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned int) 1854288043088774709ULL);
            var_12 = ((/* implicit */short) max((var_12), ((short)-11587)));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -117792030)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)19425)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238)))))));
            var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58938))) : (max((((/* implicit */long long int) 225054971)), (16LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 16LL)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (min((((/* implicit */unsigned long long int) (!(((_Bool) (signed char)127))))), ((~(6892263123391553234ULL)))))));
            arr_12 [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (~(min((16592456030620776921ULL), (11554480950317998376ULL))))));
        }
        arr_13 [i_0] = ((/* implicit */long long int) (short)2047);
        var_15 += ((/* implicit */unsigned short) ((unsigned int) min((min((6892263123391553220ULL), (((/* implicit */unsigned long long int) (unsigned char)254)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16592456030620776921ULL))))))));
        var_16 = ((/* implicit */short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)30016)))))))));
    }
    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) (-(0U)));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(1854288043088774695ULL))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1510325700U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5616))) : (16592456030620776910ULL))) | ((((_Bool)0) ? (1854288043088774735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */short) (-(-225054996)));
                        var_21 = ((short) (unsigned short)44064);
                        arr_22 [i_6] [i_5] [i_4] [i_3 - 3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)19425)))) || ((!(((/* implicit */_Bool) (short)28714))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_25 [i_3] [(unsigned short)2] = ((/* implicit */unsigned int) -225054971);
                        arr_26 [i_7] [i_5] [i_4] [(unsigned short)0] [i_4] [i_3] |= ((/* implicit */unsigned long long int) ((short) 18423005707019990394ULL));
                    }
                }
            } 
        } 
        arr_27 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(11554480950317998396ULL))), ((-(16592456030620776898ULL))))))));
        arr_28 [i_3 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24830))) + (((((/* implicit */_Bool) (-(1854288043088774695ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 23738366689561219ULL)))) : ((-(16592456030620776921ULL))))));
    }
}

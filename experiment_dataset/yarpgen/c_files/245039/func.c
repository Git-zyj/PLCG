/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245039
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (((-(2967607984249005569LL))) ^ (((/* implicit */long long int) var_9))));
        var_17 = var_2;
    }
    for (short i_1 = 3; i_1 < 8; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((2967607984249005577LL) >> ((((~(2967607984249005569LL))) + (2967607984249005611LL)))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) min((min((((/* implicit */int) ((((/* implicit */unsigned long long int) 2967607984249005573LL)) > (var_10)))), (((int) var_13)))), (((/* implicit */int) var_11))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((var_9), (var_12)))), (((-2967607984249005563LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-31082)))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) (-(var_0)))) != (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (-2967607984249005573LL))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_21 = ((/* implicit */short) ((min((((/* implicit */long long int) var_6)), (549755289600LL))) % (((/* implicit */long long int) ((/* implicit */int) ((short) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) -2967607984249005578LL);
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (!((!(((var_0) < (2147483647)))))));
                        var_24 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)232)))));
                    }
                } 
            } 
            arr_20 [i_3] = ((/* implicit */unsigned long long int) var_13);
        }
        for (short i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            arr_25 [i_6] [i_2] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) != (524284))))) * (((unsigned long long int) (unsigned char)254)))));
            arr_26 [i_2] [i_2] = ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) var_8)) * (var_4))), (((/* implicit */unsigned long long int) (short)-8057)))) >> (((((((unsigned long long int) var_0)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24662))))) - (18446744072230223912ULL)))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (unsigned char)60))));
            var_26 -= ((/* implicit */unsigned char) (+(((max((9952907543347371317ULL), (((/* implicit */unsigned long long int) (short)-14874)))) + (max((((/* implicit */unsigned long long int) -2967607984249005553LL)), (var_10)))))));
        }
        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_27 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((int) var_8))))) <= (((unsigned long long int) var_2))));
            arr_29 [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (587862821627301433LL))))) < (((((/* implicit */int) (unsigned char)195)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (unsigned char i_9 = 3; i_9 < 20; i_9 += 2) 
                {
                    {
                        arr_34 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((int) var_14)) - ((~(((/* implicit */int) var_3)))))) % (((/* implicit */int) (unsigned char)62))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_28 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_5)), (((var_10) | (var_15)))));
                            arr_37 [i_2] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) min((587862821627301436LL), (((/* implicit */long long int) var_6))))), (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                            var_29 &= ((/* implicit */unsigned char) var_8);
                            var_30 = ((/* implicit */int) (unsigned char)202);
                        }
                        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            arr_40 [i_2] [i_7] [i_2] [(short)0] |= ((/* implicit */unsigned char) var_7);
                            var_31 = ((/* implicit */unsigned long long int) ((max((var_0), (((/* implicit */int) var_11)))) ^ (((/* implicit */int) ((unsigned char) ((var_8) + (((/* implicit */int) var_7))))))));
                            arr_41 [i_2] [i_7] [i_7] [i_9] [i_7] [i_9] [i_11] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((max((var_9), (((/* implicit */int) (unsigned char)251)))), (-1)))), (((unsigned long long int) -524263))));
                        }
                        for (short i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            var_32 &= (unsigned char)113;
                            var_33 -= ((/* implicit */unsigned char) min(((-(max((var_1), (((/* implicit */unsigned long long int) var_12)))))), (var_15)));
                            arr_45 [i_9] = ((/* implicit */unsigned char) 11577171530100493546ULL);
                        }
                        for (short i_13 = 2; i_13 < 21; i_13 += 1) 
                        {
                            var_34 *= max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) -587862821627301428LL)))) <= (min((((/* implicit */long long int) (short)-1)), (-2323078720568169674LL)))))), (((((10562231310866116617ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))))) + (12719203143292504853ULL))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned char)83), (var_3)))))))));
                        }
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned long long int) var_0);
    }
    var_37 |= ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_6))))), (min((32764), (((/* implicit */int) (unsigned char)173)))))) >= (((((var_2) | (((/* implicit */int) var_7)))) * (((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) var_2)))))))));
}

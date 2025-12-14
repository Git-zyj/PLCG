/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225740
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(2305521629U)))))) ? ((+(((/* implicit */int) (unsigned short)57016)))) : ((-((+(((/* implicit */int) var_1)))))))))));
    var_17 = ((/* implicit */short) var_1);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((var_13) << (((((5U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (1209U))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)115))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))) : (15669965068021152756ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)13))))))));
        var_20 = ((/* implicit */int) ((unsigned char) (unsigned char)238));
        var_21 = ((/* implicit */long long int) (-(4347852085187621416ULL)));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((int) 18446744073709551615ULL))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_3))))) + ((~((~(20U)))))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (-4991248079605799725LL) : (((/* implicit */long long int) ((1411657722U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8523))))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8527)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3599420039U)))) : (arr_7 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min(((short)-32762), (((/* implicit */short) var_6))))) : (((/* implicit */int) (unsigned short)16315)))))));
        arr_9 [i_2] |= ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_3 [i_2]))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8545)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_8)))) ? (min((((/* implicit */unsigned long long int) var_5)), (288230376151711743ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_15)), ((-(5ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3])))))));
        var_25 = ((/* implicit */signed char) (unsigned char)87);
        var_26 = (signed char)46;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2864066864U)) ? (((((/* implicit */_Bool) var_15)) ? (arr_12 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_5] [i_6]))))) : (max((arr_12 [i_3]), ((+(-3489499542025518693LL)))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_9))));
                        arr_22 [i_3] [i_3] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_3]);
                    }
                } 
            } 
        } 
    }
    var_28 *= ((/* implicit */unsigned short) (~(4194288U)));
}

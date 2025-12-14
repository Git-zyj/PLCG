/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226617
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_3 [i_1] [i_1] [i_3]) ^ (arr_3 [i_0] [i_1 - 2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)-62)))))))));
                        var_22 = ((/* implicit */_Bool) arr_5 [i_0]);
                    }
                } 
            } 
            var_23 += ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1])))))), (((((/* implicit */_Bool) var_17)) ? (arr_3 [i_0] [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) << (((/* implicit */int) var_4))));
            var_24 = ((/* implicit */signed char) arr_8 [i_0] [i_1 - 2] [i_0] [i_1 - 2]);
        }
        var_25 |= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)100)))) != (((/* implicit */int) (signed char)100)))) ? (((/* implicit */long long int) -909727100)) : (-8738071358452328193LL)));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */int) (signed char)-108)) + (2147483647))) << (((374713331U) - (374713331U))))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)100)), (arr_11 [i_4])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))) : (arr_10 [i_4] [i_4])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4])) / (((/* implicit */int) arr_11 [i_4]))))) : (arr_10 [i_4] [i_4]))))));
        var_28 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (arr_10 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))))))));
    }
    var_29 &= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_11)), (min((8023001859783773057ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((var_19) - (6498591036584808441LL)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))))));
    var_30 *= ((/* implicit */short) var_14);
    var_31 *= ((/* implicit */signed char) var_17);
    var_32 += ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (9327632048200380028ULL)))), ((+(9119112025509171574ULL)))))));
}

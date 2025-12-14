/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43501
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 134217664)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))), (((35184372088831LL) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-9223372036854775797LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_0))))))) ? (((int) (unsigned short)32760)) : (((/* implicit */int) ((min((3852254432U), (((/* implicit */unsigned int) (unsigned short)32769)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -779814481)) / (442712863U)))) * (((unsigned long long int) (short)16592))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((1776825864U) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) - (((long long int) (_Bool)1)))) << (((((/* implicit */int) var_11)) - (136)))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_4))))))) ^ ((~(min((((/* implicit */unsigned int) (unsigned char)169)), (var_18)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)210)) ? (13363135632333337978ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)118)))))) ? (((int) (unsigned short)65522)) : (((/* implicit */int) min(((unsigned short)32753), (((/* implicit */unsigned short) max((var_5), ((signed char)-120)))))))));
    var_24 += ((/* implicit */signed char) var_12);
}

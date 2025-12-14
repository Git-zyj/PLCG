/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211726
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
    var_16 = max((max(((unsigned short)38612), (min((var_3), (var_3))))), ((unsigned short)40511));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-4119))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) : (8717581281796519952ULL)))))) ? ((+(((((/* implicit */int) (unsigned char)162)) + (((/* implicit */int) (signed char)111)))))) : (((/* implicit */int) ((((((/* implicit */int) (short)4095)) << (((4294967295U) - (4294967279U))))) >= (((/* implicit */int) var_14)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-4096)) % (((/* implicit */int) (unsigned char)26))))) : (min((((/* implicit */unsigned int) (short)-32743)), (1800047837U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (short)4104)) : (((/* implicit */int) (_Bool)1)))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (short)-17194)), (var_13))), (((/* implicit */unsigned short) ((((/* implicit */int) (short)30547)) == (((/* implicit */int) (unsigned short)20308))))))))) > (((((var_4) << (((var_4) - (5391795621161307025LL))))) - (((/* implicit */long long int) ((((/* implicit */int) (short)32744)) << (((var_7) - (1834616016))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
    }
    var_21 |= var_3;
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (0U)))))) ? (((((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4122))) : (4294967293U))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4294967289U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7U))))));
}

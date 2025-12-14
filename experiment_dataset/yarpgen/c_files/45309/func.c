/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45309
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
    var_19 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-25816)) ? (var_18) : (((/* implicit */int) (signed char)-86)))))))));
                arr_6 [i_0] &= ((((/* implicit */_Bool) min(((-(var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (var_6))))))) : (((/* implicit */int) (unsigned char)0)));
                arr_7 [i_1] [i_0] = ((/* implicit */_Bool) (-((+(max((1531327698U), (((/* implicit */unsigned int) (unsigned char)12))))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1401608589)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10968435693889306333ULL)));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (1U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)511))))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) > (2139329292856774504ULL)))), ((((_Bool)0) ? (((/* implicit */int) var_6)) : (2090100133)))))) : ((~(((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12288))) : (36028797018963968ULL)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)87))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (3961397988U)))))) ? ((~(min((-1760041879485016224LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_9))))))))))));
}

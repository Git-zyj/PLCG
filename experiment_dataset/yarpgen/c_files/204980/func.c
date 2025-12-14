/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204980
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((var_0) - (990331087U)))))) ^ ((~(var_8)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) var_3))))) : (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((var_4) == (((/* implicit */int) (unsigned char)9))))) >= ((~(((/* implicit */int) (unsigned char)9))))));
                        var_13 *= ((/* implicit */unsigned char) 4218304879341630380LL);
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 71776119061217280LL)) ? (4486007441326080ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))));
        var_14 ^= ((/* implicit */short) (+(arr_2 [i_0])));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */signed char) ((int) (unsigned short)1));
        var_15 = ((/* implicit */signed char) (short)-12767);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) + (((/* implicit */int) (!(((/* implicit */_Bool) -71776119061217280LL)))))));
    }
    var_17 -= ((/* implicit */_Bool) var_4);
    var_18 = max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (var_4)))), (((var_2) / (((/* implicit */long long int) -526217778)))))));
    var_19 = ((/* implicit */unsigned int) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_3)))))))));
}

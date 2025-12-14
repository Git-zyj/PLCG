/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44988
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_4))));
    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (15394599636464795420ULL)))) || (((/* implicit */_Bool) (short)-2378)))))) != (var_4)));
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 236932730)) ? (((/* implicit */int) (_Bool)0)) : (236932730))) - (768038298)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) != ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)1693))) : (4467570830351532032LL)))))) : (((((/* implicit */int) var_1)) * ((~(((/* implicit */int) (unsigned short)32708)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-4467570830351532040LL), (((/* implicit */long long int) (short)30865))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) (short)-24777)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) (((-(min((((/* implicit */long long int) (unsigned char)64)), (var_3))))) / (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) (short)24324)) <= (((/* implicit */int) var_11)))), ((!(((/* implicit */_Bool) arr_1 [i_2]))))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)232)) * (((/* implicit */int) var_2)))) - (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2] [i_2]) > (((/* implicit */long long int) var_10))))))))));
                    var_15 += ((/* implicit */short) (~(((arr_1 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    var_16 = ((/* implicit */unsigned int) (unsigned char)5);
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206778
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [19ULL] [19ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((((-385292048427856452LL) + (9223372036854775807LL))) << (((arr_1 [i_0]) - (1569612244))))))))) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0 - 1] [i_1 - 1] [i_1]))))) ? (((/* implicit */int) ((_Bool) arr_3 [i_2]))) : (min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) == (((/* implicit */int) arr_7 [16ULL] [i_1] [i_0]))))), ((~(((/* implicit */int) arr_0 [i_0] [i_2]))))))));
                    var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */long long int) (-(2915187113U)))) : (arr_3 [i_1]))) % (((/* implicit */long long int) var_1))));
                }
            } 
        } 
        arr_10 [i_0 - 1] [(unsigned short)9] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3))))) ? (min((-1), (((/* implicit */int) (unsigned short)65515)))) : (min((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned int) 5ULL)), (((/* implicit */unsigned int) max((arr_0 [i_0] [i_0 - 1]), (((/* implicit */unsigned short) (_Bool)1)))))))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) 4385713657960715743LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)38186)) : (((/* implicit */int) arr_6 [i_0] [11] [i_0 + 1]))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_16)))))) ? (var_7) : ((+(((long long int) 1608022924))))));
    var_21 = ((/* implicit */unsigned long long int) var_12);
}

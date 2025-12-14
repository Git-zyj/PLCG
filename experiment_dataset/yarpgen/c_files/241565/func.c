/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241565
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
    var_13 = ((/* implicit */short) (~(max((min((((/* implicit */unsigned long long int) (short)32512)), (9843227762538698765ULL))), ((+(9843227762538698765ULL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned char) ((int) (~(3520614459U)))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_17 [i_4] [(short)12] [i_4] [i_3] [(signed char)6] |= ((/* implicit */unsigned char) ((long long int) ((int) 4951995896407266112LL)));
                            var_14 = ((/* implicit */unsigned short) 8603516311170852850ULL);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_20 [i_0] [1LL] [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) -1205248743)))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_1] [12ULL] [i_0] [i_0] = ((/* implicit */long long int) min(((~(((unsigned long long int) -6972250891473053212LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))))), (min((6972250891473053188LL), (3841073777765316339LL))))))));
                        }
                        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-19))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -6972250891473053217LL))));
}

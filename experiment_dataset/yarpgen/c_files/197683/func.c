/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197683
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_4)))), (arr_1 [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((4855291166802436077ULL), (((/* implicit */unsigned long long int) var_9)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
        arr_5 [i_0] = ((/* implicit */signed char) (_Bool)1);
        arr_6 [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned char) 426663170U);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((4287518806U) * (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((((-2147483647 - 1)) != (((/* implicit */int) var_9))))))))));
                            arr_18 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) (short)20019)) ? (7448490U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                            arr_19 [i_2 + 1] [i_1] [i_2] [i_3] [4ULL] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_15 [i_3] [(_Bool)1] [i_3] [i_4 + 1] [14] [i_4 + 1])), (arr_16 [i_2] [i_2] [i_2] [i_2 + 3])));
                        }
                        var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (short)27334));
                        var_16 -= ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) 1840917256U))))))) ? (((/* implicit */unsigned long long int) max((4287518805U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [(unsigned char)14] [i_0] [(signed char)17] [i_0])))))))) : (((unsigned long long int) arr_7 [(_Bool)1] [i_0]))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (5449199225197725658LL))))) <= (((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66)))))) ? (562949953421311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34832
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
    var_12 ^= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (unsigned char)18);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 423088581U)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 1758087185U)) ? (-7643156428374927271LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16857))))), (((/* implicit */long long int) 2536880099U)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_3] [i_2] [i_0]))) ? (min((var_2), (var_1))) : (((/* implicit */unsigned long long int) max((2536880079U), (2536880087U))))))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [3ULL] = ((/* implicit */unsigned long long int) 3871878715U);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */long long int) ((unsigned long long int) max((var_9), (((/* implicit */long long int) 1103742764U)))));
            arr_15 [i_1] [2LL] [i_0] = ((/* implicit */short) ((unsigned char) (+(17022205690391455619ULL))));
        }
        for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
        {
            arr_20 [i_0] [i_5] = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)255))))));
            var_16 = ((/* implicit */unsigned char) (-(max((var_7), (((/* implicit */unsigned long long int) var_3))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_24 [4U] = ((/* implicit */short) (+(max((((/* implicit */long long int) (~(1758087178U)))), (max((var_6), (var_9)))))));
            arr_25 [i_0] [i_6] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_6])), (var_8))) >= (((/* implicit */unsigned long long int) (+(1758087201U))))));
            arr_26 [i_0] = ((/* implicit */short) ((long long int) var_7));
        }
        arr_27 [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */int) (short)16863)) >> ((((+(var_1))) - (18416665159717114752ULL)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
}

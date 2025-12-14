/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51287
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
    var_17 *= ((/* implicit */unsigned long long int) var_0);
    var_18 &= ((/* implicit */short) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_2]), (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_1])), (-1032916220))))))) ? (((/* implicit */int) arr_5 [i_0] [16ULL] [i_2])) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60271))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)8)) % (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]))))) ? (min((((/* implicit */unsigned int) arr_12 [i_1] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3] [i_4])), (3933184128U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)10)), (max((((/* implicit */short) (_Bool)1)), (arr_4 [i_2])))))))));
                                arr_13 [i_0] [i_3] [i_2] [i_2] [i_2] [i_3] [(unsigned short)5] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (552290840754623697ULL)));
                                var_20 = ((/* implicit */unsigned char) 3411940310911814622ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) | (3943785565U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23920)))))))));
}

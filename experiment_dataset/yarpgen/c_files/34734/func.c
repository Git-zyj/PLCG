/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34734
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)17561))) | (((/* implicit */int) (unsigned char)28)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((((int) arr_1 [i_0] [i_1 - 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_4] [i_2] [i_2])))))));
                                arr_12 [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */short) 4294967295U);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                }
            } 
        } 
        var_20 &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))) <= (max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (var_12))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
        {
            for (unsigned char i_6 = 4; i_6 < 22; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_5] [i_6 - 4] [i_7])), (((arr_6 [i_5] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_5 - 1] [i_5 - 1] [i_7] [i_0] [i_7])) ? ((~(((/* implicit */int) (unsigned char)220)))) : (((((/* implicit */int) (unsigned char)248)) << (((((/* implicit */int) arr_9 [i_0])) - (79))))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -1911101667)) ? (868335297U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5344)))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((12091820176679427297ULL) + (((/* implicit */unsigned long long int) 1875988636U))))));
    }
}

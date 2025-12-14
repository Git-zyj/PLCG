/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195780
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [(unsigned short)11] = ((/* implicit */_Bool) (unsigned short)54598);
                        var_10 = ((/* implicit */_Bool) max(((unsigned short)54598), (((/* implicit */unsigned short) arr_0 [i_0]))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10926))) * (12579580818149048498ULL)));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(_Bool)1])), (var_3)))) ? (((/* implicit */int) ((_Bool) min(((unsigned short)54598), (((/* implicit */unsigned short) (_Bool)0)))))) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_7 [(unsigned short)13] [i_0] [i_0] [(_Bool)1]))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_13 = 1187112370;
        arr_13 [i_4] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        arr_16 [i_5] = arr_2 [i_5] [i_5 - 1];
        var_14 = ((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_5] [i_5]);
    }
}
